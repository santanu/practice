#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
 
int main( )
{    
	// Create black empty image
	Mat image = Mat::zeros( 20, 20, CV_8UC1 ); //single channel image
   
	// Draw a line 
	line( image, Point( 1, 1 ), Point( 19, 19), Scalar( 110 ), 2, 4 );
	imwrite( "sampleLine.png", image );
 
	Mat im = imread( "sampleLine.png", CV_LOAD_IMAGE_GRAYSCALE );	

	Mat imbin;
	threshold( im, imbin, 10, 1, 0 ); 

	//imshow( "BinaryImage", imbin ); 

	/* the crucial part... oh the suspense is killing me... will this work.... */
	{
		using namespace std;
		cout << "The image components as numbers follow:" << endl;
		cout << imbin << endl << endl; 

		//the following code should do the same thing
		for (int i=0, ii=imbin.cols; i<ii; i++){
			for (int j=0, jj=imbin.rows; j<jj; j++)
				cout << (uchar)(imbin.at<uchar>(i,j)==0?'.':'#');
			cout << endl;
		}
	}

	waitKey( 0 );
	return(0);
}
