int main(){for(int t=0,n,s;t++<1e3;__builtin_printf("%d\n",s))for(s=0,n=t;n>1;s++)n=n%2?3*n+1:n/2;}

// int main() {
//     for(int t=0,n,s;t++<1e3;__builtin_printf("%d\n",s))
//         for(s=0,n=t;n>1;s++) n=n%2?3*n+1:n/2;
// }

// WE CAN USE __builtin_printf INSTEAD OF IMPORT AND PRINTF

// #include <cstdio>

// int s(int n) {
//     return n<2?0:1+s(n%2?3*n+1:n/2);
// }

// int main() {
//     for(int t=1;t<=1e3;) printf("%d\n", s(t++));
// }

// #import<iostream>

// int s(int n) {
//     return n < 2 ? 0 : 1 + s(n % 2 ? 3 * n + 1 : n / 2);
// }

// int main() {
//     for(int t=1;t<=1e3;t++) std::cout << s(t) << "\n";
// }

// #import<iostream>

// int s(int n) {
//     return n < 2 ? 0 : 1 + s(n % 2 ? 3 * n + 1 : n / 2);
// }

// int main() {
//     int t = 1;
// 	while(t<=1e3) {
// 		std::cout << s(t++) << "\n";
// 	}
// }