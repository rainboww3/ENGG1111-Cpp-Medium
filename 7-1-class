#include <iostream>
using namespace std;

struct Rect {
	int x, y;
	int width, height;
};

float CalArea(Rect r) {
	return r.width*r.height;
}

int main() {

	Rect rectangles[100];
	int count;
	float area = 0;
	cin >> count;

	for (int i = 0; i<count; i++) {
		cin >> rectangles[i].x;
		cin >> rectangles[i].y;
		cin >> rectangles[i].width;
		cin >> rectangles[i].height;
		area += CalArea(rectangles[i]);
	}

	cout << area << endl;

	return 0;

}
