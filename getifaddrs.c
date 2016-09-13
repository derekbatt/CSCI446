#include <arpa/inet.h>
#include <sys/socket.h>
#include <ifaddrs.h>
#include <stdio.h>
#include<netdb.h>

int main(){
  struct ifaddrs *ifap, *ifa;
  struct sockaddr_in *sa;
  //struct sockaddr_in6 *sa6;
  char *addr;
  int status;

  getifaddrs(&ifap);

  if (status = getifaddrs(&ifap) != 0){
      fprintf(stderr, "getifaddrs: %s\n", gai_strerror(status));
      return 1;
  }

  for(ifa = ifap; ifa; ifa = ifa->ifa_next){ //itterates through ip addresses with a pointer
    if(ifa->ifa_addr->sa_family == AF_INET) {//ipv4
      sa = (struct sockaddr_in *) ifa->ifa_addr;//get address
      addr = inet_ntoa(sa->sin_addr);//convert ip address to string
      printf("Interface: %s\tAddress: %s\n", ifa->ifa_name, addr);//print interface and ip address
    }

  }

  freeifaddrs(ifap);//frees up memory
  return 0;
}
