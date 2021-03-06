#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

unsigned char asciiImg[20][21] = {
	"....................",
	"##..................",
	".##.................",
	"..##................",
	"...##...............",
	"....##..............",
	".....##.............",
	"......##............",
	".......##...........",
	"........##..........",
	".........##.........",
	"..........##........",
	"...........##.......",
	"............##......",
	".............##.....",
	"..............##....",
	"...............##...",
	"................##..",
	".................##.",
        "..................##"
}

using namespace cv;

int main( )
{
	Mat image = Mat::zeros( 20, 20, CV_8UC1 ); //single channel image
	
	for ( unsigned char i=0, ii=20; i<ii; i++ )
		for ( unsigned char j=0, jj=20; j<jj; j++ )
			image.at<uchar>(i,j) = (unsigned char) (asciiImg[i][j]=='.' ? 0 : 1);

	imwrite( "fromAscii.png", image );
	imshow( "fromAscii", image );

	std::cout << image << std::endl << std::endl;

	waitKey( 0 );

	return 0;
}

