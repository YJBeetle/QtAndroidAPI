#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/Typeface.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/ViewStructure.hpp"
#include "./Switch.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	Switch::Switch(QJniObject obj) : android::widget::CompoundButton(obj) {}
	
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
	void Switch::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void Switch::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring Switch::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Switch::getCompoundPaddingLeft()
	{
		return callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint Switch::getCompoundPaddingRight()
	{
		return callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	jboolean Switch::getShowText()
	{
		return callMethod<jboolean>(
			"getShowText",
			"()Z"
		);
	}
	jboolean Switch::getSplitTrack()
	{
		return callMethod<jboolean>(
			"getSplitTrack",
			"()Z"
		);
	}
	jint Switch::getSwitchMinWidth()
	{
		return callMethod<jint>(
			"getSwitchMinWidth",
			"()I"
		);
	}
	jint Switch::getSwitchPadding()
	{
		return callMethod<jint>(
			"getSwitchPadding",
			"()I"
		);
	}
	jstring Switch::getTextOff()
	{
		return callObjectMethod(
			"getTextOff",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Switch::getTextOn()
	{
		return callObjectMethod(
			"getTextOn",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::graphics::drawable::Drawable Switch::getThumbDrawable()
	{
		return callObjectMethod(
			"getThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Switch::getThumbTextPadding()
	{
		return callMethod<jint>(
			"getThumbTextPadding",
			"()I"
		);
	}
	android::content::res::ColorStateList Switch::getThumbTintList()
	{
		return callObjectMethod(
			"getThumbTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode Switch::getThumbTintMode()
	{
		return callObjectMethod(
			"getThumbTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	android::graphics::drawable::Drawable Switch::getTrackDrawable()
	{
		return callObjectMethod(
			"getTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::content::res::ColorStateList Switch::getTrackTintList()
	{
		return callObjectMethod(
			"getTrackTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	android::graphics::PorterDuff_Mode Switch::getTrackTintMode()
	{
		return callObjectMethod(
			"getTrackTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	void Switch::jumpDrawablesToCurrentState()
	{
		callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void Switch::onMeasure(jint arg0, jint arg1)
	{
		callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Switch::onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1)
	{
		callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	void Switch::onProvideStructure(android::view::ViewStructure arg0)
	{
		callMethod<void>(
			"onProvideStructure",
			"(Landroid/view/ViewStructure;)V",
			arg0.object()
		);
	}
	jboolean Switch::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void Switch::setChecked(jboolean arg0)
	{
		callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void Switch::setShowText(jboolean arg0)
	{
		callMethod<void>(
			"setShowText",
			"(Z)V",
			arg0
		);
	}
	void Switch::setSplitTrack(jboolean arg0)
	{
		callMethod<void>(
			"setSplitTrack",
			"(Z)V",
			arg0
		);
	}
	void Switch::setSwitchMinWidth(jint arg0)
	{
		callMethod<void>(
			"setSwitchMinWidth",
			"(I)V",
			arg0
		);
	}
	void Switch::setSwitchPadding(jint arg0)
	{
		callMethod<void>(
			"setSwitchPadding",
			"(I)V",
			arg0
		);
	}
	void Switch::setSwitchTextAppearance(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setSwitchTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void Switch::setSwitchTypeface(android::graphics::Typeface arg0)
	{
		callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.object()
		);
	}
	void Switch::setSwitchTypeface(android::graphics::Typeface arg0, jint arg1)
	{
		callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.object(),
			arg1
		);
	}
	void Switch::setTextOff(jstring arg0)
	{
		callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Switch::setTextOn(jstring arg0)
	{
		callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Switch::setThumbDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Switch::setThumbResource(jint arg0)
	{
		callMethod<void>(
			"setThumbResource",
			"(I)V",
			arg0
		);
	}
	void Switch::setThumbTextPadding(jint arg0)
	{
		callMethod<void>(
			"setThumbTextPadding",
			"(I)V",
			arg0
		);
	}
	void Switch::setThumbTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setThumbTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void Switch::setThumbTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setThumbTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void Switch::setTrackDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void Switch::setTrackResource(jint arg0)
	{
		callMethod<void>(
			"setTrackResource",
			"(I)V",
			arg0
		);
	}
	void Switch::setTrackTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTrackTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void Switch::setTrackTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setTrackTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
	void Switch::toggle()
	{
		callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget

