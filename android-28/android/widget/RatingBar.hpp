#pragma once

#include "../content/Context.def.hpp"
#include "../../JString.hpp"
#include "./RatingBar.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline RatingBar::RatingBar(android::content::Context arg0)
		: android::widget::AbsSeekBar(
			"android.widget.RatingBar",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline RatingBar::RatingBar(android::content::Context arg0, JObject arg1)
		: android::widget::AbsSeekBar(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline RatingBar::RatingBar(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AbsSeekBar(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline RatingBar::RatingBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AbsSeekBar(
			"android.widget.RatingBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString RatingBar::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint RatingBar::getNumStars() const
	{
		return callMethod<jint>(
			"getNumStars",
			"()I"
		);
	}
	inline JObject RatingBar::getOnRatingBarChangeListener() const
	{
		return callObjectMethod(
			"getOnRatingBarChangeListener",
			"()Landroid/widget/RatingBar$OnRatingBarChangeListener;"
		);
	}
	inline jfloat RatingBar::getRating() const
	{
		return callMethod<jfloat>(
			"getRating",
			"()F"
		);
	}
	inline jfloat RatingBar::getStepSize() const
	{
		return callMethod<jfloat>(
			"getStepSize",
			"()F"
		);
	}
	inline jboolean RatingBar::isIndicator() const
	{
		return callMethod<jboolean>(
			"isIndicator",
			"()Z"
		);
	}
	inline void RatingBar::setIsIndicator(jboolean arg0) const
	{
		callMethod<void>(
			"setIsIndicator",
			"(Z)V",
			arg0
		);
	}
	inline void RatingBar::setMax(jint arg0) const
	{
		callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	inline void RatingBar::setNumStars(jint arg0) const
	{
		callMethod<void>(
			"setNumStars",
			"(I)V",
			arg0
		);
	}
	inline void RatingBar::setOnRatingBarChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnRatingBarChangeListener",
			"(Landroid/widget/RatingBar$OnRatingBarChangeListener;)V",
			arg0.object()
		);
	}
	inline void RatingBar::setRating(jfloat arg0) const
	{
		callMethod<void>(
			"setRating",
			"(F)V",
			arg0
		);
	}
	inline void RatingBar::setStepSize(jfloat arg0) const
	{
		callMethod<void>(
			"setStepSize",
			"(F)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./ProgressBar.hpp"
#include "./AbsSeekBar.hpp"

