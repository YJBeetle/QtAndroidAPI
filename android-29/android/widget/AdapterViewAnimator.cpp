#include "../animation/ObjectAnimator.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "./AdapterViewAnimator.hpp"

namespace android::widget
{
	// Fields
	
	AdapterViewAnimator::AdapterViewAnimator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	
	// Methods
	void AdapterViewAnimator::advance()
	{
		__thiz.callMethod<void>(
			"advance",
			"()V"
		);
	}
	void AdapterViewAnimator::deferNotifyDataSetChanged()
	{
		__thiz.callMethod<void>(
			"deferNotifyDataSetChanged",
			"()V"
		);
	}
	void AdapterViewAnimator::fyiWillBeAdvancedByHostKThx()
	{
		__thiz.callMethod<void>(
			"fyiWillBeAdvancedByHostKThx",
			"()V"
		);
	}
	jstring AdapterViewAnimator::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	QAndroidJniObject AdapterViewAnimator::getAdapter()
	{
		return __thiz.callObjectMethod(
			"getAdapter",
			"()Landroid/widget/Adapter;"
		);
	}
	jint AdapterViewAnimator::getBaseline()
	{
		return __thiz.callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	QAndroidJniObject AdapterViewAnimator::getCurrentView()
	{
		return __thiz.callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	jint AdapterViewAnimator::getDisplayedChild()
	{
		return __thiz.callMethod<jint>(
			"getDisplayedChild",
			"()I"
		);
	}
	QAndroidJniObject AdapterViewAnimator::getInAnimation()
	{
		return __thiz.callObjectMethod(
			"getInAnimation",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	QAndroidJniObject AdapterViewAnimator::getOutAnimation()
	{
		return __thiz.callObjectMethod(
			"getOutAnimation",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	QAndroidJniObject AdapterViewAnimator::getSelectedView()
	{
		return __thiz.callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	jboolean AdapterViewAnimator::onRemoteAdapterConnected()
	{
		return __thiz.callMethod<jboolean>(
			"onRemoteAdapterConnected",
			"()Z"
		);
	}
	void AdapterViewAnimator::onRemoteAdapterDisconnected()
	{
		__thiz.callMethod<void>(
			"onRemoteAdapterDisconnected",
			"()V"
		);
	}
	void AdapterViewAnimator::onRestoreInstanceState(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AdapterViewAnimator::onSaveInstanceState()
	{
		return __thiz.callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean AdapterViewAnimator::onTouchEvent(android::view::MotionEvent arg0)
	{
		return __thiz.callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.__jniObject().object()
		);
	}
	void AdapterViewAnimator::setAdapter(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterViewAnimator::setAnimateFirstView(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAnimateFirstView",
			"(Z)V",
			arg0
		);
	}
	void AdapterViewAnimator::setDisplayedChild(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayedChild",
			"(I)V",
			arg0
		);
	}
	void AdapterViewAnimator::setInAnimation(android::animation::ObjectAnimator arg0)
	{
		__thiz.callMethod<void>(
			"setInAnimation",
			"(Landroid/animation/ObjectAnimator;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterViewAnimator::setInAnimation(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setInAnimation",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AdapterViewAnimator::setOutAnimation(android::animation::ObjectAnimator arg0)
	{
		__thiz.callMethod<void>(
			"setOutAnimation",
			"(Landroid/animation/ObjectAnimator;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterViewAnimator::setOutAnimation(android::content::Context arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setOutAnimation",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void AdapterViewAnimator::setRemoteViewsAdapter(android::content::Intent arg0)
	{
		__thiz.callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.__jniObject().object()
		);
	}
	void AdapterViewAnimator::setSelection(jint arg0)
	{
		__thiz.callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void AdapterViewAnimator::showNext()
	{
		__thiz.callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void AdapterViewAnimator::showPrevious()
	{
		__thiz.callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
} // namespace android::widget

