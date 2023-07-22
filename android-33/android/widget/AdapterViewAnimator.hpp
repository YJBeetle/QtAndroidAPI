#pragma once

#include "../animation/ObjectAnimator.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../view/MotionEvent.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "./AdapterViewAnimator.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0)
		: android::widget::AdapterView(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0, JObject arg1)
		: android::widget::AdapterView(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AdapterView(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline AdapterViewAnimator::AdapterViewAnimator(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AdapterView(
			"android.widget.AdapterViewAnimator",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void AdapterViewAnimator::advance() const
	{
		callMethod<void>(
			"advance",
			"()V"
		);
	}
	inline void AdapterViewAnimator::deferNotifyDataSetChanged() const
	{
		callMethod<void>(
			"deferNotifyDataSetChanged",
			"()V"
		);
	}
	inline void AdapterViewAnimator::fyiWillBeAdvancedByHostKThx() const
	{
		callMethod<void>(
			"fyiWillBeAdvancedByHostKThx",
			"()V"
		);
	}
	inline JString AdapterViewAnimator::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject AdapterViewAnimator::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/Adapter;"
		);
	}
	inline jint AdapterViewAnimator::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	inline android::view::View AdapterViewAnimator::getCurrentView() const
	{
		return callObjectMethod(
			"getCurrentView",
			"()Landroid/view/View;"
		);
	}
	inline jint AdapterViewAnimator::getDisplayedChild() const
	{
		return callMethod<jint>(
			"getDisplayedChild",
			"()I"
		);
	}
	inline android::animation::ObjectAnimator AdapterViewAnimator::getInAnimation() const
	{
		return callObjectMethod(
			"getInAnimation",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	inline android::animation::ObjectAnimator AdapterViewAnimator::getOutAnimation() const
	{
		return callObjectMethod(
			"getOutAnimation",
			"()Landroid/animation/ObjectAnimator;"
		);
	}
	inline android::view::View AdapterViewAnimator::getSelectedView() const
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	inline jboolean AdapterViewAnimator::onRemoteAdapterConnected() const
	{
		return callMethod<jboolean>(
			"onRemoteAdapterConnected",
			"()Z"
		);
	}
	inline void AdapterViewAnimator::onRemoteAdapterDisconnected() const
	{
		callMethod<void>(
			"onRemoteAdapterDisconnected",
			"()V"
		);
	}
	inline void AdapterViewAnimator::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	inline JObject AdapterViewAnimator::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	inline jboolean AdapterViewAnimator::onTouchEvent(android::view::MotionEvent arg0) const
	{
		return callMethod<jboolean>(
			"onTouchEvent",
			"(Landroid/view/MotionEvent;)Z",
			arg0.object()
		);
	}
	inline void AdapterViewAnimator::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	inline void AdapterViewAnimator::setAnimateFirstView(jboolean arg0) const
	{
		callMethod<void>(
			"setAnimateFirstView",
			"(Z)V",
			arg0
		);
	}
	inline void AdapterViewAnimator::setDisplayedChild(jint arg0) const
	{
		callMethod<void>(
			"setDisplayedChild",
			"(I)V",
			arg0
		);
	}
	inline void AdapterViewAnimator::setInAnimation(android::animation::ObjectAnimator arg0) const
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/animation/ObjectAnimator;)V",
			arg0.object()
		);
	}
	inline void AdapterViewAnimator::setInAnimation(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setInAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AdapterViewAnimator::setOutAnimation(android::animation::ObjectAnimator arg0) const
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/animation/ObjectAnimator;)V",
			arg0.object()
		);
	}
	inline void AdapterViewAnimator::setOutAnimation(android::content::Context arg0, jint arg1) const
	{
		callMethod<void>(
			"setOutAnimation",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AdapterViewAnimator::setRemoteViewsAdapter(android::content::Intent arg0) const
	{
		callMethod<void>(
			"setRemoteViewsAdapter",
			"(Landroid/content/Intent;)V",
			arg0.object()
		);
	}
	inline void AdapterViewAnimator::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	inline void AdapterViewAnimator::showNext() const
	{
		callMethod<void>(
			"showNext",
			"()V"
		);
	}
	inline void AdapterViewAnimator::showPrevious() const
	{
		callMethod<void>(
			"showPrevious",
			"()V"
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./AdapterView.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
