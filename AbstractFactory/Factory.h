#pragma once
#include "Product.h"

__interface IOperatingSystem {
	ICheckBox* createCheckBox();
	IButton* createButton();
};

class Windows :public IOperatingSystem {
	ICheckBox* createCheckBox() {
		return new WindowsCheckBox();
	}
	IButton* createButton() {
		return new WindowsButton();
	}
};

class Macintosh :public IOperatingSystem {
	ICheckBox* createCheckBox() {
		return new MacintoshCheckBox();
	}
	IButton* createButton() {
		return new MacintoshButton();
	}
};
