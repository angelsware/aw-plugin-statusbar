#include "aw_statusbar_android.h"
#include <platform/android/aw_jnifunction.h>
#include <platform/android/aw_jni.h>

namespace StatusBar {
	int CStatusBar_Android::getStatusBarHeight() {
		if (jclass clazz = Platform::CJniFunction::getClass("com/angelsware/statusbar/StatusBar")) {
			if (jmethodID method = Platform::CJniFunction::getMethod(clazz, "getStatusBarHeight", "()I")) {
				return Platform::CJni::getEnv()->CallStaticIntMethod(clazz, method);
			}
		}
		return 0;
	}

	int CStatusBar_Android::getNavigationBarHeight() {
		if (jclass clazz = Platform::CJniFunction::getClass("com/angelsware/statusbar/StatusBar")) {
			if (jmethodID method = Platform::CJniFunction::getMethod(clazz, "getNavigationBarHeight", "()I")) {
				return Platform::CJni::getEnv()->CallStaticIntMethod(clazz, method);
			}
		}
		return 0;
	}
}
