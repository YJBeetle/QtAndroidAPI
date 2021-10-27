#include "../content/Context.hpp"
#include "../content/res/ColorStateList.hpp"
#include "../graphics/BlendMode.hpp"
#include "../graphics/Canvas.hpp"
#include "../graphics/PorterDuff_Mode.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "./AbsSeekBar.hpp"

namespace android::widget
{
	// Fields
	
	AbsSeekBar::AbsSeekBar(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AbsSeekBar::AbsSeekBar(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	AbsSeekBar::AbsSeekBar(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	AbsSeekBar::AbsSeekBar(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	AbsSeekBar::AbsSeekBar(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AbsSeekBar",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void AbsSeekBar::drawableHotspotChanged(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"drawableHotspotChanged",
			"(FF)V",
			arg0,
			arg1
		);
	}
	jstring AbsSeekBar::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint AbsSeekBar::getKeyProgressIncrement()
	{
		return __thiz.callMethod<jint>(
			"getKeyProgressIncrement",
			"()I"
		);
	}
	jboolean AbsSeekBar::getSplitTrack()
	{
		return __thiz.callMethod<jboolean>(
			"getSplitTrack",
			"()Z"
		);
	}
	QAndroidJniObject AbsSeekBar::getThumb()
	{
		return __thiz.callObjectMethod(
			"getThumb",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint AbsSeekBar::getThumbOffset()
	{
		return __thiz.callMethod<jint>(
			"getThumbOffset",
			"()I"
		);
	}
	QAndroidJniObject AbsSeekBar::getThumbTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getThumbTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject AbsSeekBar::getThumbTintList()
	{
		return __thiz.callObjectMethod(
			"getThumbTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject AbsSeekBar::getThumbTintMode()
	{
		return __thiz.callObjectMethod(
			"getThumbTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	QAndroidJniObject AbsSeekBar::getTickMark()
	{
		return __thiz.callObjectMethod(
			"getTickMark",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject AbsSeekBar::getTickMarkTintBlendMode()
	{
		return __thiz.callObjectMethod(
			"getTickMarkTintBlendMode",
			"()Landroid/graphics/BlendMode;"
		);
	}
	QAndroidJniObject AbsSeekBar::getTickMarkTintList()
	{
		return __thiz.callObjectMethod(
			"getTickMarkTintList",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	QAndroidJniObject AbsSeekBar::getTickMarkTintMode()
	{
		return __thiz.callObjectMethod(
			"getTickMarkTintMode",
			"()Landroid/graphics/PorterDuff$Mode;"
		);
	}
	void AbsSeekBar::jumpDrawablesToCurrentState()
	{
		__thiz.callMethod<void>(
			"jumpDrawablesToCurrentState",
			"()V"
		);
	}
	jboolean AbsSeekBar::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void AbsSeekBar::onRtlPropertiesChanged(jint arg0)
	{
		__thiz.callMethod<void>(
			"onRtlPropertiesChanged",
			"(I)V",
			arg0
		);
	}
	jboolean AbsSeekBar::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setKeyProgressIncrement(jint arg0)
	{
		__thiz.callMethod<void>(
			"setKeyProgressIncrement",
			"(I)V",
			arg0
		);
	}
	void AbsSeekBar::setMax(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMax",
			"(I)V",
			arg0
		);
	}
	void AbsSeekBar::setMin(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMin",
			"(I)V",
			arg0
		);
	}
	void AbsSeekBar::setSplitTrack(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setSplitTrack",
			"(Z)V",
			arg0
		);
	}
	void AbsSeekBar::setSystemGestureExclusionRects(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setSystemGestureExclusionRects",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setThumb(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setThumb",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setThumbOffset(jint arg0)
	{
		__thiz.callMethod<void>(
			"setThumbOffset",
			"(I)V",
			arg0
		);
	}
	void AbsSeekBar::setThumbTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setThumbTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setThumbTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setThumbTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setTickMark(android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"setTickMark",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setTickMarkTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTickMarkTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setTickMarkTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTickMarkTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
	void AbsSeekBar::setTickMarkTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		__thiz.callMethod<void>(
			"setTickMarkTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

