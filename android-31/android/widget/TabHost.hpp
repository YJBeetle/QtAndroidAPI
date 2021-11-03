#pragma once

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
class JString;
class JString;

namespace android::widget
{
	class TabHost : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TabHost(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		TabHost(QJniObject obj);
		
		// Constructors
		TabHost(android::content::Context arg0);
		TabHost(android::content::Context arg0, JObject arg1);
		TabHost(android::content::Context arg0, JObject arg1, jint arg2);
		TabHost(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addTab(android::widget::TabHost_TabSpec arg0);
		void clearAllTabs();
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0);
		void dispatchWindowFocusChanged(jboolean arg0);
		JString getAccessibilityClassName();
		jint getCurrentTab();
		JString getCurrentTabTag();
		android::view::View getCurrentTabView();
		android::view::View getCurrentView();
		android::widget::FrameLayout getTabContentView();
		android::widget::TabWidget getTabWidget();
		android::widget::TabHost_TabSpec newTabSpec(JString arg0);
		void onTouchModeChanged(jboolean arg0);
		void setCurrentTab(jint arg0);
		void setCurrentTabByTag(JString arg0);
		void setOnTabChangedListener(JObject arg0);
		void setup();
		void setup(android::app::LocalActivityManager arg0);
	};
} // namespace android::widget

