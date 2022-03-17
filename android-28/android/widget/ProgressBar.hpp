#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/ColorStateList.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/PorterDuff_Mode.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../../JString.hpp"
#include "./ProgressBar.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline ProgressBar::ProgressBar(android::content::Context arg0)
		: android::view::View(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline ProgressBar::ProgressBar(android::content::Context arg0, JObject arg1)
		: android::view::View(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline ProgressBar::ProgressBar(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::View(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ProgressBar::ProgressBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::View(
			"android.widget.ProgressBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void ProgressBar::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline JString ProgressBar::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::graphics::drawable::Drawable ProgressBar::getIndeterminateDrawable() const
	{
		return callObjectMethod(
			"getIndeterminateDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::content::res::ColorStateList ProgressBar::getIndeterminateTintList() const
	{
		return callObjectMethod(
			"getIndeterminateTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode ProgressBar::getIndeterminateTintMode() const
	{
		return callObjectMethod(
			"getIndeterminateTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline JObject ProgressBar::getInterpolator() const
	{
		return callObjectMethod(
			"getInterpolator",
			"()Landroid/view/animation/Interpolator;"
		);
	}
	inline jint ProgressBar::getMax() const
	{
		return callMethod<jint>(
			"getMax",
			"()I"
		);
	}
	inline jint ProgressBar::getMin() const
	{
		return callMethod<jint>(
			"getMin",
			"()I"
		);
	}
	inline jint ProgressBar::getProgress() const
	{
		return callMethod<jint>(
			"getProgress",
			"()I"
		);
	}
	inline android::content::res::ColorStateList ProgressBar::getProgressBackgroundTintList() const
	{
		return callObjectMethod(
			"getProgressBackgroundTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode ProgressBar::getProgressBackgroundTintMode() const
	{
		return callObjectMethod(
			"getProgressBackgroundTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::drawable::Drawable ProgressBar::getProgressDrawable() const
	{
		return callObjectMethod(
			"getProgressDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::content::res::ColorStateList ProgressBar::getProgressTintList() const
	{
		return callObjectMethod(
			"getProgressTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode ProgressBar::getProgressTintMode() const
	{
		return callObjectMethod(
			"getProgressTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline jint ProgressBar::getSecondaryProgress() const
	{
		return callMethod<jint>(
			"getSecondaryProgress",
			"()I"
		);
	}
	inline android::content::res::ColorStateList ProgressBar::getSecondaryProgressTintList() const
	{
		return callObjectMethod(
			"getSecondaryProgressTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode ProgressBar::getSecondaryProgressTintMode() const
	{
		return callObjectMethod(
			"getSecondaryProgressTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline void ProgressBar::incrementProgressBy(jint arg0) const
	{
		callMethod<void>(
			"incrementProgressBy",
			"(I)V",
			arg0
		);
	}
	inline void ProgressBar::incrementSecondaryProgressBy(jint arg0) const
	{
		callMethod<void>(
			"incrementSecondaryProgressBy",
			"(I)V",
			arg0
		);
	}
	inline void ProgressBar::invalidateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline jboolean ProgressBar::isAnimating() const
	{
		return callMethod<jboolean>(
			"isAnimating",
			"()Z"
		);
	}
	inline jboolean ProgressBar::isIndeterminate() const
	{
		return callMethod<jboolean>(
			"isIndeterminate",
			"()Z"
		);
	}
	inline void ProgressBar::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	inline void ProgressBar::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	inline JObject ProgressBar::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	inline void ProgressBar::onVisibilityAggregated(jboolean arg0) const
	{
		callMethod<void>(
			"onVisibilityAggregated",
			"(Z)V",
			arg0
		);
	}
	inline void ProgressBar::postInvalidate() const
	{
		callMethod<void>(
			"postInvalidate",
			"()V"
		);
	}
	inline void ProgressBar::setIndeterminate(jboolean arg0) const
	{
		callMethod<void>(
			"setIndeterminate",
			"(Z)V",
			arg0
		);
	}
	inline void ProgressBar::setIndeterminateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setIndeterminateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setIndeterminateDrawableTiled(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setIndeterminateDrawableTiled",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setIndeterminateTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setIndeterminateTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setIndeterminateTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setIndeterminateTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setInterpolator(JObject arg0) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/view/animation/Interpolator;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setInterpolator(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setInterpolator",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void ProgressBar::setMax(jint arg0) const
	{
		callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	inline void ProgressBar::setMin(jint arg0) const
	{
		callMethod<void>(
			"setMin",
			"(I)V",
			arg0
		);
	}
	inline void ProgressBar::setProgress(jint arg0) const
	{
		callMethod<void>(
			"setProgress",
			"(I)V",
			arg0
		);
	}
	inline void ProgressBar::setProgress(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setProgress",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void ProgressBar::setProgressBackgroundTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setProgressBackgroundTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setProgressBackgroundTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setProgressBackgroundTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setProgressDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setProgressDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setProgressDrawableTiled(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setProgressDrawableTiled",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setProgressTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setProgressTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setProgressTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setProgressTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setSecondaryProgress(jint arg0) const
	{
		callMethod<void>(
			"setSecondaryProgress",
			"(I)V",
			arg0
		);
	}
	inline void ProgressBar::setSecondaryProgressTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setSecondaryProgressTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void ProgressBar::setSecondaryProgressTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setSecondaryProgressTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"

