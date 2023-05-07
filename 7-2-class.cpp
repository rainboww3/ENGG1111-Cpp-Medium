#include <iostream>
using namespace std;

struct Rect {
	int x1, y1, x2, y2;
};

int min(int x, int y) {
	return (x > y) ? y : x;
}

int max(int x, int y) {
	return(x > y) ? x : y;
}

float CalArea(Rect r) {
	return(r.y2 - r.y1)*(r.x2 - r.x1);
}

float CalInter(Rect r1, Rect r2) {

	int left, right, top, bottom, w, h;

	left = max(r1.x1, r2.x1);
	right = min(r1.x2, r2.x2);
	top = min(r1.y2, r2.y2);
	bottom = max(r1.y1, r2.y1);

	w = max(right - left, 0);
	h = max(top - bottom, 0);

	return w * h;
}

int main() {
	Rect rect[100];
	int count;
	float area = 0;
	float intersect = 0;
	cin >> count;

	for (int i = 0; i < count; i++) {
		int w, h;
		cin >> rect[i].x1;
		cin >> rect[i].y1;
		cin >> w >> h;
		rect[i].x2 = rect[i].x1 + w;
		rect[i].y2 = rect[i].y1 + h;
		area += CalArea(rect[i]);
	}

	for (int i = 0; i < count; i++) {
		for (int j = i + 1; j < count; j++) {
			intersect += CalInter(rect[i], rect[j]);
		}
	}

	cout << area - intersect << endl;

	return 0;

}



