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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TabHost(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		TabHost(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
		
		// Constructors
		TabHost(android::content::Context arg0);
		TabHost(android::content::Context arg0, JObject arg1);
		TabHost(android::content::Context arg0, JObject arg1, jint arg2);
		TabHost(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void addTab(android::widget::TabHost_TabSpec arg0) const;
		void clearAllTabs() const;
		jboolean dispatchKeyEvent(android::view::KeyEvent arg0) const;
		void dispatchWindowFocusChanged(jboolean arg0) const;
		JString getAccessibilityClassName() const;
		jint getCurrentTab() const;
		JString getCurrentTabTag() const;
		android::view::View getCurrentTabView() const;
		android::view::View getCurrentView() const;
		android::widget::FrameLayout getTabContentView() const;
		android::widget::TabWidget getTabWidget() const;
		android::widget::TabHost_TabSpec newTabSpec(JString arg0) const;
		void onTouchModeChanged(jboolean arg0) const;
		void setCurrentTab(jint arg0) const;
		void setCurrentTabByTag(JString arg0) const;
		void setOnTabChangedListener(JObject arg0) const;
		void setup() const;
		void setup(android::app::LocalActivityManager arg0) const;
	};
} // namespace android::widget

