// #include<stdio.h>

// typedef struct people{
//   int kor;
//   int eng;
//   int math;
// }stu;

// int main(){
//   int q;
//   scanf("%d", &q);
//   stu a[q];
//   int math[q];
//   int kor[q];
//   int eng[q];
//   int res[q];
//   int temp;
//   for(int ii=0;ii<q;ii++){
//     scanf("%d", &a[ii].kor);
//     scanf("%d", &a[ii].eng);
//     scanf("%d", &a[ii].math); 
//   }

//   for(int p=0;p<q;p++){
//     kor[p] = a[p].kor;
//     eng[p] = a[p].eng;
//     math[p] = a[p].math;
//     res[p] = a[p].math + a[p].kor + a[p].eng;
//   }

  
//   for(int i1=0;i1<q;i1++){
//     for(int j1=0;j1<q-1;j1++){
//       if(kor[j1] < kor[j1+1]){
//         temp = kor[j1];
//         kor[j1] = kor[j1+1];
//         kor[j1+1] = temp;
//       }
//     }
//   }
//   for(int i=0;i<q;i++){
//     for(int j=0;j<q-1;j++){
//       if(eng[j] < eng[j+1]){
//         temp = eng[j];
//         eng[j] = eng[j+1];
//         eng[j+1] = temp;
//       }
//     }
//   }
//   for(int i2=0;i2<q;i2++){
//     for(int j2=0;j2<q-1;j2++){
//       if(math[j2] < math[j2+1]){
//         temp = math[j2];
//         math[j2] = math[j2+1];
//         math[j2+1] = temp;
//       }
//     }
//   }

//   for(int iii=0;iii<q;iii++){
//     for(int jjj=0;jjj<q-1;jjj++){
//       if(res[jjj] < res[jjj+1]){
//         temp = res[jjj];
//         res[jjj] = res[jjj+1];
//         res[jjj+1] = temp;
//       }
//     }
//   }

//   for(int i3=0;i3<q;i3++){
//     printf("%d %d %d %d\n",kor[i3],eng[i3],math[i3],res[i3]);
    
//   }
    
// }
