package com.angelsware.statusbar;

import android.content.res.Resources;

import com.angelsware.engine.AppActivity;

public class StatusBar {
	public static int getStatusBarHeight() {
		return getDimensionPixelSize("status_bar_height");
	}

	public static int getNavigationBarHeight() {
		return getDimensionPixelSize("navigation_bar_height");
	}

	private static int getDimensionPixelSize(String name) {
		Resources resources = AppActivity.getActivity().getResources();
		int resourceId = resources.getIdentifier(name, "dimen", "android");
		if (resourceId > 0) {
			int dimensionPixelSize = resources.getDimensionPixelSize(resourceId);
			float density = AppActivity.getActivity().getResources().getDisplayMetrics().density;
			return (int)((float)dimensionPixelSize / density);
		}
		return 0;
	}
}
