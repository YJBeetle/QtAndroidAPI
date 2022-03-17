#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/ColorStateList.def.hpp"
#include "../graphics/BlendMode.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/PorterDuff_Mode.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/KeyEvent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../../JString.hpp"
#include "./AbsSeekBar.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline AbsSeekBar::AbsSeekBar(android::content::Context arg0)
		: android::widget::ProgressBar(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AbsSeekBar::AbsSeekBar(android::content::Context arg0, JObject arg1)
		: android::widget::ProgressBar(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AbsSeekBar::AbsSeekBar(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::ProgressBar(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline AbsSeekBar::AbsSeekBar(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::ProgressBar(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void AbsSeekBar::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline JString AbsSeekBar::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AbsSeekBar::getKeyProgressIncrement() const
	{
		return callMethod<jint>(
			"getKeyProgressIncrement",
			"()I"
		);
	}
	inline jboolean AbsSeekBar::getSplitTrack() const
	{
		return callMethod<jboolean>(
			"getSplitTrack",
			"()Z"
		);
	}
	inline android::graphics::drawable::Drawable AbsSeekBar::getThumb() const
	{
		return callObjectMethod(
			"getThumb",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint AbsSeekBar::getThumbOffset() const
	{
		return callMethod<jint>(
			"getThumbOffset",
			"()I"
		);
	}
	inline android::graphics::BlendMode AbsSeekBar::getThumbTintBlendMode() const
	{
		return callObjectMethod(
			"getThumbTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList AbsSeekBar::getThumbTintList() const
	{
		return callObjectMethod(
			"getThumbTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode AbsSeekBar::getThumbTintMode() const
	{
		return callObjectMethod(
			"getThumbTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::drawable::Drawable AbsSeekBar::getTickMark() const
	{
		return callObjectMethod(
			"getTickMark",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::BlendMode AbsSeekBar::getTickMarkTintBlendMode() const
	{
		return callObjectMethod(
			"getTickMarkTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList AbsSeekBar::getTickMarkTintList() const
	{
		return callObjectMethod(
			"getTickMarkTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode AbsSeekBar::getTickMarkTintMode() const
	{
		return callObjectMethod(
			"getTickMarkTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline void AbsSeekBar::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	inline jboolean AbsSeekBar::onKeyDown(jint arg0, android::view::KeyEvent arg1) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.object()
		);
	}
	inline void AbsSeekBar::onRtlPropertiesChanged(jint arg0) const
	{
		callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	inline jboolean AbsSeekBar::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void AbsSeekBar::setKeyProgressIncrement(jint arg0) const
	{
		callMethod<void>(
			"setKeyProgressIncrement",
			"(I)V",
			arg0
		);
	}
	inline void AbsSeekBar::setMax(jint arg0) const
	{
		callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	inline void AbsSeekBar::setMin(jint arg0) const
	{
		callMethod<void>(
			"setMin",
			"(I)V",
			arg0
		);
	}
	inline void AbsSeekBar::setSplitTrack(jboolean arg0) const
	{
		callMethod<void>(
			"setSplitTrack",
			"(Z)V",
			arg0
		);
	}
	inline void AbsSeekBar::setSystemGestureExclusionRects(JObject arg0) const
	{
		callMethod<void>(
			"setSystemGestureExclusionRects",
			"(Ljava/util/List;)V",
			arg0.object()
		);
	}
	inline void AbsSeekBar::setThumb(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setThumb",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void AbsSeekBar::setThumbOffset(jint arg0) const
	{
		callMethod<void>(
			"setThumbOffset",
			"(I)V",
			arg0
		);
	}
	inline void AbsSeekBar::setThumbTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setThumbTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void AbsSeekBar::setThumbTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setThumbTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void AbsSeekBar::setThumbTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setThumbTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void AbsSeekBar::setTickMark(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setTickMark",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void AbsSeekBar::setTickMarkTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTickMarkTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void AbsSeekBar::setTickMarkTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTickMarkTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void AbsSeekBar::setTickMarkTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTickMarkTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./ProgressBar.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
