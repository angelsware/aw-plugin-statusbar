#ifndef __AW_STATUS_BAR_DEFAULT_H__
#define __AW_STATUS_BAR_DEFAULT_H__

#include <statusbar/aw_statusbar.h>

namespace StatusBar {
	class CStatusBar_Default
		: public IStatusBar
	{
	public:
		// IStatusBar
		int getStatusBarHeight() override { return 0; }
		int getNavigationBarHeight() override { return 0; }
	};
}

#endif
