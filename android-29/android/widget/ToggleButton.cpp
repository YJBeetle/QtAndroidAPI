#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./ToggleButton.hpp"

namespace android::widget
{
	// Fields
	
	ToggleButton::ToggleButton(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ToggleButton::ToggleButton(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	ToggleButton::ToggleButton(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	ToggleButton::ToggleButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	ToggleButton::ToggleButton(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.ToggleButton",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jstring ToggleButton::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jfloat ToggleButton::getDisabledAlpha()
	{
		return __thiz.callMethod<jfloat>(
			"getDisabledAlpha",
			"()F"
		);
	}
	jstring ToggleButton::getTextOff()
	{
		return __thiz.callObjectMethod(
			"getTextOff",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ToggleButton::getTextOn()
	{
		return __thiz.callObjectMethod(
			"getTextOn",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ToggleButton::setBackgroundDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setBackgroundDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ToggleButton::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void ToggleButton::setTextOff(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void ToggleButton::setTextOn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
} // namespace android::widget

