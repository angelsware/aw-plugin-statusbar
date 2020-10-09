#include "aw_statusbar_ios.h"
#import <UIKit/UIKit.h>

namespace StatusBar {
	int CStatusBar_Ios::getStatusBarHeight() {
		if (@available(iOS 11.0, *)) {
			UIWindow *window = UIApplication.sharedApplication.keyWindow;
			return (int)window.safeAreaInsets.top;
		} else {
			return 0;
		}
	}

	int CStatusBar_Ios::getNavigationBarHeight() {
		if (@available(iOS 11.0, *)) {
			UIWindow *window = UIApplication.sharedApplication.keyWindow;
			return (int)window.safeAreaInsets.bottom;
		} else {
			return 0;
		}
	}
}
