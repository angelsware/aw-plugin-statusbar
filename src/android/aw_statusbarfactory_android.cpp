#include <statusbar/aw_statusbarfactory.h>
#include "aw_statusbar_android.h"

namespace StatusBar {
	IStatusBar* CStatusBarFactory::create() {
		return new CStatusBar_Android();
	}

	void CStatusBarFactory::destroy(IStatusBar* statusBar) {
		delete statusBar;
	}
}
