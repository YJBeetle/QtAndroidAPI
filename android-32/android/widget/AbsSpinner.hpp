#pragma once

#include "../content/Context.def.hpp"
#include "../util/SparseArray.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/autofill/AutofillValue.def.hpp"
#include "../../JString.hpp"
#include "./AbsSpinner.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline AbsSpinner::AbsSpinner(android::content::Context arg0)
		: android::widget::AdapterView(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline AbsSpinner::AbsSpinner(android::content::Context arg0, JObject arg1)
		: android::widget::AdapterView(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline AbsSpinner::AbsSpinner(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::AdapterView(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline AbsSpinner::AbsSpinner(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::AdapterView(
			"android.widget.AbsSpinner",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void AbsSpinner::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	inline JString AbsSpinner::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject AbsSpinner::getAdapter() const
	{
		return callObjectMethod(
			"getAdapter",
			"()Landroid/widget/SpinnerAdapter;"
		);
	}
	inline jint AbsSpinner::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	inline android::view::autofill::AutofillValue AbsSpinner::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	inline jint AbsSpinner::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline android::view::View AbsSpinner::getSelectedView() const
	{
		return callObjectMethod(
			"getSelectedView",
			"()Landroid/view/View;"
		);
	}
	inline void AbsSpinner::onRestoreInstanceState(JObject arg0) const
	{
		callMethod<void>(
			"onRestoreInstanceState",
			"(Landroid/os/Parcelable;)V",
			arg0.object()
		);
	}
	inline JObject AbsSpinner::onSaveInstanceState() const
	{
		return callObjectMethod(
			"onSaveInstanceState",
			"()Landroid/os/Parcelable;"
		);
	}
	inline jint AbsSpinner::pointToPosition(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"pointToPosition",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline void AbsSpinner::requestLayout() const
	{
		callMethod<void>(
			"requestLayout",
			"()V"
		);
	}
	inline void AbsSpinner::setAdapter(JObject arg0) const
	{
		callMethod<void>(
			"setAdapter",
			"(Landroid/widget/Adapter;)V",
			arg0.object()
		);
	}
	inline void AbsSpinner::setSelection(jint arg0) const
	{
		callMethod<void>(
			"setSelection",
			"(I)V",
			arg0
		);
	}
	inline void AbsSpinner::setSelection(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setSelection",
			"(IZ)V",
			arg0,
			arg1
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
