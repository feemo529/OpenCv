//#include <opencv2/opencv.hpp>
//#include <iostream>
//
//using namespace std;
//using namespace cv;
//
//int main()
//{
//	//生成用于腐蚀的原图像
//	Mat src = (Mat_<uchar>(9, 12) <<
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0,
//		0, 255, 255, 255, 0, 255, 255, 255, 0, 0, 0, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 255, 0,
//		0, 255, 255, 255, 255, 255, 255, 255, 0, 0, 0, 0,
//		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
//
//	namedWindow("src", WINDOW_NORMAL);	//可以自由调节显示图像的尺寸
//	imshow("src", src);
//	//3X3矩形结构元素
//	Mat kernel = getStructuringElement(0, Size(3, 3));
//
//	//对二值化矩阵进行形态学操作
//	Mat open, close, gradient, tophat, blackhat, hitmiss;
//
//	//对二值化矩阵进行开运算
//	morphologyEx(src, open, MORPH_OPEN, kernel);
//	namedWindow("open", WINDOW_NORMAL); //可以自由调节显示图像的尺寸
//	imshow("open", open);
//
//	//对二值化矩阵进行闭运算
//	morphologyEx(src, close, MORPH_CLOSE, kernel);
//	namedWindow("close", WINDOW_NORMAL); //可以自由调节显示图像的尺寸
//	imshow("close", close);
//
//	//对二值化矩阵进行梯度运算
//	morphologyEx(src, gradient, MORPH_GRADIENT, kernel);
//	namedWindow("gradient", WINDOW_NORMAL); //可以自由调节显示图像的尺寸
//	imshow("gradient", gradient);
//
//	//对二值化矩阵进行顶帽运算
//	morphologyEx(src, tophat, MORPH_TOPHAT, kernel);
//	namedWindow("tophat", WINDOW_NORMAL); //可以自由调节显示图像的尺寸
//	imshow("tophat", tophat);
//
//	//对二值化矩阵进行黑帽运算
//	morphologyEx(src, blackhat, MORPH_BLACKHAT, kernel);
//	namedWindow("blackhat", WINDOW_NORMAL); //可以自由调节显示图像的尺寸
//	imshow("blackhat", blackhat);
//
//	//对二值化矩阵进行击中击不中变换
//	morphologyEx(src, hitmiss, MORPH_HITMISS, kernel);
//	namedWindow("hitmiss", WINDOW_NORMAL); //可以自由调节显示图像的尺寸
//	imshow("hitmiss", hitmiss);
//
//	cout << "用图像验证形态学操作效果" << endl;
//	waitKey(0);
//
//	Mat key = imread("./images/key.jpg",IMREAD_GRAYSCALE);
//	imshow("原图像", key);
//	threshold(key, key, 50, 255, THRESH_BINARY);
//	imshow("二值化后的key", key);
//
//	//5X5矩形结构元素
//	Mat kernel_keys = getStructuringElement(0, Size(5, 5));
//	Mat open_keys, close_keys, gradient_keys, tophat_keys, balckhat_keys, hitmiss_keys;
//
//	//对二值化矩阵进行开运算
//	morphologyEx(key, open_keys, MORPH_OPEN, kernel_keys);
//	imshow("open_keys", open_keys);
//
//	//对二值化矩阵进行闭运算
//	morphologyEx(key, close_keys, MORPH_CLOSE, kernel_keys);
//	imshow("close_keys", close_keys);
//
//	//对二值化矩阵进行梯度运算
//	morphologyEx(key, gradient_keys, MORPH_GRADIENT, kernel_keys);
//	imshow("gradient_keys", gradient_keys);
//
//	//对二值化矩阵进行顶帽运算
//	morphologyEx(key, tophat_keys, MORPH_TOPHAT, kernel_keys);
//	imshow("tophat_keys", tophat_keys);
//
//	//对二值化矩阵进行黑帽运算
//	morphologyEx(key, balckhat_keys, MORPH_BLACKHAT, kernel_keys);
//	imshow("balckhat_keys", balckhat_keys);
//
//	//对二值化矩阵进行击中击不中变换
//	morphologyEx(key, hitmiss_keys, MORPH_HITMISS, kernel_keys);
//	imshow("hitmiss_keys", hitmiss_keys);
//
//	waitKey(0);
//	return 0;
//}