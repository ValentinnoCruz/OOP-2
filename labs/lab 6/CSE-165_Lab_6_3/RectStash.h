#ifndef RECTSTASH_H
#define RECTSTASH_H
#include <iostream>
#include <vector>
using namespace std;


	class Vec {

		public:
			float x,y;
			static Vec null;
			Vec() {
				x=0;
				y=0;
			}	
			Vec(float a, float b) {
				x=a;
				y=b;
			}
			void add(Vec n) {
				x = x + n.x;
				y = y + n.y;
			}
	
			void print() {
				cout << "(" << x << ", " << y << ")" << endl;
			}


	};
	Vec Vec::null = Vec(0,0);

	class Rect {
	
		float x,y, width, height;

		public:

			Rect(float x1, float y1, float w, float h) {
				x = x1;
				y = y1;
				width = w;
				height = h;
			}
	
			bool contains(Vec n) {
				if (n.x >= x && n.x <= (x+width) && n.y <= y && n.y <= (y+height)){
					return 1;
				}
				else
					return 0;
			}

			bool containsE(const GlutWindow::Event &e) {
				if (e.mx >= x && e.mx <= (x+width) && e.my <= y && e.my <= (y+height)){
					return 1;
				}
				else
					return 0;
			}


	};

	class RectStash {

		public:
			vector<Rect> rects;
			RectStash() {
					
			}

			~RectStash() {
				
			}

	};



#endif RECTSTASH_H