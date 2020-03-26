#ifndef __AW_STATUS_BAR_ANDROID_H__
#define __AW_STATUS_BAR_ANDROID_H__

#include <statusbar/aw_statusbar.h>

namespace StatusBar {
	class CStatusBar_Android
		: public IStatusBar
	{
	private:
		// IStatusBar
		int getStatusBarHeight();
		int getNavigationBarHeight();
	};
}

#endif
