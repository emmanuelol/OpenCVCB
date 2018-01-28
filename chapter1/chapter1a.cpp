/*Librerias */
#include<iostream>
#include <opencv2\core.hpp>
#include <opencv2\highgui.hpp>


/*codigo*/
int main() {
	cv::Mat image; //create empty image
	std::cout << "This image is " << image.rows << " x " << image.cols << std::endl;
	
	image = cv::imread("puppy.bmp"); // read an input image
	
	if (image.empty())
	{
		//error handling if no image has been created
		std::cout << "Error handling image ..." << std::endl;
		return 0;
	}

	std::cout << "This image is " << image.rows << " x " << image.cols << std::endl;
	std::cout << "This image has " << image.channels()<<" Channels" <<  std::endl;
	
	//define the window
	cv::namedWindow("Original Image");
	//show the image
	cv::imshow("Original Image", image);


	cv::Mat result; // create another empty image
	cv::flip(image, result, 1);





	return 0;
}
