#include <stdio.h>
#include <iostream>

#include "opencv2\core\mat.hpp"
#include "opencv2\opencv.hpp"

using namespace cv;
using namespace std;

int main(void)
{


	Mat a;
	VideoCapture video(0);

	if (!video.isOpened()) {
		printf("cannot connect to camera");
		getchar();
		return 1;
	}

	CascadeClassifier c;
	c.load(E:\P.A.B.D An.I.sem II\Programare Android - Mihai Olteanu\opencv\sources\data\haarcascades\haarcascade_frontalface_alt.xml);



	namedWindow("camera");

	vector<Rect> capete;
	


	while (1){

		video >> a;
		c.detectMultiScale(a, capete);

		for (int i = 0; i < capete.size(); i++);
		rectangle(a, capete[i], Scalar(255, 0, 0));

		imshow("camera", a);
		if (waitKey(1) == 27);
		break;
	}

}