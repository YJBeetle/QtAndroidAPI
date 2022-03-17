#pragma once

#include "../content/Context.def.hpp"
#include "../view/View.def.hpp"
#include "../view/ViewGroup_LayoutParams.def.hpp"
#include "../view/ViewStructure.def.hpp"
#include "../view/autofill/AutofillValue.def.hpp"
#include "./LinearLayout_LayoutParams.def.hpp"
#include "./RadioGroup_LayoutParams.def.hpp"
#include "../../JString.hpp"
#include "./RadioGroup.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline RadioGroup::RadioGroup(android::content::Context arg0)
		: android::widget::LinearLayout(
			"android.widget.RadioGroup",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline RadioGroup::RadioGroup(android::content::Context arg0, JObject arg1)
		: android::widget::LinearLayout(
			"android.widget.RadioGroup",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void RadioGroup::addView(android::view::View arg0, jint arg1, android::view::ViewGroup_LayoutParams arg2) const
	{
		callMethod<void>(
			"addView",
			"(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void RadioGroup::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	inline void RadioGroup::check(jint arg0) const
	{
		callMethod<void>(
			"check",
			"(I)V",
			arg0
		);
	}
	inline void RadioGroup::clearCheck() const
	{
		callMethod<void>(
			"clearCheck",
			"()V"
		);
	}
	inline android::widget::RadioGroup_LayoutParams RadioGroup::generateLayoutParams(JObject arg0) const
	{
		return callObjectMethod(
			"generateLayoutParams",
			"(Landroid/util/AttributeSet;)Landroid/widget/RadioGroup$LayoutParams;",
			arg0.object()
		);
	}
	inline JString RadioGroup::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint RadioGroup::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	inline android::view::autofill::AutofillValue RadioGroup::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	inline jint RadioGroup::getCheckedRadioButtonId() const
	{
		return callMethod<jint>(
			"getCheckedRadioButtonId",
			"()I"
		);
	}
	inline void RadioGroup::onProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"onProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void RadioGroup::setOnCheckedChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnCheckedChangeListener",
			"(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V",
			arg0.object()
		);
	}
	inline void RadioGroup::setOnHierarchyChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnHierarchyChangeListener",
			"(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V",
			arg0.object()
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./LinearLayout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
