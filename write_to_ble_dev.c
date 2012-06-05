/////*  */
////
////#include <sys/types.h>
////#include <sys/stat.h>
////#include <sys/param.h>	/* for NAME_MAX */
////#include <string.h>
////#include <strings.h>	/* for strcasecmp() */
////#include <stdio.h>
////#include <stdlib.h>
////#include <unistd.h>
////#include <limits.h>
////#include <dirent.h>
////#include <fcntl.h>
////#define SIZE_OF_ARRAY 100
//////#define MAC_ADDRESS_LENGTH 6
//////int main (int argc, char *argv[])
//////{
//////	printf("initiating buffer write/n");
//////  int fi;
//////  fi = open("/mnt/storage/BLE.RIB",O_RDONLY); /* read-only file */
//////  if (fi >= 0)				      /* BLE file exists */
//////  {
//////      printf("BLE.RIB found\n");
//////      int fd;
//////      fd = open("/dev/cc2540_ble",O_WRONLY); /* just to write */
//////      if (fd)
//////	{
//////	  /* read 6 bytes from the ble file */
//////	  char macaddress[MAC_ADDRESS_LENGTH];
//////	  int ret = read (fi,macaddress,MAC_ADDRESS_LENGTH);
//////
//////	  /* write it to the device */
//////	  ret = write (fd, macaddress, ret);
//////	  return 0;
//////	}
//////      else
//////	{
//////	  return -1;
//////	}
//////
//////    }
//////  else				/* BLE file doesn't exist */
//////    {
//////      printf("BLE.RIB not found\n");
//////      int fd;
//////      fd = open("/dev/cc2540_ble",O_WRONLY); /* just to write */
//////      int ret = write(fd, "0",1);
//////      return 0;
//////    }
//////  return -1;
//////
//////}
////
////#define MAC_ADDRESS_LENGTH 100
////int main (int argc, char *argv[])
////{
////	printf("initiating buffer write\n");
////  int fi;
////  FILE *tempfi;
////  fi = open("/dev/graphics/fb0",O_RDONLY); /* read-only file */
////  if (fi >= 0)				      /* BLE file exists */
////    {
////      printf("fb0 found \n");
////      FILE *fd;
////      //int fd;
////      //fd = open("/dev/fb0_binary1",O_WRONLY); /* just to write */
////      fd = fopen("/dev/fb0_binary1","w"); /* just to write */
////      if (fd)
////	{
////	  /* read 6 bytes from the ble file */
////	  char macaddress[MAC_ADDRESS_LENGTH];
////	  //int ret = read (fi,macaddress,MAC_ADDRESS_LENGTH);
////	  tempfi = fopen("/dev/graphics/fb0","w");
////	  /* write it to the device */
////	  //ret = write (fd, macaddress, ret);
////	  fwrite(tempfi,2,100,fd);
////	  printf("file fb0_binary1 written \n");
////	  return 0;
////	}
////      else
////	{
////	  return -1;
////	}
////
////    }
////  else				/* BLE file doesn't exist */
////    {
////      printf("BLE.RIB not found\n");
////      int fd;
////      fd = open("/dev/fb0_binary",O_WRONLY); /* just to write */
////      int ret = write(fd, "0",1);
////      return 0;
////    }
////  return -1;
////
////}
////
//////#define MAC_ADDRESS_LENGTH 6
//////int main (int argc, char *argv[])
//////{
//////	printf("initiating buuuuuuffer write\n");
//////	//FILE *tempfb0;
//////	int tempfb0;
//////	//long int sz;
//////	//tempfb0=fopen("/dev/graphics/fb0","r");
//////	tempfb0=open("/dev/graphics/fb0",O_RDONLY);
//////	if (tempfb0>=0)				      /* BLE file exists */
//////	{
//////	int temp_fd;
//////	//temp_fd=fileno(tempfb0);
//////	struct stat buf;
//////	if(fstat(temp_fd, &buf)==-1)
//////		{
//////		printf("error in fstat\n");
//////		}
//////
//////	long sz = buf.st_size;
//////
//////	//fseek(tempfb0,0,SEEK_END);
//////	//sz=ftell(tempfb0);
//////	printf("file size is %i\n",sz);
//////	//if (tempfb0!=NULL)				      /* BLE file exists */
//////
//////		printf("fb0 found\n");
//////		int fd;
//////		FILE *tempfile;
//////		tempfile=fopen("/dev/fb0_binary","a+");
//////		fd = open("/dev/fb0_binary",O_WRONLY); /* just to write */
//////		if (fd)
//////		{
//////			printf("fb0 open\n");
//////			/* read 6 bytes from the ble file */
//////			char macaddress[MAC_ADDRESS_LENGTH];
////////			char szArray[sz];
//////			char szArray[SIZE_OF_ARRAY];
//////			printf("begin fwrite\n");
//////			int ret = read (tempfb0,macaddress,MAC_ADDRESS_LENGTH);
//////			fwrite(tempfb0,sizeof(szArray[0]),sizeof(szArray)/sizeof(szArray[0]),tempfile);
//////			/* write it to the device */
//////			ret = write (fd, macaddress, ret);
//////			printf("file write complete \n");
//////			return 0;
//////		}
//////		else
//////		{
//////			return -1;
//////		}
//////
//////    }
//////  else				/* BLE file doesn't exist */
//////    {
//////      printf("fb0 not found\n");
//////      int fd;
//////      fd = open("/dev/fb0_binary",O_WRONLY); /* just to write */
//////      int ret = write(fd, "0",1);
//////      return 0;
//////    }
//////  return -1;
//////
//////}
////
////
////
//////int main() {
//////  printf("Hello, world!\n");
//////  return 0;
//////}
//
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//#define OFFSET 8
//struct rec
//{
//	unsigned short int mydata;
//};
//
//const int IMG_W=428;
//const int IMG_H=240;
//const int depth=7;
//int TEMP_X=0;
//
//unsigned short int R_MASK_BUFFER=0XF800;
//unsigned short int G_MASK_BUFFER=0X7E0;
//unsigned short int B_MASK_BUFFER=0X1F;
//
//unsigned short int R_MASK=0XF800;
//unsigned short int G_MASK=0X7E0;
//unsigned short int B_MASK=0X1F;
//
//unsigned short int R,G,B=0;
//unsigned short int NEW_R,NEW_G,NEW_B=0;
//unsigned short int new_color_global=0;
//
//
//typedef struct{
//	short int loc_A;
//	short int loc_case;
//	float A_scalar;
//	float B_scalar;
//	float C_scalar;
//	float D_scalar;
//}PIXEL;
//
//////////////////reference for predistortion anti-aliasing//////////////////
/////////////neighbouring 4 pixels are labled as following///////////////////
////_______________
////|A	 |B		|
////|		 |		|
////|		 |		|
////|------+------|
////|C	 |D		|
////|		 |		|
////|______|______|
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
//void getNewLocation();
//unsigned short int getNewColor(float scalar1,short int pixel_loc,FILE *file_ptr1);
//unsigned short int assignWhichCase(double A,double B,double C,double D);
//unsigned short int checkGreaterThanZero(double input);
//unsigned short int checkWhichCase(PIXEL cellXYvector1_ptr,FILE *file_ptr,FILE *newfile_ptr);
//void readRGB(unsigned short int color_passed);
//void getScalars(int ,int,float,float,PIXEL *);
//int main()
//{
//	int counter;
//	FILE *ptr_myfile;
//	struct rec my_record;
//	unsigned short int new_color=0;
//	FILE *ptr_newfile;
//
//	/*below is a dummy buffer from which colors are read*/
////	ptr_myfile=fopen("/dev/graphics/fb0","r+b");
//	ptr_myfile=fopen("/data/fb0_binary_test1","r+b");
//	/*below is a dummy buffer where new pre-distorted color values are written to */
//	ptr_newfile=fopen("/data/fb0_new","a");
//	if (!ptr_myfile)
//	{
//	printf("Unable to open file!");
//	}
//
//	int array_length=IMG_W*IMG_H;
//	PIXEL *cellXYvector1=malloc(array_length*sizeof(PIXEL));
//	memset(cellXYvector1, 0, array_length*sizeof(PIXEL));
//	int k=0;
//	int i,j=0;
//	int which_case;
//	int sz1=0;
//	printf("hello world!\n");
//
//	double center_p[2]={(IMG_H-1.0)/2.0,(IMG_W-1.0)/2.0};
//	float temp_scalar_array[4]={0,0,0,0};
//	memset(temp_scalar_array,0,4);
//
//	//printf("size of cellXYvector1 = %d \n",sizeof(cellXYvector1));
//
//	int X_diff=12;
//	int Y_diff=16;
//
//	int x=1;
//	int y=1;
//	double vector[2]={0,0};
//
//	double temp_vector_magnitude=0;
//	double xd,yd=0;
//
//	double newX_G=0;
//	double newY_G=0;
//	int x0;
//	int y0;
//	double xdiff=0;
//	double ydiff=0;
//
//	typedef double pixel_scalar;
//	typedef double pixel_color;
//
//	unsigned long int index=0;
//	enum closest_pixel_t{pixel_A,pixel_B,pixel_C,pixel_D};
//	enum closest_pixel_t which_pixel;
//
//	double temp_p=pow((center_p[0]+X_diff-1.0),2)+pow((center_p[1]+Y_diff-1.0),2);
//	double ax=(-1.0*(X_diff)/(center_p[0]+X_diff))/temp_p;
//	double ay=(-1.0*(Y_diff)/(center_p[1]+Y_diff))/temp_p;
//
//	printf("generating lookup table \n");
//	for (x=0;x<IMG_H;x++){
//		temp_vector_magnitude=0;
//		for (y=0;y<IMG_W;y++){
//
//			index=IMG_W*x+y;
//
//			i=x;
//			j=y;
//
//			vector[0]=i-center_p[0];
//			vector[1]=j-center_p[1]; //%point at center
//
//
//			temp_vector_magnitude=pow((vector[0]),2)+pow((vector[1]),2);
//			xd=(vector[0]/(1.0+ax*(temp_vector_magnitude)));
//			yd=(vector[1]/(1.0+ay*(temp_vector_magnitude)));
//			newX_G=center_p[0]+xd;
//			newY_G=center_p[1]+yd;
//
//			if((newX_G<-1)||(newX_G>(IMG_H))||(newY_G<-1)||(newY_G>(IMG_W))){
//				x0=round(newX_G);
//				y0=round(newY_G);
//				cellXYvector1[index].loc_A=IMG_W*x0+y0;
//				cellXYvector1[index].A_scalar=0;
//				cellXYvector1[index].B_scalar=0;
//				cellXYvector1[index].C_scalar=0;
//				cellXYvector1[index].D_scalar=0;
//				cellXYvector1[index].loc_case=0;
//
//			}else{
//				x0=round(newX_G);
//				y0=round(newY_G);
//				xdiff=(newX_G-x0);
//				ydiff=(newY_G-y0);
//
//				if((xdiff>0)&&(ydiff>0)){
//					which_pixel=pixel_A;
//					cellXYvector1[index].loc_A=IMG_W*x0+y0;
//					getScalars(x0,y0,fabs(xdiff),fabs(ydiff),&cellXYvector1[index]);
//				}else if((xdiff>0)&&(ydiff<0)){
//					which_pixel=pixel_B;
//					cellXYvector1[index].loc_A=IMG_W*x0+(y0-1);
//					getScalars(x0,(y0-1),fabs(xdiff),(1-fabs(ydiff)),&cellXYvector1[index]);
//				}else if((xdiff<0)&&(ydiff>0)){
//					which_pixel=pixel_C;
//					cellXYvector1[index].loc_A=IMG_W*(x0-1)+y0;
//					getScalars((x0-1),y0,(1-fabs(xdiff)),fabs(ydiff),&cellXYvector1[index]);
//				}else if((xdiff<0)&&(ydiff<0)){
//					which_pixel=pixel_D;
//					cellXYvector1[index].loc_A=IMG_W*(x0-1)+(y0-1);
//					getScalars((x0-1),(y0-1),(1-fabs(xdiff)),(1-fabs(ydiff)),&cellXYvector1[index]);
//				};
//
//				cellXYvector1[index].loc_case=assignWhichCase(cellXYvector1[index].A_scalar,cellXYvector1[index].B_scalar,cellXYvector1[index].C_scalar,cellXYvector1[index].D_scalar);
//			};
//		};
//	};
//
//    time_t start, stop;
//    clock_t ticks; long count;
//
//      time(&start);
//      // Do stuff
//
//	for(i=0;i<102720;i++){
//		TEMP_X=i;
//		new_color=checkWhichCase(cellXYvector1[i],ptr_myfile,ptr_newfile);
//		//fwrite((int *)&new_color,2,1,ptr_newfile);
//		}
//
//    i=0;
//    while(i<50000)
//    {
// 	//printf("Work work %d\n", i);
//         i++;
//         ticks = clock();
//
//    }
//
//    time(&stop);
//
//    printf("Used %0.2f seconds of CPU time. \n", (double)ticks/CLOCKS_PER_SEC);
//    printf("Finished in about %.0f seconds. \n", difftime(stop, start));
////	printf("time now is %li\n",tv.tv_usec);
//	printf("end of program \n");
//	return 0;
//}
//unsigned short int assignWhichCase(double A,double B,double C,double D){
//	unsigned short int temp=0;
//	unsigned short int temp_A,temp_B,temp_C,temp_D;
//	temp_A=checkGreaterThanZero(A);
//	temp_B=checkGreaterThanZero(B);
//	temp_C=checkGreaterThanZero(C);
//	temp_D=checkGreaterThanZero(D);
//	temp=8*temp_A+4*temp_B+2*temp_C+temp_D;
//	return temp;
//}
//
//unsigned short int checkGreaterThanZero(double input){
//	if (input>0){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//
//unsigned short int getNewColor(float scalar1,short int pixel_loc,FILE *file_ptr1){
//	struct rec my_record;
//	unsigned short int new_color=0;
////	rewind(file_ptr1);
////	fseek(file_ptr1,sizeof(struct rec)*(pixel_loc-1),SEEK_SET);
////	fread(&my_record,sizeof(struct rec),1,file_ptr1);
//	NEW_R=0;
//	NEW_G=0;
//	NEW_B=0;
//	// R=(my_record.mydata)>>11;
//	// G=(my_record.mydata & G_MASK_BUFFER)>>5;
//	// B=(my_record.mydata & B_MASK_BUFFER);
//	// NEW_R=R*scalar1;
//	// NEW_G=G*scalar1;
//	// NEW_B=B*scalar1;
//
//	NEW_R=((my_record.mydata)>>11)*scalar1;
//	NEW_G=((my_record.mydata & G_MASK_BUFFER)>>5)*scalar1;
//	NEW_B=((my_record.mydata & B_MASK_BUFFER))*scalar1;
//	new_color=(NEW_R<<11)|(NEW_G<<5)|(NEW_B);
//
//return new_color;
//}
//void readRGB(unsigned short int color_passed){
//	R=(color_passed & R_MASK)>>11;
//	G=(color_passed & G_MASK)>>5;
//	B=(color_passed & B_MASK);
//	printf("new r is %i \n",R);
//	printf("new g is %i \n",G);
//	printf("new b is %i \n",B);
//}
//
//void getScalars(int x_location,int y_location,float xdiff,float ydiff,PIXEL *cellXYvector1_temp){
//
//	if((x_location<0)||(x_location>(IMG_H-1))||(y_location<0)||(y_location>(IMG_W-1))){
//		cellXYvector1_temp->A_scalar=0;
//	}else{
//		cellXYvector1_temp->A_scalar=(1-ydiff)*(1-xdiff);
//	};
//	if((x_location<0)||(x_location>(IMG_H-1))||((y_location+1)<0)||((y_location+1)>(IMG_W-1))){
//		cellXYvector1_temp->B_scalar=0;
//	}else{
//		cellXYvector1_temp->B_scalar=(ydiff)*(1-xdiff);
//	};
//	if(((x_location+1)<0)||((x_location+1)>(IMG_H-1))||(y_location<0)||(y_location>(IMG_W-1))){
//		cellXYvector1_temp->C_scalar=0;
//	}else{
//		cellXYvector1_temp->C_scalar=(1-ydiff)*(xdiff);
//	};
//	if(((x_location+1)<0)||((x_location+1)>(IMG_H-1))||((y_location+1)<0)||((y_location+1)>(IMG_W-1))){
//		cellXYvector1_temp->D_scalar=0;
//	}else{
//		cellXYvector1_temp->D_scalar=((ydiff*xdiff));
//	};
//}
//unsigned short int checkWhichCase(PIXEL cellXYvector1_ptr,FILE *file_ptr,FILE *newfile_ptr){
//	new_color_global=0;
//	switch (cellXYvector1_ptr.loc_case){
//	case 0:
//		new_color_global=0;
//		//readRGB(new_color_global);
//	break;
//	case 1:
//		new_color_global=getNewColor(cellXYvector1_ptr.D_scalar,cellXYvector1_ptr.loc_A+IMG_W+1,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 2:
//		new_color_global=getNewColor(cellXYvector1_ptr.C_scalar,cellXYvector1_ptr.loc_A+IMG_W,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 3:
//		new_color_global=getNewColor(cellXYvector1_ptr.C_scalar,cellXYvector1_ptr.loc_A+IMG_W,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.D_scalar,cellXYvector1_ptr.loc_A+IMG_W+1,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 4:
//		new_color_global=getNewColor(cellXYvector1_ptr.B_scalar,cellXYvector1_ptr.loc_A+1,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 5:
//		new_color_global=getNewColor(cellXYvector1_ptr.B_scalar,cellXYvector1_ptr.loc_A+1,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.D_scalar,cellXYvector1_ptr.loc_A+IMG_W+1,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 6:
//		new_color_global=getNewColor(cellXYvector1_ptr.B_scalar,cellXYvector1_ptr.loc_A+1,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.C_scalar,cellXYvector1_ptr.loc_A+IMG_W,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 7:
//		new_color_global=getNewColor(cellXYvector1_ptr.B_scalar,cellXYvector1_ptr.loc_A+1,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.C_scalar,cellXYvector1_ptr.loc_A+IMG_W,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.D_scalar,cellXYvector1_ptr.loc_A+IMG_W+1,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 8:
//		new_color_global=getNewColor(cellXYvector1_ptr.A_scalar,cellXYvector1_ptr.loc_A,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 9:
//		new_color_global=getNewColor(cellXYvector1_ptr.A_scalar,cellXYvector1_ptr.loc_A,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.D_scalar,cellXYvector1_ptr.loc_A+IMG_W+1,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 10:
//		new_color_global=getNewColor(cellXYvector1_ptr.A_scalar,cellXYvector1_ptr.loc_A,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.C_scalar,cellXYvector1_ptr.loc_A+IMG_W,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 11:
//		new_color_global=getNewColor(cellXYvector1_ptr.A_scalar,cellXYvector1_ptr.loc_A,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.C_scalar,cellXYvector1_ptr.loc_A+IMG_W,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.D_scalar,cellXYvector1_ptr.loc_A+IMG_W+1,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 12:
//		new_color_global=getNewColor(cellXYvector1_ptr.A_scalar,cellXYvector1_ptr.loc_A,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.B_scalar,cellXYvector1_ptr.loc_A+1,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 13:
//		new_color_global=getNewColor(cellXYvector1_ptr.A_scalar,cellXYvector1_ptr.loc_A,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.B_scalar,cellXYvector1_ptr.loc_A+1,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.D_scalar,cellXYvector1_ptr.loc_A+IMG_W+1,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 14:
//		new_color_global=getNewColor(cellXYvector1_ptr.A_scalar,cellXYvector1_ptr.loc_A,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.B_scalar,cellXYvector1_ptr.loc_A+1,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.C_scalar,cellXYvector1_ptr.loc_A+IMG_W,file_ptr);
//		//readRGB(new_color_global);
//		break;
//	case 15:
//		new_color_global=getNewColor(cellXYvector1_ptr.A_scalar,cellXYvector1_ptr.loc_A,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.B_scalar,cellXYvector1_ptr.loc_A+1,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.C_scalar,cellXYvector1_ptr.loc_A+IMG_W,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr.D_scalar,cellXYvector1_ptr.loc_A+IMG_W+1,file_ptr);
////		readRGB(new_color_global);
//		break;
//	}
//	return new_color_global;
//}






#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define OFFSET 8
struct rec
{
	unsigned short int mydata;
};
struct rec my_record;
struct rec my_A;
struct rec my_B;
struct rec my_C;
struct rec my_D;
const int IMG_W=428;
const int IMG_H=240;
const int depth=7;
int TEMP_X=0;

unsigned short int R_MASK_BUFFER=0XF800;
unsigned short int G_MASK_BUFFER=0X7E0;
unsigned short int B_MASK_BUFFER=0X1F;

unsigned short int R_MASK=0XF800;
unsigned short int G_MASK=0X7E0;
unsigned short int B_MASK=0X1F;

unsigned short int R,G,B=0;
unsigned short int NEW_R,NEW_G,NEW_B=0;
unsigned short int new_color_global=0;

struct PIXEL_RGB{
	unsigned short int current_r;
	unsigned short int current_g;
	unsigned short int current_b;
};
struct PIXEL_MATRIX{


	unsigned short int pixel_array[4];
};
struct PIXEL_MATRIX current_matrix;
struct PIXEL_RGB current_A;
struct PIXEL_RGB current_B;
struct PIXEL_RGB current_C;
struct PIXEL_RGB current_D;

typedef struct{
	short int loc_A;
	short int loc_case;
	float A_scalar;
	float B_scalar;
	float C_scalar;
	float D_scalar;
}PIXEL;
typedef struct{
    struct timeval ru_utime; /* user time used */
    struct timeval ru_stime; /* system time used */
    long   ru_maxrss;        /* maximum resident set size */
    long   ru_ixrss;         /* integral shared memory size */
    long   ru_idrss;         /* integral unshared data size */
    long   ru_isrss;         /* integral unshared stack size */
    long   ru_minflt;        /* page reclaims */
    long   ru_majflt;        /* page faults */
    long   ru_nswap;         /* swaps */
    long   ru_inblock;       /* block input operations */
    long   ru_oublock;       /* block output operations */
    long   ru_msgsnd;        /* messages sent */
    long   ru_msgrcv;        /* messages received */
    long   ru_nsignals;      /* signals received */
    long   ru_nvcsw;         /* voluntary context switches */
    long   ru_nivcsw;        /* involuntary context switches */
}rusage;
unsigned short int input_array[102720];
unsigned short int output_array[102720];
////////////////reference for predistortion anti-aliasing//////////////////
///////////neighbouring 4 pixels are labled as following///////////////////
//_______________
//|A	 |B		|
//|		 |		|
//|		 |		|
//|------+------|
//|C	 |D		|
//|		 |		|
//|______|______|
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
unsigned short int getNewColor(float scalar1,short int pixel_loc,FILE *file_ptr1,int temp_index);
unsigned short int assignWhichCase(double A,double B,double C,double D);
unsigned short int checkGreaterThanZero(double input);
unsigned short int checkWhichCase(PIXEL *cellXYvector1_ptr,FILE *file_ptr,FILE *newfile_ptr,int temp_index);
void readRGB(unsigned short int color_passed);
void getScalars(int ,int,float,float,PIXEL *);
void timeval_subtract (struct timeval *result,struct timeval *x,struct timeval *y);
int main()
{
	FILE *ptr_myfile;
	FILE *ptr_newfile;
	unsigned short int new_color=0;
	/*fb0_binary3 is a dummy buffer from which colors are read*/
	ptr_myfile=fopen("z:/fb0_binary3","r+b");
	/*fb0_binary_new is a dummy buffer where new pre-distorted color values are written to */
	ptr_newfile=fopen("z:/fb0_binary_new","a");
	if (!ptr_myfile)
	{
	printf("Unable to open file!");
	}

	int array_length=IMG_W*IMG_H;
	PIXEL *cellXYvector1=malloc(array_length*sizeof(PIXEL));
	memset(cellXYvector1, 0, array_length*sizeof(PIXEL));
	int i,j=0;
	printf("hello world!\n");

	double center_p[2]={(IMG_H-1.0)/2.0,(IMG_W-1.0)/2.0};
	float temp_scalar_array[4]={0,0,0,0};
	memset(temp_scalar_array,0,4);

//	printf("size of cellXYvector1 = %d \n",sizeof(cellXYvector1));

	int X_diff=12;
	int Y_diff=16;

	int x=1;
	int y=1;
	double vector[2]={0,0};

	double temp_vector_magnitude=0;
	double xd,yd=0;

	double newX_G=0;
	double newY_G=0;
	int x0;
	int y0;
	double xdiff=0;
	double ydiff=0;

	typedef double pixel_scalar;
	typedef double pixel_color;

	unsigned long int index=0;
	enum closest_pixel_t{pixel_A,pixel_B,pixel_C,pixel_D};
	enum closest_pixel_t which_pixel;
	double temp_p=pow((center_p[0]+X_diff-1.0),2)+pow((center_p[1]+Y_diff-1.0),2);
	double ax=(-1.0*(X_diff)/(center_p[0]+X_diff))/temp_p;
	double ay=(-1.0*(Y_diff)/(center_p[1]+Y_diff))/temp_p;

	for (x=0;x<IMG_H;x++){
		temp_vector_magnitude=0;
		for (y=0;y<IMG_W;y++){

			index=IMG_W*x+y;

			i=x;
			j=y;

			vector[0]=i-center_p[0];
			vector[1]=j-center_p[1]; //%point at center


			temp_vector_magnitude=pow((vector[0]),2)+pow((vector[1]),2);
			xd=(vector[0]/(1.0+ax*(temp_vector_magnitude)));
			yd=(vector[1]/(1.0+ay*(temp_vector_magnitude)));
			newX_G=center_p[0]+xd;
			newY_G=center_p[1]+yd;

			if((newX_G<-1)||(newX_G>(IMG_H))||(newY_G<-1)||(newY_G>(IMG_W))){
				x0=round(newX_G);
				y0=round(newY_G);
				cellXYvector1[index].loc_A=IMG_W*x0+y0;
				cellXYvector1[index].A_scalar=0;
				cellXYvector1[index].B_scalar=0;
				cellXYvector1[index].C_scalar=0;
				cellXYvector1[index].D_scalar=0;
				cellXYvector1[index].loc_case=0;

			}else{
				x0=round(newX_G);
				y0=round(newY_G);
				xdiff=(newX_G-x0);
				ydiff=(newY_G-y0);

				if((xdiff>0)&&(ydiff>0)){
					which_pixel=pixel_A;
					cellXYvector1[index].loc_A=IMG_W*x0+y0;
					getScalars(x0,y0,fabs(xdiff),fabs(ydiff),&cellXYvector1[index]);
				}else if((xdiff>0)&&(ydiff<0)){
					which_pixel=pixel_B;
					cellXYvector1[index].loc_A=IMG_W*x0+(y0-1);
					getScalars(x0,(y0-1),fabs(xdiff),(1-fabs(ydiff)),&cellXYvector1[index]);
				}else if((xdiff<0)&&(ydiff>0)){
					which_pixel=pixel_C;
					cellXYvector1[index].loc_A=IMG_W*(x0-1)+y0;
					getScalars((x0-1),y0,(1-fabs(xdiff)),fabs(ydiff),&cellXYvector1[index]);
				}else if((xdiff<0)&&(ydiff<0)){
					which_pixel=pixel_D;
					cellXYvector1[index].loc_A=IMG_W*(x0-1)+(y0-1);
					getScalars((x0-1),(y0-1),(1-fabs(xdiff)),(1-fabs(ydiff)),&cellXYvector1[index]);
				};

				cellXYvector1[index].loc_case=assignWhichCase(cellXYvector1[index].A_scalar,cellXYvector1[index].B_scalar,cellXYvector1[index].C_scalar,cellXYvector1[index].D_scalar);
			};
		};
	};

	struct timeval tv;
	tv.tv_sec = 0;
	tv.tv_usec = 10000;

    struct timeval result, x1, y1;
//    timeval_subtract (*result,*x1,*y1);
    rusage usage;
    long int tv_sec_temp=usage.ru_stime.tv_sec;
    long int tv_usec_temp=usage.ru_stime.tv_usec;
    time_t start, stop;
    clock_t ticks; long count;

    for(i=0;i<102720;i++){
//    		fseek(ptr_myfile,2*i,SEEK_SET);
//    		fread(&input_array[i],2,1,ptr_myfile);
    		input_array[i]=65535;
    		output_array[i]=0;
	}


    time(&start);
      // Do stuff



//	printf("time now is %li\n",tv.tv_usec);
//	printf("%ld.%06ld\n", usage.ru_stime.tv_sec-tv_sec_temp, usage.ru_stime.tv_usec-tv_usec_temp);
	for(i=0;i<102720;i++){
//	for(i=0;i<1;i++){
		TEMP_X=i;
		new_color=checkWhichCase(&cellXYvector1[i],ptr_myfile,ptr_newfile,i);
//		fwrite((int *)&new_color,2,1,ptr_newfile);
	}
    i=0;
    while(i<50000)
    {
 	//printf("Work work %d\n", i);
         i++;
         ticks = clock();

    }

    time(&stop);

    printf("Used %0.4f seconds of CPU time. \n", (double)ticks/CLOCKS_PER_SEC);
    printf("Finished in about %.0f seconds. \n", difftime(stop, start));
//	printf("time now is %li\n",tv.tv_usec);
//	printf("%ld.%06ld\n", usage.ru_stime.tv_sec-tv_sec_temp, usage.ru_stime.tv_usec-tv_usec_temp);

	printf("end of program \n");
	return 0;
}
unsigned short int assignWhichCase(double A,double B,double C,double D){
	unsigned short int temp=0;
	unsigned short int temp_A,temp_B,temp_C,temp_D;
	temp_A=checkGreaterThanZero(A);
	temp_B=checkGreaterThanZero(B);
	temp_C=checkGreaterThanZero(C);
	temp_D=checkGreaterThanZero(D);
	temp=8*temp_A+4*temp_B+2*temp_C+temp_D;
	return temp;
}

unsigned short int checkGreaterThanZero(double input){
	if (input>0){
		return 1;
	}
	else{
		return 0;
	}
}

unsigned short int getNewColor(float scalar1,short int pixel_loc,FILE *file_ptr1,int temp_index){

	/*input from an array*/
	input_array[temp_index];
	R=0;
	G=0;
	B=0;
	R=input_array[temp_index]>>11;
	G=(input_array[temp_index] & G_MASK_BUFFER)>>5;
	B=(input_array[temp_index] & B_MASK_BUFFER);
//	printf("R is %i \n",R);
//	printf("G is %i \n",G);
//	printf("B is %i \n",B);
	NEW_R=0;
	NEW_G=0;
	NEW_B=0;
	NEW_R=(input_array[temp_index]>>11)*scalar1;
	NEW_G=((input_array[temp_index] & G_MASK_BUFFER)>>5)*scalar1;
	NEW_B=((input_array[temp_index] & B_MASK_BUFFER))*scalar1;
	new_color_global=(NEW_R<<11)|(NEW_G<<5)|(NEW_B);


	/*input from a file by fread */
//		rewind(file_ptr1);
//	fseek(file_ptr1,2*(pixel_loc-1),SEEK_SET);
//	fread(&my_record,2,1,file_ptr1);
//	R=0;
//	G=0;
//	B=0;
//	NEW_R=0;
//	NEW_G=0;
//	NEW_B=0;
//	//R=(my_record.mydata & R_MASK_BUFFER)>>11;
//	R=(my_record.mydata)>>11;
//	G=(my_record.mydata & G_MASK_BUFFER)>>5;
////	G=(my_record.mydata)>>5;
//	B=(my_record.mydata & B_MASK_BUFFER);
//	NEW_R=R*scalar1;
//	NEW_G=G*scalar1;
//	NEW_B=B*scalar1;

//	NEW_R=((my_record.mydata)>>11)*scalar1;
//	NEW_G=((my_record.mydata & G_MASK_BUFFER)>>5)*scalar1;
//	NEW_B=((my_record.mydata & B_MASK_BUFFER))*scalar1;

//	new_color_global=(NEW_R<<11)|(NEW_G<<5)|(NEW_B);
//	new_color_global=0;
//	if(G>0){
//	printf("R is %i \n",R);
//	printf("G is %i \n",G);
//	printf("B is %i \n",B);
//	}
return new_color_global;
}
void readRGB(unsigned short int color_passed){
	R=(color_passed & R_MASK)>>11;
	G=(color_passed & G_MASK)>>5;
	B=(color_passed & B_MASK);
	printf("new r is %i \n",R);
	printf("new g is %i \n",G);
	printf("new b is %i \n",B);
}

void getScalars(int x_location,int y_location,float xdiff,float ydiff,PIXEL *cellXYvector1_temp){

	if((x_location<0)||(x_location>(IMG_H-1))||(y_location<0)||(y_location>(IMG_W-1))){
		cellXYvector1_temp->A_scalar=0;
	}else{
		cellXYvector1_temp->A_scalar=(1-ydiff)*(1-xdiff);
	};
	if((x_location<0)||(x_location>(IMG_H-1))||((y_location+1)<0)||((y_location+1)>(IMG_W-1))){
		cellXYvector1_temp->B_scalar=0;
	}else{
		cellXYvector1_temp->B_scalar=(ydiff)*(1-xdiff);
	};
	if(((x_location+1)<0)||((x_location+1)>(IMG_H-1))||(y_location<0)||(y_location>(IMG_W-1))){
		cellXYvector1_temp->C_scalar=0;
	}else{
		cellXYvector1_temp->C_scalar=(1-ydiff)*(xdiff);
	};
	if(((x_location+1)<0)||((x_location+1)>(IMG_H-1))||((y_location+1)<0)||((y_location+1)>(IMG_W-1))){
		cellXYvector1_temp->D_scalar=0;
	}else{
		cellXYvector1_temp->D_scalar=((ydiff*xdiff));
	};
}
unsigned short int checkWhichCase(PIXEL *cellXYvector1_ptr,FILE *file_ptr,FILE *newfile_ptr,int temp_index){
	new_color_global=0;
	switch (cellXYvector1_ptr->loc_case){
	case 0:
		new_color_global=0;
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
	break;
	case 1:
		new_color_global=getNewColor(cellXYvector1_ptr->D_scalar,cellXYvector1_ptr->loc_A+IMG_W+1,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 2:
		new_color_global=getNewColor(cellXYvector1_ptr->C_scalar,cellXYvector1_ptr->loc_A+IMG_W,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 3:
		new_color_global=getNewColor(cellXYvector1_ptr->C_scalar,cellXYvector1_ptr->loc_A+IMG_W,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->D_scalar,cellXYvector1_ptr->loc_A+IMG_W+1,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 4:
		new_color_global=getNewColor(cellXYvector1_ptr->B_scalar,cellXYvector1_ptr->loc_A+1,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 5:
		new_color_global=getNewColor(cellXYvector1_ptr->B_scalar,cellXYvector1_ptr->loc_A+1,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->D_scalar,cellXYvector1_ptr->loc_A+IMG_W+1,file_ptr,temp_index);
		//readRGB(new_color_global);
		break;
	case 6:
		new_color_global=getNewColor(cellXYvector1_ptr->B_scalar,cellXYvector1_ptr->loc_A+1,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->C_scalar,cellXYvector1_ptr->loc_A+IMG_W,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 7:
		new_color_global=getNewColor(cellXYvector1_ptr->B_scalar,cellXYvector1_ptr->loc_A+1,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->C_scalar,cellXYvector1_ptr->loc_A+IMG_W,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->D_scalar,cellXYvector1_ptr->loc_A+IMG_W+1,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 8:
		new_color_global=getNewColor(cellXYvector1_ptr->A_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 9:
		new_color_global=getNewColor(cellXYvector1_ptr->A_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->D_scalar,cellXYvector1_ptr->loc_A+IMG_W+1,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 10:
		new_color_global=getNewColor(cellXYvector1_ptr->A_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->C_scalar,cellXYvector1_ptr->loc_A+IMG_W,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 11:
		new_color_global=getNewColor(cellXYvector1_ptr->A_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->C_scalar,cellXYvector1_ptr->loc_A+IMG_W,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->D_scalar,cellXYvector1_ptr->loc_A+IMG_W+1,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 12:
		new_color_global=getNewColor(cellXYvector1_ptr->A_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->B_scalar,cellXYvector1_ptr->loc_A+1,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 13:
		new_color_global=getNewColor(cellXYvector1_ptr->A_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->B_scalar,cellXYvector1_ptr->loc_A+1,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->D_scalar,cellXYvector1_ptr->loc_A+IMG_W+1,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 14:
		new_color_global=getNewColor(cellXYvector1_ptr->A_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->B_scalar,cellXYvector1_ptr->loc_A+1,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->C_scalar,cellXYvector1_ptr->loc_A+IMG_W,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	case 15:
		/*original*/
//		new_color_global=getNewColor(cellXYvector1_ptr->A_scalar,cellXYvector1_ptr->loc_A,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->B_scalar,cellXYvector1_ptr->loc_A+1,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->C_scalar,cellXYvector1_ptr->loc_A+IMG_W,file_ptr);
//		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->D_scalar,cellXYvector1_ptr->loc_A+IMG_W+1,file_ptr);

		new_color_global=getNewColor(cellXYvector1_ptr->A_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->B_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->C_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		new_color_global=new_color_global+getNewColor(cellXYvector1_ptr->D_scalar,cellXYvector1_ptr->loc_A,file_ptr,temp_index);
		output_array[temp_index]=new_color_global;
		//readRGB(new_color_global);
		break;
	}
	return new_color_global;
}

