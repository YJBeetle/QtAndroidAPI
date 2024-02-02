#pragma once

#include "../content/Context.def.hpp"
#include "../util/SparseArray.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/ViewStructure.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "./AdapterView.def.hpp"

namespace android::widget
{
	// Fields
	inline jint AdapterView::INVALID_POSITION()
	{
		return getStaticField<jint>(
			"android.widget.AdapterView",
			"INVALID_POSITION"
		);
	}
	inline jlong AdapterView::INVALID_ROW_ID()
	{
		return getStaticField<jlong>(
			"android.widget.AdapterView",
			"INVALID_ROW_ID"
		);
	}
	inline jint AdapterView::ITEM_VIEW_TYPE_HEADER_OR_FOOTER()
	{
		return getStaticField<jint>(
			"android.widget.AdapterView",
			"ITEM_VIEW_TYPE_HEADER_OR_FOOTER"
		);
	}
	inline jint AdapterView::ITEM_VIEW_TYPE_IGNORE()
	{
		return getStaticField<jint>(
			"android.widget.AdapterView",
			"ITEM_VIEW_TYPE_IGNORE"
		);
	}
	
	// Constructors
	inline AdapterView::AdapterView(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.AdapterView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AdapterView::AdapterView(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.AdapterView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AdapterView::AdapterView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.AdapterView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline AdapterView::AdapterView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.AdapterView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void AdapterView::addView(android::view::View arg0) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AdapterView::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void AdapterView::addView(android::view::View arg0, jint arg1) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void AdapterView::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JString AdapterView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject AdapterView::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/Adapter;"
		);
	}
	inline jint AdapterView::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline android::view::View AdapterView::getEmptyView() const
	{
		return callObjectMethod(
			"getEmptyView",
			"()Landroid/view/View;"
		);
	}
	inline jint AdapterView::getFirstVisiblePosition() const
	{
		return callMethod<jint>(
			"getFirstVisiblePosition",
			"()I"
		);
	}
	inline JObject AdapterView::getItemAtPosition(jint arg0) const
	{
		return callObjectMethod(
			"getItemAtPosition",
			"(I)Ljava/lang/Object;",
			arg0
		);
	}
	inline jlong AdapterView::getItemIdAtPosition(jint arg0) const
	{
		return callMethod<jlong>(
			"getItemIdAtPosition",
			"(I)J",
			arg0
		);
	}
	inline jint AdapterView::getLastVisiblePosition() const
	{
		return callMethod<jint>(
			"getLastVisiblePosition",
			"()I"
		);
	}
	inline JObject AdapterView::getOnItemClickListener() const
	{
		return callObjectMethod(
			"getOnItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	inline JObject AdapterView::getOnItemLongClickListener() const
	{
		return callObjectMethod(
			"getOnItemLongClickListener",
			"()Landroid/widget/AdapterView$OnItemLongClickListener;"
		);
	}
	inline JObject AdapterView::getOnItemSelectedListener() const
	{
		return callObjectMethod(
			"getOnItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	inline jint AdapterView::getPositionForView(android::view::View arg0) const
	{
		return callMethod<jint>(
			"getPositionForView",
			"(Landroid/view/View;)I",
			arg0.object()
		);
	}
	inline JObject AdapterView::getSelectedItem() const
	{
		return callObjectMethod(
			"getSelectedItem",
			"()Ljava/lang/Object;"
		);
	}
	inline jlong AdapterView::getSelectedItemId() const
	{
		return callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	inline jint AdapterView::getSelectedItemPosition() const
	{
		return callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	inline android::view::View AdapterView::getSelectedView() const
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	inline void AdapterView::onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean AdapterView::performItemClick(android::view::View arg0, jint arg1, jlong arg2) const
	{
		return callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void AdapterView::removeAllViews() const
	{
		callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	inline void AdapterView::removeView(android::view::View arg0) const
	{
		callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AdapterView::removeViewAt(jint arg0) const
	{
		callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	inline void AdapterView::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	inline void AdapterView::setEmptyView(android::view::View arg0) const
	{
		callMethod<void>(
			"setEmptyView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	inline void AdapterView::setFocusable(jint arg0) const
	{
		callMethod<void>(
			"setFocusable",
			"(I)V",
			arg0
		);
	}
	inline void AdapterView::setFocusableInTouchMode(jboolean arg0) const
	{
		callMethod<void>(
			"setFocusableInTouchMode",
			"(Z)V",
			arg0
		);
	}
	inline void AdapterView::setOnClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	inline void AdapterView::setOnItemClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	inline void AdapterView::setOnItemLongClickListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemLongClickListener",
			"(Landroid/widget/AdapterView$OnItemLongClickListener;)V",
			arg0.object()
		);
	}
	inline void AdapterView::setOnItemSelectedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.object()
		);
	}
	inline void AdapterView::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
