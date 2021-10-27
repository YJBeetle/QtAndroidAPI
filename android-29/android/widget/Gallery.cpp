#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/animation/Transformation.hpp"
#include "./Gallery.hpp"

namespace android::widget
{
	// Fields
	
	Gallery::Gallery(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Gallery::Gallery(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	Gallery::Gallery(android::content::Context &arg0, __JniBaseClass &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	Gallery::Gallery(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	Gallery::Gallery(android::content::Context &arg0, __JniBaseClass &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.Gallery",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean Gallery::dispatchKeyEvent(android::view::KeyEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"dispatchKeyEvent",
			"(Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Gallery::dispatchSetSelected(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"dispatchSetSelected",
			"(Z)V",
			arg0
		);
	}
	QAndroidJniObject Gallery::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring Gallery::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean Gallery::onDown(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onDown",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Gallery::onFling(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onFling",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jboolean Gallery::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean Gallery::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Gallery::onLongPress(android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"onLongPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Gallery::onScroll(android::view::MotionEvent arg0, android::view::MotionEvent arg1, jfloat arg2, jfloat arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onScroll",
			"(Landroid/view/MotionEvent;Landroid/view/MotionEvent;FF)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void Gallery::onShowPress(android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"onShowPress",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean Gallery::onSingleTapUp(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onSingleTapUp",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Gallery::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void Gallery::setAnimationDuration(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAnimationDuration",
			"(I)V",
			arg0
		);
	}
	void Gallery::setCallbackDuringFling(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setCallbackDuringFling",
			"(Z)V",
			arg0
		);
	}
	void Gallery::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void Gallery::setSpacing(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSpacing",
			"(I)V",
			arg0
		);
	}
	void Gallery::setUnselectedAlpha(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setUnselectedAlpha",
			"(F)V",
			arg0
		);
	}
	jboolean Gallery::showContextMenu()
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"()Z"
		);
	}
	jboolean Gallery::showContextMenu(jfloat arg0, jfloat arg1)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenu",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	jboolean Gallery::showContextMenuForChild(android::view::View arg0)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean Gallery::showContextMenuForChild(android::view::View arg0, jfloat arg1, jfloat arg2)
	{
		return __thiz.callMethod<jboolean>(
			"showContextMenuForChild",
			"(Landroid/view/View;FF)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace android::widget

