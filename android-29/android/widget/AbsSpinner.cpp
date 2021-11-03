#include "../content/Context.hpp"
#include "../util/SparseArray.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "./AbsSpinner.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	AbsSpinner::AbsSpinner(QAndroidJniObject obj) : android::widget::AdapterView(obj) {}
	
	// Constructors
	AbsSpinner::AbsSpinner(android::content::Context arg0)
		: android::widget::AdapterView(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	AbsSpinner::AbsSpinner(android::content::Context arg0, JObject arg1)
		: android::widget::AdapterView(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	AbsSpinner::AbsSpinner(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AdapterView(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	AbsSpinner::AbsSpinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AdapterView(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void AbsSpinner::autofill(android::view::autofill::AutofillValue arg0)
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	jstring AbsSpinner::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	JObject AbsSpinner::getAdapter()
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/SpinnerAdapter;"
		);
	}
	jint AbsSpinner::getAutofillType()
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue AbsSpinner::getAutofillValue()
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint AbsSpinner::getCount()
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	android::view::View AbsSpinner::getSelectedView()
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	void AbsSpinner::onRestoreInstanceState(JObject arg0)
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	JObject AbsSpinner::onSaveInstanceState()
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jint AbsSpinner::pointToPosition(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"pointToPosition",
			"(II)I",
			arg0,
			arg1
		);
	}
	void AbsSpinner::requestLayout()
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void AbsSpinner::setAdapter(JObject arg0)
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void AbsSpinner::setSelection(jint arg0)
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void AbsSpinner::setSelection(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"setSelection",
			"(IZ)V",
			arg0,
			arg1
		);
	}
} // namespace android::widget

