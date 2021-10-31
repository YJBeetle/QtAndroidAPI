#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/accessibility/AccessibilityNodeInfo.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "./RadioGroup_LayoutParams.hpp"
#include "./RadioGroup.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	RadioGroup::RadioGroup(QJniObject obj) : android::widget::LinearLayout(obj) {}
	
	// Constructors
	RadioGroup::RadioGroup(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.RadioGroup",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	RadioGroup::RadioGroup(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::LinearLayout(
			"android.widget.RadioGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void RadioGroup::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void RadioGroup::autofill(android::view::autofill::AutofillValue arg0)
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void RadioGroup::check(jint arg0)
	{
		callMethod<void>(
			"check",
			"(I)V",
			arg0
		);
	}
	void RadioGroup::clearCheck()
	{
		callMethod<void>(
			"clearCheck",
			"()V"
		);
	}
	android::widget::RadioGroup_LayoutParams RadioGroup::generateLayoutParams(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/RadioGroup$LayoutParams;",
			arg0.object()
		);
	}
	jstring RadioGroup::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint RadioGroup::getAutofillType()
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue RadioGroup::getAutofillValue()
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint RadioGroup::getCheckedRadioButtonId()
	{
		return callMethod<jint>(
			"getCheckedRadioButtonId",
			"()I"
		);
	}
	void RadioGroup::onInitializeAccessibilityNodeInfo(android::view::accessibility::AccessibilityNodeInfo arg0)
	{
		callMethod<void>(
			"onInitializeAccessibilityNodeInfo",
			"(Landroid/view/accessibility/AccessibilityNodeInfo;)V",
			arg0.object()
		);
	}
	void RadioGroup::setOnCheckedChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnCheckedChangeListener",
			"(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V",
			arg0.object()
		);
	}
	void RadioGroup::setOnHierarchyChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::widget

