#ifndef __AW_STATUS_BAR_IOS_H__
#define __AW_STATUS_BAR_IOS_H__

#include <statusbar/aw_statusbar.h>

namespace StatusBar {
	class CStatusBar_Ios
		: public IStatusBar
	{
	public:
		// IStatusBar
		int getStatusBarHeight() override;
		int getNavigationBarHeight() override;
	};
}

#endif
