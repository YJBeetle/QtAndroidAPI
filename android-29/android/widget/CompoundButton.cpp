#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "./CompoundButton.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	CompoundButton::CompoundButton(QJniObject obj) : android::widget::Button(obj) {}
	
	// Constructors
	CompoundButton::CompoundButton(android::content::Context arg0)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	CompoundButton::CompoundButton(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	CompoundButton::CompoundButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	CompoundButton::CompoundButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::Button(
			"android.widget.CompoundButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void CompoundButton::autofill(android::view::autofill::AutofillValue arg0)
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void CompoundButton::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring CompoundButton::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint CompoundButton::getAutofillType()
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue CompoundButton::getAutofillValue()
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	android::graphics::drawable::Drawable CompoundButton::getButtonDrawable()
	{
		return callObjectMethod(
			"getButtonDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::BlendMode CompoundButton::getButtonTintBlendMode()
	{
		return callObjectMethod(
			"getButtonTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList CompoundButton::getButtonTintList()
	{
		return callObjectMethod(
			"getButtonTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode CompoundButton::getButtonTintMode()
	{
		return callObjectMethod(
			"getButtonTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	jint CompoundButton::getCompoundPaddingLeft()
	{
		return callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint CompoundButton::getCompoundPaddingRight()
	{
		return callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	jboolean CompoundButton::isChecked()
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	void CompoundButton::jumpDrawablesToCurrentState()
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void CompoundButton::onRestoreInstanceState(__JniBaseClass arg0)
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	__JniBaseClass CompoundButton::onSaveInstanceState()
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean CompoundButton::performClick()
	{
		return callMethod<jboolean>(
			"performClick",
			"()Z"
		);
	}
	void CompoundButton::setButtonDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setButtonDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void CompoundButton::setButtonDrawable(jint arg0)
	{
		callMethod<void>(
			"setButtonDrawable",
			"(I)V",
			arg0
		);
	}
	void CompoundButton::setButtonTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setButtonTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void CompoundButton::setButtonTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setButtonTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void CompoundButton::setButtonTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setButtonTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void CompoundButton::setChecked(jboolean arg0)
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void CompoundButton::setOnCheckedChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnCheckedChangeListener",
			"(Landroid/widget/CompoundButton$OnCheckedChangeListener;)V",
			arg0.object()
		);
	}
	void CompoundButton::toggle()
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget

