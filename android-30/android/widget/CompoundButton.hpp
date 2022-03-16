#pragma once

#include "../../JIntArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/ColorStateList.def.hpp"
#include "../graphics/BlendMode.def.hpp"
#include "../graphics/Canvas.def.hpp"
#include "../graphics/PorterDuff_Mode.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../view/autofill/AutofillValue.def.hpp"
#include "../../JString.hpp"
#include "./CompoundButton.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline CompoundButton::CompoundButton(android::content::Context arg0)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline CompoundButton::CompoundButton(android::content::Context arg0, JObject arg1)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline CompoundButton::CompoundButton(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline CompoundButton::CompoundButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void CompoundButton::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	inline void CompoundButton::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline JString CompoundButton::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint CompoundButton::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	inline android::view::autofill::AutofillValue CompoundButton::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	inline android::graphics::drawable::Drawable CompoundButton::getButtonDrawable() const
	{
		return callObjectMethod(
			"getButtonDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::BlendMode CompoundButton::getButtonTintBlendMode() const
	{
		return callObjectMethod(
			"getButtonTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	inline android::content::res::ColorStateList CompoundButton::getButtonTintList() const
	{
		return callObjectMethod(
			"getButtonTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	inline android::graphics::PorterDuff_Mode CompoundButton::getButtonTintMode() const
	{
		return callObjectMethod(
			"getButtonTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	inline jint CompoundButton::getCompoundPaddingLeft() const
	{
		return callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	inline jint CompoundButton::getCompoundPaddingRight() const
	{
		return callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	inline jboolean CompoundButton::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	inline void CompoundButton::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	inline void CompoundButton::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	inline JObject CompoundButton::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	inline jboolean CompoundButton::performClick() const
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	inline void CompoundButton::setButtonDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setButtonDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void CompoundButton::setButtonDrawable(jint arg0) const
	{
		callMethod<void>(
			"setButtonDrawable",
			"(I)V",
			arg0
		);
	}
	inline void CompoundButton::setButtonTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setButtonTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void CompoundButton::setButtonTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setButtonTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void CompoundButton::setButtonTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setButtonTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	inline void CompoundButton::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	inline void CompoundButton::setOnCheckedChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCheckedChangeListener",
			"(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V",
			arg0.object()
		);
	}
	inline void CompoundButton::setStateDescription(JString arg0) const
	{
		callMethod<void>(
			"setStateDescription",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void CompoundButton::toggle() const
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

