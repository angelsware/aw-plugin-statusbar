# aw-plugin-statusbar

Status bar plugin for Angels' Ware rendering engine.

### Getting Started

Add the **plugins** section to the **config.yaml** file of your project.

```
{
	...

	"plugins":[
		{
			"repo":"https://github.com/angelsware/aw-plugin-statusbar.git",
			"tag":"*"
		}
	]
}
```

```
StatusBar::IStatusBar statusBar = StatusBar::CStatusBarFactory::create();
LOG_INFO("status bar height: %d", statusBar->getStatusBarHeight());
LOG_INFO("navigation bar height: %d", statusBar->getNavigationBarHeight());
StatusBar::CStatusBarFactory::destroy(statusBar);

```
