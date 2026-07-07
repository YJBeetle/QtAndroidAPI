#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./TextSwitcher.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline TextSwitcher::TextSwitcher(android::content::Context arg0)
		: android::widget::ViewSwitcher(
			"android.widget.TextSwitcher",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TextSwitcher::TextSwitcher(android::content::Context arg0, JObject arg1)
		: android::widget::ViewSwitcher(
			"android.widget.TextSwitcher",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void TextSwitcher::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JString TextSwitcher::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void TextSwitcher::setCurrentText(JString arg0) const
	{
		callMethod<void>(
			"setCurrentText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void TextSwitcher::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"
#include "./ViewAnimator.hpp"
#include "./ViewSwitcher.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
