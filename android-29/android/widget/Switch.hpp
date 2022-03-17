#pragma once

#include "../../JIntArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/ColorStateList.def.hpp"
#include "../graphics/BlendMode.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/PorterDuff_Mode.def.hpp"
#include "../graphics/Typeface.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../../JString.hpp"
#include "./Switch.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline Switch::Switch(android::content::Context arg0)
		: android::widget::CompoundButton(
			"android.widget.Switch",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline Switch::Switch(android::content::Context arg0, JObject arg1)
		: android::widget::CompoundButton(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline Switch::Switch(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::CompoundButton(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline Switch::Switch(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::CompoundButton(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void Switch::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void Switch::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline JString Switch::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint Switch::getCompoundPaddingLeft() const
	{
		return callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	inline jint Switch::getCompoundPaddingRight() const
	{
		return callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	inline jboolean Switch::getShowText() const
	{
		return callMethod<jboolean>(
			"getShowText",
			"()Z"
		);
	}
	inline jboolean Switch::getSplitTrack() const
	{
		return callMethod<jboolean>(
			"getSplitTrack",
			"()Z"
		);
	}
	inline jint Switch::getSwitchMinWidth() const
	{
		return callMethod<jint>(
			"getSwitchMinWidth",
			"()I"
		);
	}
	inline jint Switch::getSwitchPadding() const
	{
		return callMethod<jint>(
			"getSwitchPadding",
			"()I"
		);
	}
	inline JString Switch::getTextOff() const
	{
		return callObjectMethod(
			"getTextOff",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString Switch::getTextOn() const
	{
		return callObjectMethod(
			"getTextOn",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::graphics::drawable::Drawable Switch::getThumbDrawable() const
	{
		return callObjectMethod(
			"getThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint Switch::getThumbTextPadding() const
	{
		return callMethod<jint>(
			"getThumbTextPadding",
			"()I"
		);
	}
	inline android::graphics::BlendMode Switch::getThumbTintBlendMode() const
	{
		return callObjectMethod(
			"getThumbTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList Switch::getThumbTintList() const
	{
		return callObjectMethod(
			"getThumbTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode Switch::getThumbTintMode() const
	{
		return callObjectMethod(
			"getThumbTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline android::graphics::drawable::Drawable Switch::getTrackDrawable() const
	{
		return callObjectMethod(
			"getTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::BlendMode Switch::getTrackTintBlendMode() const
	{
		return callObjectMethod(
			"getTrackTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList Switch::getTrackTintList() const
	{
		return callObjectMethod(
			"getTrackTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode Switch::getTrackTintMode() const
	{
		return callObjectMethod(
			"getTrackTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline void Switch::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	inline void Switch::onMeasure(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean Switch::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void Switch::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	inline void Switch::setShowText(jboolean arg0) const
	{
		callMethod<void>(
			"setShowText",
			"(Z)V",
			arg0
		);
	}
	inline void Switch::setSplitTrack(jboolean arg0) const
	{
		callMethod<void>(
			"setSplitTrack",
			"(Z)V",
			arg0
		);
	}
	inline void Switch::setSwitchMinWidth(jint arg0) const
	{
		callMethod<void>(
			"setSwitchMinWidth",
			"(I)V",
			arg0
		);
	}
	inline void Switch::setSwitchPadding(jint arg0) const
	{
		callMethod<void>(
			"setSwitchPadding",
			"(I)V",
			arg0
		);
	}
	inline void Switch::setSwitchTextAppearance(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setSwitchTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Switch::setSwitchTypeface(android::graphics::Typeface arg0) const
	{
		callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.object()
		);
	}
	inline void Switch::setSwitchTypeface(android::graphics::Typeface arg0, jint arg1) const
	{
		callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void Switch::setTextOff(JString arg0) const
	{
		callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Switch::setTextOn(JString arg0) const
	{
		callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void Switch::setThumbDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void Switch::setThumbResource(jint arg0) const
	{
		callMethod<void>(
			"setThumbResource",
			"(I)V",
			arg0
		);
	}
	inline void Switch::setThumbTextPadding(jint arg0) const
	{
		callMethod<void>(
			"setThumbTextPadding",
			"(I)V",
			arg0
		);
	}
	inline void Switch::setThumbTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setThumbTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void Switch::setThumbTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setThumbTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void Switch::setThumbTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setThumbTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void Switch::setTrackDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void Switch::setTrackResource(jint arg0) const
	{
		callMethod<void>(
			"setTrackResource",
			"(I)V",
			arg0
		);
	}
	inline void Switch::setTrackTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTrackTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void Switch::setTrackTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTrackTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void Switch::setTrackTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTrackTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void Switch::toggle() const
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "./TextView.hpp"
#include "./Button.hpp"
#include "./CompoundButton.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
