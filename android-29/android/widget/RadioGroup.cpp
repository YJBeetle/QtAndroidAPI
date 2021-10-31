#include "../content/Context.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "./LinearLayout_LayoutParams.hpp"
#include "./RadioGroup_LayoutParams.hpp"
#include "./RadioGroup.hpp"

namespace android::widget
{
	// Fields
	
	RadioGroup::RadioGroup(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RadioGroup::RadioGroup(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RadioGroup",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	RadioGroup::RadioGroup(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.RadioGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void RadioGroup::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2)
	{
		__thiz.callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void RadioGroup::autofill(android::view::autofill::AutofillValue arg0)
	{
		__thiz.callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.__jniObject().object()
		);
	}
	void RadioGroup::check(jint arg0)
	{
		__thiz.callMethod<void>(
			"check",
			"(I)V",
			arg0
		);
	}
	void RadioGroup::clearCheck()
	{
		__thiz.callMethod<void>(
			"clearCheck",
			"()V"
		);
	}
	QAndroidJniObject RadioGroup::generateLayoutParams(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/RadioGroup$LayoutParams;",
			arg0.__jniObject().object()
		);
	}
	jstring RadioGroup::getAccessibilityClassName()
	{
		return __thiz.callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint RadioGroup::getAutofillType()
	{
		return __thiz.callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	QAndroidJniObject RadioGroup::getAutofillValue()
	{
		return __thiz.callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint RadioGroup::getCheckedRadioButtonId()
	{
		return __thiz.callMethod<jint>(
			"getCheckedRadioButtonId",
			"()I"
		);
	}
	void RadioGroup::setOnCheckedChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnCheckedChangeListener",
			"(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
	void RadioGroup::setOnHierarchyChangeListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::widget

