#ifndef __AW_STATUS_BAR_H__
#define __AW_STATUS_BAR_H__

namespace StatusBar {
	class IStatusBar
	{
	public:
		virtual ~IStatusBar() {}

		virtual int getStatusBarHeight() = 0;
		virtual int getNavigationBarHeight() = 0;
	};
}

#endif
