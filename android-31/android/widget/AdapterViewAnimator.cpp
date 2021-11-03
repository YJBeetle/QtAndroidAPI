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
	
	// QJniObject forward
	AdapterViewAnimator::AdapterViewAnimator(QJniObject obj) : android::widget::AdapterView(obj) {}
	
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
	void AdapterViewAnimator::advance()
	{
		callMethod<void>(
			"advance",
			"()V"
		);
	}
	void AdapterViewAnimator::deferNotifyDataSetChanged()
	{
		callMethod<void>(
			"deferNotifyDataSetChanged",
			"()V"
		);
	}
	void AdapterViewAnimator::fyiWillBeAdvancedByHostKThx()
	{
		callMethod<void>(
			"fyiWillBeAdvancedByHostKThx",
			"()V"
		);
	}
	JString AdapterViewAnimator::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject AdapterViewAnimator::getAdapter()
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/Adapter;"
		);
	}
	jint AdapterViewAnimator::getBaseline()
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	android::view::View AdapterViewAnimator::getCurrentView()
	{
		return callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	jint AdapterViewAnimator::getDisplayedChild()
	{
		return callMethod<jint>(
			"getDisplayedChild",
			"()I"
		);
	}
	android::animation::ObjectAnimator AdapterViewAnimator::getInAnimation()
	{
		return callObjectMethod(
			"getInAnimation",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	android::animation::ObjectAnimator AdapterViewAnimator::getOutAnimation()
	{
		return callObjectMethod(
			"getOutAnimation",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	android::view::View AdapterViewAnimator::getSelectedView()
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	jboolean AdapterViewAnimator::onRemoteAdapterConnected()
	{
		return callMethod<jboolean>(
			"onRemoteAdapterConnected",
			"()Z"
		);
	}
	void AdapterViewAnimator::onRemoteAdapterDisconnected()
	{
		callMethod<void>(
			"onRemoteAdapterDisconnected",
			"()V"
		);
	}
	void AdapterViewAnimator::onRestoreInstanceState(JObject arg0)
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	JObject AdapterViewAnimator::onSaveInstanceState()
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jboolean AdapterViewAnimator::onTouchEvent(android::view::MotionEvent arg0)
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	void AdapterViewAnimator::setAdapter(JObject arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void AdapterViewAnimator::setAnimateFirstView(jboolean arg0)
	{
		callMethod<void>(
			"setAnimateFirstView",
			"(Z)V",
			arg0
		);
	}
	void AdapterViewAnimator::setDisplayedChild(jint arg0)
	{
		callMethod<void>(
			"setDisplayedChild",
			"(I)V",
			arg0
		);
	}
	void AdapterViewAnimator::setInAnimation(android::animation::ObjectAnimator arg0)
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/animation/ObjectAnimator;)V",
			arg0.object()
		);
	}
	void AdapterViewAnimator::setInAnimation(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void AdapterViewAnimator::setOutAnimation(android::animation::ObjectAnimator arg0)
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/animation/ObjectAnimator;)V",
			arg0.object()
		);
	}
	void AdapterViewAnimator::setOutAnimation(android::content::Context arg0, jint arg1)
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	void AdapterViewAnimator::setRemoteViewsAdapter(android::content::Intent arg0)
	{
		callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	void AdapterViewAnimator::setSelection(jint arg0)
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void AdapterViewAnimator::showNext()
	{
		callMethod<void>(
			"showNext",
			"()V"
		);
	}
	void AdapterViewAnimator::showPrevious()
	{
		callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
} // namespace android::widget

