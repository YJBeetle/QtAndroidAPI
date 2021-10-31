#pragma once

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"

namespace android::app
{
	class LocalActivityManager;
}
namespace android::content
{
	class Context;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class FrameLayout;
}
namespace android::widget
{
	class TabHost_TabSpec;
}
namespace android::widget
{
	class TabWidget;
}

namespace android::widget
{
	class TabHost : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		TabHost(QAndroidJniObject obj);
		// Constructors
		TabHost(android::content::Context arg0);
		TabHost(android::content::Context arg0, __JniBaseClass arg1);
		TabHost(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		TabHost(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		TabHost() = default;
		
		// Methods
		void addTab(android::widget::TabHost_TabSpec arg0);
		void clearAllTabs();
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		void dispatchWindowFocusChanged(jboolean arg0);
		jstring getAccessibilityClassName();
		jint getCurrentTab();
		jstring getCurrentTabTag();
		QAndroidJniObject getCurrentTabView();
		QAndroidJniObject getCurrentView();
		QAndroidJniObject getTabContentView();
		QAndroidJniObject getTabWidget();
		QAndroidJniObject newTabSpec(jstring arg0);
		void onTouchModeChanged(jboolean arg0);
		void setCurrentTab(jint arg0);
		void setCurrentTabByTag(jstring arg0);
		void setOnTabChangedListener(__JniBaseClass arg0);
		void setup();
		void setup(android::app::LocalActivityManager arg0);
	};
} // namespace android::widget

