#include "../content/Context.hpp"
#include "../util/SparseArray.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup_LayoutParams.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "../../JString.hpp"
#include "./AbsSpinner.hpp"

namespace android::widget
{
	// Fields
	
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
	void AbsSpinner::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	JString AbsSpinner::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	JObject AbsSpinner::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/SpinnerAdapter;"
		);
	}
	jint AbsSpinner::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue AbsSpinner::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint AbsSpinner::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	android::view::View AbsSpinner::getSelectedView() const
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	void AbsSpinner::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	JObject AbsSpinner::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	jint AbsSpinner::pointToPosition(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"pointToPosition",
			"(II)I",
			arg0,
			arg1
		);
	}
	void AbsSpinner::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	void AbsSpinner::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	void AbsSpinner::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	void AbsSpinner::setSelection(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setSelection",
			"(IZ)V",
			arg0,
			arg1
		);
	}
} // namespace android::widget

