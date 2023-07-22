#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./SeekBar.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline SeekBar::SeekBar(android::content::Context arg0)
		: android::widget::AbsSeekBar(
			"android.widget.SeekBar",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline SeekBar::SeekBar(android::content::Context arg0, JObject arg1)
		: android::widget::AbsSeekBar(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline SeekBar::SeekBar(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsSeekBar(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline SeekBar::SeekBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsSeekBar(
			"android.widget.SeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString SeekBar::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void SeekBar::setOnSeekBarChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnSeekBarChangeListener",
			"(Landroid/widget/SeekBar$OnSeekBarChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./ProgressBar.hpp"
#include "./AbsSeekBar.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
