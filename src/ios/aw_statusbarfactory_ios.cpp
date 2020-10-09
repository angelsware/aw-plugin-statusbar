#include <statusbar/aw_statusbarfactory.h>
#include "aw_statusbar_ios.h"

namespace StatusBar {
	IStatusBar* CStatusBarFactory::create() {
		return new CStatusBar_Ios();
	}

	void CStatusBarFactory::destroy(IStatusBar* statusBar) {
		delete statusBar;
	}
}
