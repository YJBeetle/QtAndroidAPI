#include "../animation/ObjectAnimator.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../view/MotionEvent.hpp"
#include "../view/View.hpp"
#include "../../JString.hpp"
#include "./AdapterViewAnimator.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	AdapterViewAnimator::AdapterViewAnimator(QAndroidJniObject obj) : android::widget::AdapterView(obj) {}
	
	// Constructors
	AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0)
		: android::widget::AdapterView(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0, JObject arg1)
		: android::widget::AdapterView(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AdapterView(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AdapterView(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void AdapterViewAnimator::advance() const
	{
		callMethod<void>(
			"advance",
			"()V"
		);
	}
	void AdapterViewAnimator::deferNotifyDataSetChanged() const
	{
		callMethod<void>(
			"deferNotifyDataSetChanged",
			"()V"
		);
	}
	void AdapterViewAnimator::fyiWillBeAdvancedByHostKThx() const
	{
		callMethod<void>(
			"fyiWillBeAdvancedByHostKThx",
			"()V"
		);
	}
	JString AdapterViewAnimator::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject AdapterViewAnimator::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/Adapter;"
		);
	}
	jint AdapterViewAnimator::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	android::view::View AdapterViewAnimator::getCurrentView() const
	{
		return callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	jint AdapterViewAnimator::getDisplayedChild() const
	{
		return callMethod<jint>(
			"getDisplayedChild",
			"()I"
		);
	}
	android::animation::ObjectAnimator AdapterViewAnimator::getInAnimation() const
	{
		return callObjectMethod(
			"getInAnimation",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	android::animation::ObjectAnimator AdapterViewAnimator::getOutAnimation() const
	{
		return callObjectMethod(
			"getOutAnimation",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	android::view::View AdapterViewAnimator::getSelectedView() const
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	jboolean AdapterViewAnimator::onRemoteAdapterConnected() const
	{
		return callMethod<jboolean>(
			"onRemoteAdapterConnected",
			"()Z"
		);
	}
	void AdapterViewAnimator::onRemoteAdapterDisconnected() const
	{
		callMethod<void>(
			"onRemoteAdapterDisconnected",
			"()V"
		);
	}
	void AdapterViewAnimator::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	JObject AdapterViewAnimator::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean AdapterViewAnimator::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void AdapterViewAnimator::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void AdapterViewAnimator::setAnimateFirstView(jboolean arg0) const
	{
		callMethod<void>(
			"setAnimateFirstView",
			"(Z)V",
			arg0
		);
	}
	void AdapterViewAnimator::setDisplayedChild(jint arg0) const
	{
		callMethod<void>(
			"setDisplayedChild",
			"(I)V",
			arg0
		);
	}
	void AdapterViewAnimator::setInAnimation(android::animation::ObjectAnimator arg0) const
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/animation/ObjectAnimator;)V",
			arg0.object()
		);
	}
	void AdapterViewAnimator::setInAnimation(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void AdapterViewAnimator::setOutAnimation(android::animation::ObjectAnimator arg0) const
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/animation/ObjectAnimator;)V",
			arg0.object()
		);
	}
	void AdapterViewAnimator::setOutAnimation(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void AdapterViewAnimator::setRemoteViewsAdapter(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void AdapterViewAnimator::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void AdapterViewAnimator::showNext() const
	{
		callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void AdapterViewAnimator::showPrevious() const
	{
		callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
} // namespace android::widget

