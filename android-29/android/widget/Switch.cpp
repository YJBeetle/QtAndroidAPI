#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/Typeface.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/MotionEvent.hpp"
#include "./Switch.hpp"

namespace android::widget
{
	// Fields
	
	Switch::Switch(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Switch::Switch(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	Switch::Switch(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Switch::Switch(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	Switch::Switch(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Switch",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void Switch::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring Switch::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint Switch::getCompoundPaddingLeft()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingLeft",
			"()I"
		);
	}
	jint Switch::getCompoundPaddingRight()
	{
		return __thiz.callMethod<jint>(
			"getCompoundPaddingRight",
			"()I"
		);
	}
	jboolean Switch::getShowText()
	{
		return __thiz.callMethod<jboolean>(
			"getShowText",
			"()Z"
		);
	}
	jboolean Switch::getSplitTrack()
	{
		return __thiz.callMethod<jboolean>(
			"getSplitTrack",
			"()Z"
		);
	}
	jint Switch::getSwitchMinWidth()
	{
		return __thiz.callMethod<jint>(
			"getSwitchMinWidth",
			"()I"
		);
	}
	jint Switch::getSwitchPadding()
	{
		return __thiz.callMethod<jint>(
			"getSwitchPadding",
			"()I"
		);
	}
	jstring Switch::getTextOff()
	{
		return __thiz.callObjectMethod(
			"getTextOff",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring Switch::getTextOn()
	{
		return __thiz.callObjectMethod(
			"getTextOn",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject Switch::getThumbDrawable()
	{
		return __thiz.callObjectMethod(
			"getThumbDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Switch::getThumbTextPadding()
	{
		return __thiz.callMethod<jint>(
			"getThumbTextPadding",
			"()I"
		);
	}
	QAndroidJniObject Switch::getThumbTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getThumbTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject Switch::getThumbTintList()
	{
		return __thiz.callObjectMethod(
			"getThumbTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject Switch::getThumbTintMode()
	{
		return __thiz.callObjectMethod(
			"getThumbTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject Switch::getTrackDrawable()
	{
		return __thiz.callObjectMethod(
			"getTrackDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject Switch::getTrackTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getTrackTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject Switch::getTrackTintList()
	{
		return __thiz.callObjectMethod(
			"getTrackTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject Switch::getTrackTintMode()
	{
		return __thiz.callObjectMethod(
			"getTrackTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	void Switch::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	void Switch::onMeasure(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean Switch::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Switch::setChecked(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setChecked",
			"(Z)V",
			arg0
		);
	}
	void Switch::setShowText(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setShowText",
			"(Z)V",
			arg0
		);
	}
	void Switch::setSplitTrack(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSplitTrack",
			"(Z)V",
			arg0
		);
	}
	void Switch::setSwitchMinWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchMinWidth",
			"(I)V",
			arg0
		);
	}
	void Switch::setSwitchPadding(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchPadding",
			"(I)V",
			arg0
		);
	}
	void Switch::setSwitchTextAppearance(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSwitchTextAppearance",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Switch::setSwitchTypeface(android::graphics::Typeface arg0)
	{
		__thiz.callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setSwitchTypeface(android::graphics::Typeface arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setSwitchTypeface",
			"(Landroid/graphics/Typeface;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Switch::setTextOff(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Switch::setTextOff(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTextOff",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Switch::setTextOn(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Switch::setTextOn(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTextOn",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Switch::setThumbDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setThumbDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setThumbResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThumbResource",
			"(I)V",
			arg0
		);
	}
	void Switch::setThumbTextPadding(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTextPadding",
			"(I)V",
			arg0
		);
	}
	void Switch::setThumbTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setThumbTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setThumbTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setTrackDrawable(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTrackDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setTrackResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTrackResource",
			"(I)V",
			arg0
		);
	}
	void Switch::setTrackTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTrackTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setTrackTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTrackTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::setTrackTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setTrackTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void Switch::toggle()
	{
		__thiz.callMethod<void>(
			"toggle",
			"()V"
		);
	}
} // namespace android::widget

