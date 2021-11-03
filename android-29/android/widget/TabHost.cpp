#include "../app/LocalActivityManager.hpp"
#include "../content/Context.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/View.hpp"
#include "./FrameLayout.hpp"
#include "./TabHost_TabSpec.hpp"
#include "./TabWidget.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TabHost.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	TabHost::TabHost(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	TabHost::TabHost(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.TabHost",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TabHost::TabHost(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TabHost::TabHost(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	TabHost::TabHost(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void TabHost::addTab(android::widget::TabHost_TabSpec arg0)
	{
		callMethod<void>(
			"addTab",
			"(Landroid/widget/TabHost$TabSpec;)V",
			arg0.object()
		);
	}
	void TabHost::clearAllTabs()
	{
		callMethod<void>(
			"clearAllTabs",
			"()V"
		);
	}
	jboolean TabHost::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	void TabHost::dispatchWindowFocusChanged(jboolean arg0)
	{
		callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	JString TabHost::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint TabHost::getCurrentTab()
	{
		return callMethod<jint>(
			"getCurrentTab",
			"()I"
		);
	}
	JString TabHost::getCurrentTabTag()
	{
		return callObjectMethod(
			"getCurrentTabTag",
			"()Ljava/lang/String;"
		);
	}
	android::view::View TabHost::getCurrentTabView()
	{
		return callObjectMethod(
			"getCurrentTabView",
			"()Landroid/view/View;"
		);
	}
	android::view::View TabHost::getCurrentView()
	{
		return callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	android::widget::FrameLayout TabHost::getTabContentView()
	{
		return callObjectMethod(
			"getTabContentView",
			"()Landroid/widget/FrameLayout;"
		);
	}
	android::widget::TabWidget TabHost::getTabWidget()
	{
		return callObjectMethod(
			"getTabWidget",
			"()Landroid/widget/TabWidget;"
		);
	}
	android::widget::TabHost_TabSpec TabHost::newTabSpec(JString arg0)
	{
		return callObjectMethod(
			"newTabSpec",
			"(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;",
			arg0.object<jstring>()
		);
	}
	void TabHost::onTouchModeChanged(jboolean arg0)
	{
		callMethod<void>(
			"onTouchModeChanged",
			"(Z)V",
			arg0
		);
	}
	void TabHost::setCurrentTab(jint arg0)
	{
		callMethod<void>(
			"setCurrentTab",
			"(I)V",
			arg0
		);
	}
	void TabHost::setCurrentTabByTag(JString arg0)
	{
		callMethod<void>(
			"setCurrentTabByTag",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void TabHost::setOnTabChangedListener(JObject arg0)
	{
		callMethod<void>(
			"setOnTabChangedListener",
			"(Landroid/widget/TabHost$OnTabChangeListener;)V",
			arg0.object()
		);
	}
	void TabHost::setup()
	{
		callMethod<void>(
			"setup",
			"()V"
		);
	}
	void TabHost::setup(android::app::LocalActivityManager arg0)
	{
		callMethod<void>(
			"setup",
			"(Landroid/app/LocalActivityManager;)V",
			arg0.object()
		);
	}
} // namespace android::widget

