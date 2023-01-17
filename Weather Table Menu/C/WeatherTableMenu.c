#include <stdio.h>

int main() {
   
    double temperature[2][9][3][13]={{
                              {{22.4,23.4,28.6,31.2,35.4,38.9,38.6,38.1,39.6,32.4,26.7,25.0,39.6},{6.9,7.9,10.0,13.7,18.7,23.4,25.8,26.0,22.5,17.4,13.4,9.2,16.2},{-4.6,-5.1,-2.2,3.3,6.6,13.6,16.5,15.9,12.1,2.5,3.4,-1.5,-5.1}},
                              {{20.5,23.3,28.0,33.5,37.1,42.6,44.1,41.9,39.9,35.8,28.0,22.8,44.1},{2.8,4.8,8.3,13.2,18.5,22.9,25.3,25.4,20.6,14.8,9.3,4.4,14.2},{-19.5,-19.0,-12.0,-4.1,0.7,6.0,8.0,8.9,0.2,-3.7,-9.4,-14.9,-19.5}}, 
                              {{18.6,23.1,25.7,31.5,36.0,40.4,42.5,40.4,38.8,37.4,28.9,21.6,42.5},{3.3,4.5,7.5,12.4,17.6,22.1,24.6,24.6,19.9,14.6,9.5,5.0,13.8},{-15.8,-15.0,-11.8,-3.0,1.4,5.8,8.8,8.7,3.0,-3.4,-7.2,-11.1,-15.8}},
                              {{23.9,24.7,28.1,34.3,33.8,40.2,38.4,37.5,39.7,35.1,27.9,23.5,40.2},{5.2,5.8,8.1,12.0,17.1,21.8,24.4,24.8,20.7,16.1,11.4,7.1,14.5},{-13.5,-13.3,-10.4,-1.2,2.7,8.6,10.9,11.0,3.7,-1.8,-7.8,-10.9,-13.5}},
                              {{20.0,21.3,27.3,30.8,38.9,36.8,39.0,39.1,35.9,31.8,26.2,22.9,39.1},{6.5,7.0,9.1,12.8,18.0,22.9,25.8,26.0,21.6,16.8,12.3,8.3,15.6},{-11.0,-11.5,-8.5,-1.6,2.3,6.6,11.2,9.4,5.9,0.4,-7.0,-10.5,-11.5}},
                              {{23.5,25.2,29.6,33.1,37.8,42.5,43.2,43.2,40.3,38.3,29.0,26.1,43.2},{4.8,5.7,7.9,13.1,18.2,23.0,24.9,25.0,21.1,16.6,9.9,6.6,14.7},{-10.5,-18.8,-6.2,-4.0,1.1,5.0,11.0,9.4,5.4,-1.6,-7.9,-10.1,-18.8}},
                              {{25.2,26.9,32.5,36.2,37.0,41.3,43.8,42.6,40.3,37.3,31.0,27.3,43.8},{5.4,6.5,9.0,13.0,18.1,22.6,25.1,25.2,20.8,15.9,10.7,7.0,14.9},{-20.5,-19.6,-10.5,-4.2,0.8,4.0,8.3,7.6,3.3,-1.0,-8.4,-17.9,-20.5}},
                              {{24.9,26.7,30.8,35.0,37.2,40.7,44.1,42.9,40.2,36.2,29.1,27.4,44.1},{6.4,7.1,9.2,13.2,18.0,22.3,24.5,24.8,21.1,16.7,12.2,8.4,15.3},{-13.1,-18.0,-6.5,-1.0,1.8,4.0,10.1,10.9,4.9,2.4,-3.4,-8.8,-18.0}},
                              {{25.0,27.2,32.0,36.5,37.0,42.1,39.2,40.2,37.5,36.6,29.7,27.4,42.1},{6.8,7.2,9.0,12.6,17.4,21.9,24.3,24.5,20.8,16.5,12.0,8.6,15.1},{-9.6,-11.0,-7.4,-1.6,1.2,7.1,10.0,10.3,6.0,1.3,-3.2,-9.2,-11.0}}
                              },{
                              {{22.4,27.0,30.5,32.5,37.6,41.3,42.6,43.0,40.1,36.0,30.3,25.2,43.0},{9.0,9.9,12.4,16.2,21.1,26.0,28.6,28.5,24.2,19.5,14.4,10.5,18.4},{-8.2,-5.2,-3.8,0.6,4.3,9.5,15.4,11.5,10.0,3.6,-2.9,-4.7,-8.2}},
                              {{24.0,26.4,33.5,34.7,40.6,42.4,45.5,44.5,42.4,38.2,29.9,26.4,45.5},{6.3,7.9,11.0,15.2,20.7,25.7,28.6,28.5,23.7,18.2,11.9,7.8,17.1},{-17.5,-10.9,-6.7,-2.7,2.0,7.4,10.5,8.5,3.3,-0.9,-7.3,-9.9,-17.5}},
                              {{17.1,24.2,27.0,30.2,34.3,36.2,39.5,38.8,38.4,31.9,25.4,21.7,39.5},{0.6,2.3,5.8,10.2,15.0,18.8,21.6,21.6,17.4,12.4,6.6,2.4,11.2},{-26.3,-27.4,-16.6,-7.8,-2.8,0.5,2.6,-0.2,-3.9,-6.9,-11.0,-28.1,-28.1}},
                              {{18.3,23.6,27.0,30.0,34.5,36.6,40.2,38.2,36.6,32.6,26.0,21.8,40.2},{2.6,3.7,6.7,11.0,15.9,20.4,24.0,24.2,19.5,14.2,8.4,4.3,12.9},{-19.9,-15.0,-12.5,-6.2,-1.0,2.9,7.4,6.8,2.0,-4.8,-11.8,-18.9,-19.9}},
                              {{18.0,21.8,26.4,30.2,33.9,35.8,39.8,38.2,37.2,31.3,25.3,21.0,39.8},{0.4,2.2,6.0,10.5,15.3,19.4,22.8,22.8,18.5,13.0,6.9,2.5,11.7},{-27.0,-25.3,-17.0,-7.6,-3.1,1.0,4.0,2.4,-3.2,-7.9,-20.5,-24.3,-27.0}},
                              {{22.6,25.9,30.8,35.8,39.5,44.1,43.9,44.4,41.6,36.9,29.9,26.6,44.4},{6.2,7.6,10.7,15.1,20.2,25.1,28.3,28.2,23.5,17.9,11.9,7.7,16.9},{-10.5,-11.4,-7.0,-2.0,2.7,7.9,12.6,11.6,6.6,-0.8,-4.5,-10.4,-11.4}},
                              {{23.2,27.4,32.4,35.4,42.6,44.4,44.8,43.8,43.3,39.5,30.7,25.9,44.8},{8.2,9.5,12.3,16.1,21.2,26.2,28.7,28.3,24.0,19.1,13.5,9.5,18.1},{-11.0,-5.4,-5.0,-0.8,4.6,8.4,13.4,11.8,7.6,1.6,-4.7,-5.3,-11.0}},
                              {{20.9,25.5,28.8,31.2,39.4,40.8,42.1,41.2,39.2,36.8,29.0,23.8,42.1},{5.4,6.2,9.0,12.8,18.0,23.4,27.0,27.0,22.2,16.5,10.6,6.7,15.4},{-12.6,-9.9,-8.5,-3.6,1.0,6.7,10.5,9.0,5.6,0.1,-7.0,-9.0,-12.6}},
                              {{16.8,23.4,27.8,30.7,35.4,38.7,41.0,41.0,39.0,32.7,25.6,20.5,41.0},{2.5,4.0,7.4,11.7,16.7,21.5,25.2,25.1,20.5,14.8,8.5,4.1,13.5},{-16.7,-15.0,-11.6,-7.0,-0.4,3.8,9.0,8.8,3.4,-2.4,-12.0,-15.3,-16.7}} 
                              }};  


    char dim1[13][10]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December", "Annual"},
            dim2[3][10]={"Maximum", "Average", "Minimum"},
            dim3[2][9][12]={{"Istanbul", "Edirne", "Kirklareli", "Tekirdag", "Canakkale", "Balikesir", "Bursa", "Kocaeli", "Yalova"},{"Izmir", "Manisa", "Kutahya", "Usak", "Afyon", "Denizli", "Aydin", "Mugla", "Burdur"}},
            dim4[2][10]={"Marmara", "Aegean"};
    while(1){
     int indexx2,ch,month,mon,mon2;
    double lowest=5;
    double tempMarmara=0;
    double tempEge=0;
    int indexx,l=0,i=0;
    double sum2=0;
    double sum1=0;
    double lowestMarmara=0,highestMarmara=0;
    double lowestEge=0,highestEge=0;
    printf("Welcome To Weather Program\nThe Processes\n");
    printf("Display The Annual Weather Table (Press 1)\nDisplay The Lowest Temperature The Entered Month (Press 2)\nDisplay The Highest Temperature The Entered Month (Press 3)\nDisplay The Average Of Highest Temperature The Entered Month (Press 4)\nDisplay The Average Of Lowest Temperature The Entered Month (Press 5)\n");
    printf("Display The Average Of Lowest Temperature Between The Cities According To The Entered Month (Press 6)\nDisplay The Average Of Highest Temperature Between The Cities According To The Entered Month (Press 7)\nDisplay The Average Of Lowest Temperature as A Month (Press 8)\nDisplay The Average Of Highest Temperature as A Month (Press 9)\n");
    printf("Display The Average Of Highest Annual Temperature (Press 10)\nDisplay The Average Of Lowest Annual Temperature (Press 11)\n");
    printf("Please enter a process : ");
    scanf("%d",&ch);
    if(ch==1){
    for(int i=0;i<2;i++){
        printf("%s\n",dim4[i]);
        for(int j=0;j<9;j++){
            printf("%s\t",dim3[i][j]);
            for(int k=0;k<13;k++){
                printf("%-15s",dim1[k]);
            }
            printf("\n");
                for(int l=0;l<3;l++){
                    printf("%s ",dim2[l]);
                    for(int k=0;k<13;k++){
                        printf("%-15.2lf",temperature[i][j][l][k]);
                    }
                    printf("\n");
                }
            printf("\n");
        }
    }
}else if(ch==2){
	printf("Please enter the number of the month Between (1-January - 12-December) : ");
	scanf("%d",&month);
	month=month-1;
	lowestMarmara=temperature[0][0][2][month];
	lowestEge=temperature[1][0][2][month];
    for(int i=0;i<2;i++){
        for(int j=0;j<9;j++){
            if(i==0&&temperature[i][j][2][month]<lowestMarmara){
                lowestMarmara=temperature[i][j][2][month];
            }
            else if(i==1&&temperature[i][j][2][month]<lowestEge){
                lowestEge=temperature[i][j][2][month];
            }
        }
    }
    printf("Lowest Temperature in Marmara in %s : %lf\n",dim1[month],lowestMarmara);
    printf("Lowest Temperature in Ege in %s : %lf\n",dim1[month],lowestEge);
}else if(ch==3){
	printf("Please enter the number of the month Between (1-January - 12-December) : ");
	scanf("%d",&month);
	month=month-1;
	highestMarmara=temperature[0][0][0][month];
	highestEge=temperature[1][0][0][month];
    for(int i=0;i<2;i++){
        for(int j=0;j<9;j++){
            if(i==0&&temperature[i][j][0][month]>highestMarmara){
                highestMarmara=temperature[i][j][0][month];
            }
            else if(i==1&&temperature[i][j][0][month]>highestEge){
                highestEge=temperature[i][j][0][month];
            }
        }
    }
    printf("Highest Temperature in Marmara in %s : %lf\n",dim1[month],highestMarmara);
    printf("Highest Temperature in Ege in %s : %lf\n",dim1[month],highestEge);
}else if(ch==4||ch==5){
	printf("Please enter the number of the region (0-Marmara 1-Ege) : ");
	scanf("%d",&i);
	printf("Please enter the number of the month Between (1-January - 12-December) : ");
	scanf("%d",&month);
    printf("Please enter the number of type of temperature (0-Maximum 2-Minimum) : ");
	scanf("%d",&l);
	month=month-1;
	if(i>1||i<0||l>2||l<0){
		printf("Invalid Process!\n");
	}else if(l==1){
	    printf("Invalid Process!\n");
	}else{
        for(int j=0;j<9;j++){
                sum1+=temperature[i][j][l][month];
    }
    sum1/=9;
    if(i==0&&l==0){
    printf("The Average Of Highest Temperature in Marmara in %s : %lf\n",dim1[month],sum1);
    }else if(i==1&&l==0){
    printf("The Average Of Highest Temperature in Ege in %s : %lf\n",dim1[month],sum1);
    }else if(i==0&&l==2){
    printf("The Average Of Lowest Temperature in Ege in %s : %lf\n",dim1[month],sum1);
    }else if(i==1&&l==2){
    printf("The Average Of Lowest Temperature in Ege in %s : %lf\n",dim1[month],sum1);
}
}
}else if(ch==6){	
    printf("Please enter the number of the month Between (1-January - 12-December) : ");
	scanf("%d",&month);
	month=month-1;
	lowestMarmara=temperature[0][0][2][month];
	lowestEge=temperature[1][0][2][month];
    for(int i=0;i<2;i++){
        for(int j=0;j<9;j++){
            if(i==0&&temperature[i][j][2][month]<lowestMarmara){
                lowestMarmara=temperature[i][j][2][month];
                indexx=j;
            }
            else if(i==1&&temperature[i][j][2][month]<lowestEge){
                lowestEge=temperature[i][j][2][month];
                indexx2=j;
            }
        }
    }
    printf("Lowest Temperature in Marmara in %s in %s : %lf\n",dim3[0][indexx],dim1[month],lowestMarmara);
    printf("Lowest Temperature in Ege in %s in %s : %lf\n",dim3[1][indexx2],dim1[month],lowestEge);
}else if(ch==7){
     printf("Please enter the number of the month Between (1-January - 12-December) : ");
	scanf("%d",&month);
	month=month-1;
	highestMarmara=temperature[0][0][0][month];
	highestEge=temperature[1][0][0][month];
    for(int i=0;i<2;i++){
        for(int j=0;j<9;j++){
            if(i==0&&temperature[i][j][0][month]>highestMarmara){
                highestMarmara=temperature[i][j][0][month];
                indexx=j;
            }
            else if(i==1&&temperature[i][j][0][month]>highestEge){
                highestEge=temperature[i][j][0][month];
                indexx2=j;
            }
        }
    }
	printf("Highest Temperature in Marmara in %s in %s: %lf\n",dim3[0][indexx],dim1[month],highestMarmara);
    printf("Highest Temperature in Ege in %s in %s: %lf\n",dim3[1][indexx2],dim1[month],highestEge);	
}else if(ch==8){
	lowestMarmara=temperature[0][0][2][0];
	lowestEge=temperature[1][0][2][0];
	for(int i=0;i<9;i++){
        for(int j=0;j<12;j++){
            if(temperature[0][i][2][j]<lowestMarmara){
                lowestMarmara=temperature[0][i][2][j];
                indexx=i;
                mon=j;
            }
            if(temperature[1][i][2][j]<lowestEge){
                lowestEge=temperature[1][i][2][j];
                indexx2=i;
                mon2=j;
            }
        }
    }
	printf("Lowest Temperature in Marmara in %s in %s : %lf\n",dim3[0][indexx],dim1[mon],lowestMarmara);
    printf("Lowest Temperature in Ege in %s in %s : %lf\n",dim3[1][indexx2],dim1[mon2],lowestEge);	
}else if(ch==9){
	highestMarmara=temperature[0][0][0][0];
	highestEge=temperature[1][0][0][0];
	for(int i=0;i<9;i++){
        for(int j=0;j<12;j++){
            if(temperature[0][i][0][j]>highestMarmara){
                highestMarmara=temperature[0][i][0][j];
                indexx=i;
                mon=j;
            }
            if(temperature[1][i][0][j]>highestEge){
                highestEge=temperature[1][i][0][j];
                indexx2=i;
                mon2=j;
            }
        }
    }
	printf("Highest Temperature in Marmara in %s in %s : %lf\n",dim3[0][indexx],dim1[mon],highestMarmara);
    printf("Highest Temperature in Ege in %s in %s : %lf\n",dim3[1][indexx2],dim1[mon2],highestEge);	
}else if(ch==10||ch==11){
	printf("Please enter the number of the region (0-Marmara 1-Ege) : ");
	scanf("%d",&i);
    printf("Please enter the number of type of temperature (0-Maximum 2-Minimum) : ");
	scanf("%d",&l);
	month=month-1;
	if(i>1||i<0||l>2||l<0){
		printf("Invalid Process!\n");
	}else if(l==1){
	    printf("Invalid Process!\n");
	}else{
        for(int j=0;j<9;j++){
                sum1+=temperature[i][j][l][12];
    }
    sum1/=9;
    if(i==0&&l==0){
    printf("The Average Of Highest %s Temperature in Marmara : %lf\n",dim1[12],sum1);
    }else if(i==1&&l==0){
    printf("The Average Of Highest %s Temperature in Ege : %lf\n",dim1[12],sum1);
    }else if(i==0&&l==2){
    printf("The Average Of Lowest %s Temperature in Ege : %lf\n",dim1[12],sum1);
    }else if(i==1&&l==2){
    printf("The Average Of Lowest %s Temperature in Ege : %lf\n",dim1[12],sum1);
}
}
}else{
	printf("Invalid Process!Please try again!");
}
}
    return 0;
}