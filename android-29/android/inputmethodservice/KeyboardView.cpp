#include "../content/Context.hpp"
#include "../graphics/Canvas.hpp"
#include "./Keyboard.hpp"
#include "./Keyboard_Key.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "./KeyboardView.hpp"

namespace android::inputmethodservice
{
	// Fields
	
	KeyboardView::KeyboardView(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyboardView::KeyboardView(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	KeyboardView::KeyboardView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	KeyboardView::KeyboardView(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.KeyboardView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void KeyboardView::closing()
	{
		__thiz.callMethod<void>(
			"closing",
			"()V"
		);
	}
	QAndroidJniObject KeyboardView::getKeyboard()
	{
		return __thiz.callObjectMethod(
			"getKeyboard",
			"()Landroid/inputmethodservice/Keyboard;"
		);
	}
	jboolean KeyboardView::handleBack()
	{
		return __thiz.callMethod<jboolean>(
			"handleBack",
			"()Z"
		);
	}
	void KeyboardView::invalidateAllKeys()
	{
		__thiz.callMethod<void>(
			"invalidateAllKeys",
			"()V"
		);
	}
	void KeyboardView::invalidateKey(jint arg0)
	{
		__thiz.callMethod<void>(
			"invalidateKey",
			"(I)V",
			arg0
		);
	}
	jboolean KeyboardView::isPreviewEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isPreviewEnabled",
			"()Z"
		);
	}
	jboolean KeyboardView::isProximityCorrectionEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isProximityCorrectionEnabled",
			"()Z"
		);
	}
	jboolean KeyboardView::isShifted()
	{
		return __thiz.callMethod<jboolean>(
			"isShifted",
			"()Z"
		);
	}
	void KeyboardView::onClick(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::onDetachedFromWindow()
	{
		__thiz.callMethod<void>(
			"onDetachedFromWindow",
			"()V"
		);
	}
	void KeyboardView::onDraw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"onDraw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean KeyboardView::onHoverEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onHoverEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::onMeasure(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onMeasure",
			"(II)V",
			arg0,
			arg1
		);
	}
	void KeyboardView::onSizeChanged(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onSizeChanged",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean KeyboardView::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::setKeyboard(android::inputmethodservice::Keyboard arg0)
	{
		__thiz.callMethod<void>(
			"setKeyboard",
			"(Landroid/inputmethodservice/Keyboard;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::setOnKeyboardActionListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnKeyboardActionListener",
			"(Landroid/inputmethodservice/KeyboardView$OnKeyboardActionListener;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::setPopupOffset(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setPopupOffset",
			"(II)V",
			arg0,
			arg1
		);
	}
	void KeyboardView::setPopupParent(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"setPopupParent",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void KeyboardView::setPreviewEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPreviewEnabled",
			"(Z)V",
			arg0
		);
	}
	void KeyboardView::setProximityCorrectionEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setProximityCorrectionEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean KeyboardView::setShifted(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setShifted",
			"(Z)Z",
			arg0
		);
	}
	void KeyboardView::setVerticalCorrection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalCorrection",
			"(I)V",
			arg0
		);
	}
} // namespace android::inputmethodservice

