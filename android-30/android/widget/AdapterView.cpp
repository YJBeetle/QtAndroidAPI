#include "../content/Context.hpp"
#include "../util/SparseArray.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/ViewStructure.hpp"
#include "./AdapterView.hpp"

namespace android::widget
{
	// Fields
	jint AdapterView::INVALID_POSITION()
	{
		return getStaticField<jint>(
			"android.widget.AdapterView",
			"INVALID_POSITION"
		);
	}
	jlong AdapterView::INVALID_ROW_ID()
	{
		return getStaticField<jlong>(
			"android.widget.AdapterView",
			"INVALID_ROW_ID"
		);
	}
	jint AdapterView::ITEM_VIEW_TYPE_HEADER_OR_FOOTER()
	{
		return getStaticField<jint>(
			"android.widget.AdapterView",
			"ITEM_VIEW_TYPE_HEADER_OR_FOOTER"
		);
	}
	jint AdapterView::ITEM_VIEW_TYPE_IGNORE()
	{
		return getStaticField<jint>(
			"android.widget.AdapterView",
			"ITEM_VIEW_TYPE_IGNORE"
		);
	}
	
	// QAndroidJniObject forward
	AdapterView::AdapterView(QAndroidJniObject obj) : android::view::ViewGroup(obj) {}
	
	// Constructors
	AdapterView::AdapterView(android::content::Context arg0)
		: android::view::ViewGroup(
			"android.widget.AdapterView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AdapterView::AdapterView(android::content::Context arg0, JObject arg1)
		: android::view::ViewGroup(
			"android.widget.AdapterView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AdapterView::AdapterView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::view::ViewGroup(
			"android.widget.AdapterView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	AdapterView::AdapterView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::view::ViewGroup(
			"android.widget.AdapterView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void AdapterView::addView(android::view::View arg0)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AdapterView::addView(android::view::View arg0, android::view::ViewGroup_LayoutParams arg1)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void AdapterView::addView(android::view::View arg0, jint arg1)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;I)V",
			arg0.object(),
			arg1
		);
	}
	void AdapterView::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jstring AdapterView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	JObject AdapterView::getAdapter()
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/Adapter;"
		);
	}
	jint AdapterView::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	android::view::View AdapterView::getEmptyView()
	{
		return callObjectMethod(
			"getEmptyView",
			"()Landroid/view/View;"
		);
	}
	jint AdapterView::getFirstVisiblePosition()
	{
		return callMethod<jint>(
			"getFirstVisiblePosition",
			"()I"
		);
	}
	jobject AdapterView::getItemAtPosition(jint arg0)
	{
		return callObjectMethod(
			"getItemAtPosition",
			"(I)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong AdapterView::getItemIdAtPosition(jint arg0)
	{
		return callMethod<jlong>(
			"getItemIdAtPosition",
			"(I)J",
			arg0
		);
	}
	jint AdapterView::getLastVisiblePosition()
	{
		return callMethod<jint>(
			"getLastVisiblePosition",
			"()I"
		);
	}
	JObject AdapterView::getOnItemClickListener()
	{
		return callObjectMethod(
			"getOnItemClickListener",
			"()Landroid/widget/AdapterView$OnItemClickListener;"
		);
	}
	JObject AdapterView::getOnItemLongClickListener()
	{
		return callObjectMethod(
			"getOnItemLongClickListener",
			"()Landroid/widget/AdapterView$OnItemLongClickListener;"
		);
	}
	JObject AdapterView::getOnItemSelectedListener()
	{
		return callObjectMethod(
			"getOnItemSelectedListener",
			"()Landroid/widget/AdapterView$OnItemSelectedListener;"
		);
	}
	jint AdapterView::getPositionForView(android::view::View arg0)
	{
		return callMethod<jint>(
			"getPositionForView",
			"(Landroid/view/View;)I",
			arg0.object()
		);
	}
	jobject AdapterView::getSelectedItem()
	{
		return callObjectMethod(
			"getSelectedItem",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jlong AdapterView::getSelectedItemId()
	{
		return callMethod<jlong>(
			"getSelectedItemId",
			"()J"
		);
	}
	jint AdapterView::getSelectedItemPosition()
	{
		return callMethod<jint>(
			"getSelectedItemPosition",
			"()I"
		);
	}
	android::view::View AdapterView::getSelectedView()
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	void AdapterView::onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1)
	{
		callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean AdapterView::performItemClick(android::view::View arg0, jint arg1, jlong arg2)
	{
		return callMethod<jboolean>(
			"performItemClick",
			"(Landroid/view/View;IJ)Z",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void AdapterView::removeAllViews()
	{
		callMethod<void>(
			"removeAllViews",
			"()V"
		);
	}
	void AdapterView::removeView(android::view::View arg0)
	{
		callMethod<void>(
			"removeView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AdapterView::removeViewAt(jint arg0)
	{
		callMethod<void>(
			"removeViewAt",
			"(I)V",
			arg0
		);
	}
	void AdapterView::setAdapter(JObject arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void AdapterView::setEmptyView(android::view::View arg0)
	{
		callMethod<void>(
			"setEmptyView",
			"(Landroid/view/View;)V",
			arg0.object()
		);
	}
	void AdapterView::setFocusable(jint arg0)
	{
		callMethod<void>(
			"setFocusable",
			"(I)V",
			arg0
		);
	}
	void AdapterView::setFocusableInTouchMode(jboolean arg0)
	{
		callMethod<void>(
			"setFocusableInTouchMode",
			"(Z)V",
			arg0
		);
	}
	void AdapterView::setOnClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)V",
			arg0.object()
		);
	}
	void AdapterView::setOnItemClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnItemClickListener",
			"(Landroid/widget/AdapterView$OnItemClickListener;)V",
			arg0.object()
		);
	}
	void AdapterView::setOnItemLongClickListener(JObject arg0)
	{
		callMethod<void>(
			"setOnItemLongClickListener",
			"(Landroid/widget/AdapterView$OnItemLongClickListener;)V",
			arg0.object()
		);
	}
	void AdapterView::setOnItemSelectedListener(JObject arg0)
	{
		callMethod<void>(
			"setOnItemSelectedListener",
			"(Landroid/widget/AdapterView$OnItemSelectedListener;)V",
			arg0.object()
		);
	}
	void AdapterView::setSelection(jint arg0)
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

