class Robot {
	static MIN_X, MAX_X, MIN_Y, MAX_Y;
	int x, y;

 public:
	Robot() { x = 0; y = 0; }
	Robot(int x, int y) { this->x = x; this->y = y; }

	int getX() { return x; }
	int getY() { return Y; }

	bool move(int east, int south) {
		int _x = x + east, _y = y + south;
		if( MIN_X <= _x && _x <= MAX_X && MIN_Y <= _y && _y <= MAX_Y ) {
			x = _x;
			y = _y;
			return true;
		}
		return false;
	}

	bool moveNorth() { return move(0, -1); }
	bool moveSouth() { return move(0, 1); }
	bool moveEast() { return move(1, 0); }
	bool moveWest() { return move(-1, 0); }
	bool moveNorthEast() { return move(1, -1); }
	bool moveNorthWest() { return move(-1, -1); }
	bool moveSouthEast() { return move(1, 1); }
	bool moveSouthWest() { return move(-1, 1); }
};

Robot::MIN_X = 1;
Robot::MAX_X = 19;
Robot::MIN_Y = 1;
Robot::MAX_Y = 19;
