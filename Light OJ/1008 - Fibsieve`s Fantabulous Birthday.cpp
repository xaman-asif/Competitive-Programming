    #include <stdio.h>
    #include <math.h>
    int main()
    {
        long double T, cases = 1;
        scanf("%Lf", &T);
     
        while(T--){
            long double temp, sec, diag;
            scanf("%Lf", &sec);
            diag = sqrt(sec);
            diag = ceil(diag);
            if(fmod(diag,2) == 0){
                temp = diag;
                diag = pow(diag,2) - diag + 1;
                if(sec > diag){
                    printf("Case %0.0Lf: %0.0Lf %0.0Lf\n",cases++, temp, temp - sec + diag);
                }
                else if(diag > sec){
                    printf("Case %0.0Lf: %0.0Lf %0.0Lf\n",cases++, temp + sec - diag, temp);
                }
                else if(diag==sec){
                    printf("Case %0.0Lf: %0.0Lf %0.0Lf\n",cases++, temp, temp);
                }
            }
            else if(fmod(diag,2) != 0){
                temp = diag;
                diag = pow(diag,2) - diag + 1;
                if(sec > diag){
                    printf("Case %0.0Lf: %0.0Lf %0.0Lf\n",cases++, temp - sec + diag, temp);
                }
                else if(diag > sec){
                    printf("Case %0.0Lf: %0.0Lf %0.0Lf\n",cases++, temp, temp + sec - diag);
                }
                else if(diag==sec){
                    printf("Case %0.0Lf: %0.0Lf %0.0Lf\n",cases++, temp, temp);
                }
            }
        }
        return 0;
    }
     

