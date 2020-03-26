#ifndef __AW_STATUS_BAR_FACTORY_H__
#define __AW_STATUS_BAR_FACTORY_H__

namespace StatusBar {
	class IStatusBar;

	class CStatusBarFactory
	{
	public:
		static IStatusBar* create();
		static void destroy(IStatusBar* statusBar);
	};
}

#endif
