#include "../../JIntArray.hpp"
#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/ViewStructure.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "../../JString.hpp"
#include "./CompoundButton.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	CompoundButton::CompoundButton(android::content::Context arg0)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	CompoundButton::CompoundButton(android::content::Context arg0, JObject arg1)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	CompoundButton::CompoundButton(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	CompoundButton::CompoundButton(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void CompoundButton::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void CompoundButton::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	JString CompoundButton::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint CompoundButton::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue CompoundButton::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	android::graphics::drawable::Drawable CompoundButton::getButtonDrawable() const
	{
		return callObjectMethod(
			"getButtonDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::content::res::ColorStateList CompoundButton::getButtonTintList() const
	{
		return callObjectMethod(
			"getButtonTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode CompoundButton::getButtonTintMode() const
	{
		return callObjectMethod(
			"getButtonTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jint CompoundButton::getCompoundPaddingLeft() const
	{
		return callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint CompoundButton::getCompoundPaddingRight() const
	{
		return callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	jboolean CompoundButton::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void CompoundButton::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void CompoundButton::onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void CompoundButton::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	JObject CompoundButton::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean CompoundButton::performClick() const
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	void CompoundButton::setButtonDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setButtonDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void CompoundButton::setButtonDrawable(jint arg0) const
	{
		callMethod<void>(
			"setButtonDrawable",
			"(I)V",
			arg0
		);
	}
	void CompoundButton::setButtonTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setButtonTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void CompoundButton::setButtonTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setButtonTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void CompoundButton::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void CompoundButton::setOnCheckedChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCheckedChangeListener",
			"(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V",
			arg0.object()
		);
	}
	void CompoundButton::toggle() const
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget

