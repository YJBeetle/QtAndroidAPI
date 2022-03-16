#include "../../JIntArray.hpp"
#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/Typeface.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../view/MotionEvent.hpp"
#include "../../JString.hpp"
#include "./Switch.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	Switch::Switch(android::content::Context arg0)
		: android::widget::CompoundButton(
			"android.widget.Switch",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	Switch::Switch(android::content::Context arg0, JObject arg1)
		: android::widget::CompoundButton(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	Switch::Switch(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::CompoundButton(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	Switch::Switch(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::CompoundButton(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void Switch::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void Switch::drawableHotspotChanged(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	JString Switch::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint Switch::getCompoundPaddingLeft() const
	{
		return callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint Switch::getCompoundPaddingRight() const
	{
		return callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	jboolean Switch::getShowText() const
	{
		return callMethod<jboolean>(
			"getShowText",
			"()Z"
		);
	}
	jboolean Switch::getSplitTrack() const
	{
		return callMethod<jboolean>(
			"getSplitTrack",
			"()Z"
		);
	}
	jint Switch::getSwitchMinWidth() const
	{
		return callMethod<jint>(
			"getSwitchMinWidth",
			"()I"
		);
	}
	jint Switch::getSwitchPadding() const
	{
		return callMethod<jint>(
			"getSwitchPadding",
			"()I"
		);
	}
	JString Switch::getTextOff() const
	{
		return callObjectMethod(
			"getTextOff",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString Switch::getTextOn() const
	{
		return callObjectMethod(
			"getTextOn",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::graphics::drawable::Drawable Switch::getThumbDrawable() const
	{
		return callObjectMethod(
			"getThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Switch::getThumbTextPadding() const
	{
		return callMethod<jint>(
			"getThumbTextPadding",
			"()I"
		);
	}
	android::graphics::BlendMode Switch::getThumbTintBlendMode() const
	{
		return callObjectMethod(
			"getThumbTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList Switch::getThumbTintList() const
	{
		return callObjectMethod(
			"getThumbTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode Switch::getThumbTintMode() const
	{
		return callObjectMethod(
			"getThumbTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::drawable::Drawable Switch::getTrackDrawable() const
	{
		return callObjectMethod(
			"getTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::BlendMode Switch::getTrackTintBlendMode() const
	{
		return callObjectMethod(
			"getTrackTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	android::content::res::ColorStateList Switch::getTrackTintList() const
	{
		return callObjectMethod(
			"getTrackTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode Switch::getTrackTintMode() const
	{
		return callObjectMethod(
			"getTrackTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	void Switch::jumpDrawablesToCurrentState() const
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void Switch::onMeasure(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Switch::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Switch::setChecked(jboolean arg0) const
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void Switch::setShowText(jboolean arg0) const
	{
		callMethod<void>(
			"setShowText",
			"(Z)V",
			arg0
		);
	}
	void Switch::setSplitTrack(jboolean arg0) const
	{
		callMethod<void>(
			"setSplitTrack",
			"(Z)V",
			arg0
		);
	}
	void Switch::setSwitchMinWidth(jint arg0) const
	{
		callMethod<void>(
			"setSwitchMinWidth",
			"(I)V",
			arg0
		);
	}
	void Switch::setSwitchPadding(jint arg0) const
	{
		callMethod<void>(
			"setSwitchPadding",
			"(I)V",
			arg0
		);
	}
	void Switch::setSwitchTextAppearance(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setSwitchTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void Switch::setSwitchTypeface(android::graphics::Typeface arg0) const
	{
		callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.object()
		);
	}
	void Switch::setSwitchTypeface(android::graphics::Typeface arg0, jint arg1) const
	{
		callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.object(),
			arg1
		);
	}
	void Switch::setTextOff(JString arg0) const
	{
		callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Switch::setTextOn(JString arg0) const
	{
		callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	void Switch::setThumbDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Switch::setThumbIcon(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setThumbIcon",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void Switch::setThumbResource(jint arg0) const
	{
		callMethod<void>(
			"setThumbResource",
			"(I)V",
			arg0
		);
	}
	void Switch::setThumbTextPadding(jint arg0) const
	{
		callMethod<void>(
			"setThumbTextPadding",
			"(I)V",
			arg0
		);
	}
	void Switch::setThumbTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setThumbTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void Switch::setThumbTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setThumbTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void Switch::setThumbTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setThumbTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void Switch::setTrackDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Switch::setTrackIcon(android::graphics::drawable::Icon arg0) const
	{
		callMethod<void>(
			"setTrackIcon",
			"(Landroid/graphics/drawable/Icon;)V",
			arg0.object()
		);
	}
	void Switch::setTrackResource(jint arg0) const
	{
		callMethod<void>(
			"setTrackResource",
			"(I)V",
			arg0
		);
	}
	void Switch::setTrackTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTrackTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void Switch::setTrackTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTrackTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void Switch::setTrackTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTrackTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void Switch::toggle() const
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget

