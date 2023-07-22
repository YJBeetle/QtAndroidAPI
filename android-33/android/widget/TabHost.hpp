#pragma once

#include "../app/LocalActivityManager.def.hpp"
#include "../content/Context.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/View.def.hpp"
#include "./FrameLayout.def.hpp"
#include "./TabHost_TabSpec.def.hpp"
#include "./TabWidget.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./TabHost.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline TabHost::TabHost(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.TabHost",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TabHost::TabHost(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TabHost::TabHost(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline TabHost::TabHost(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.TabHost",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void TabHost::addTab(android::widget::TabHost_TabSpec arg0) const
	{
		callMethod<void>(
			"addTab",
			"(Landroid/widget/TabHost$TabSpec;)V",
			arg0.object()
		);
	}
	inline void TabHost::clearAllTabs() const
	{
		callMethod<void>(
			"clearAllTabs",
			"()V"
		);
	}
	inline jboolean TabHost::dispatchKeyEvent(android::view::KeyEvent arg0) const
	{
		return callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.object()
		);
	}
	inline void TabHost::dispatchWindowFocusChanged(jboolean arg0) const
	{
		callMethod<void>(
			"dispatchWindowFocusChanged",
			"(Z)V",
			arg0
		);
	}
	inline JString TabHost::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint TabHost::getCurrentTab() const
	{
		return callMethod<jint>(
			"getCurrentTab",
			"()I"
		);
	}
	inline JString TabHost::getCurrentTabTag() const
	{
		return callObjectMethod(
			"getCurrentTabTag",
			"()Ljava/lang/String;"
		);
	}
	inline android::view::View TabHost::getCurrentTabView() const
	{
		return callObjectMethod(
			"getCurrentTabView",
			"()Landroid/view/View;"
		);
	}
	inline android::view::View TabHost::getCurrentView() const
	{
		return callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	inline android::widget::FrameLayout TabHost::getTabContentView() const
	{
		return callObjectMethod(
			"getTabContentView",
			"()Landroid/widget/FrameLayout;"
		);
	}
	inline android::widget::TabWidget TabHost::getTabWidget() const
	{
		return callObjectMethod(
			"getTabWidget",
			"()Landroid/widget/TabWidget;"
		);
	}
	inline android::widget::TabHost_TabSpec TabHost::newTabSpec(JString arg0) const
	{
		return callObjectMethod(
			"newTabSpec",
			"(Ljava/lang/String;)Landroid/widget/TabHost$TabSpec;",
			arg0.object<jstring>()
		);
	}
	inline void TabHost::onTouchModeChanged(jboolean arg0) const
	{
		callMethod<void>(
			"onTouchModeChanged",
			"(Z)V",
			arg0
		);
	}
	inline void TabHost::setCurrentTab(jint arg0) const
	{
		callMethod<void>(
			"setCurrentTab",
			"(I)V",
			arg0
		);
	}
	inline void TabHost::setCurrentTabByTag(JString arg0) const
	{
		callMethod<void>(
			"setCurrentTabByTag",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void TabHost::setOnTabChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnTabChangedListener",
			"(Landroid/widget/TabHost$OnTabChangeListener;)V",
			arg0.object()
		);
	}
	inline void TabHost::setup() const
	{
		callMethod<void>(
			"setup",
			"()V"
		);
	}
	inline void TabHost::setup(android::app::LocalActivityManager arg0) const
	{
		callMethod<void>(
			"setup",
			"(Landroid/app/LocalActivityManager;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
