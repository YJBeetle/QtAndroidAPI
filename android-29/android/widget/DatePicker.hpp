#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../util/SparseArray.def.hpp"
#include "../view/ViewStructure.def.hpp"
#include "../view/autofill/AutofillValue.def.hpp"
#include "./CalendarView.def.hpp"
#include "../../JString.hpp"
#include "./DatePicker.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline DatePicker::DatePicker(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.DatePicker",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline DatePicker::DatePicker(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.DatePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline DatePicker::DatePicker(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.DatePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline DatePicker::DatePicker(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.DatePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void DatePicker::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	inline void DatePicker::dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline JString DatePicker::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint DatePicker::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	inline android::view::autofill::AutofillValue DatePicker::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	inline android::widget::CalendarView DatePicker::getCalendarView() const
	{
		return callObjectMethod(
			"getCalendarView",
			"()Landroid/widget/CalendarView;"
		);
	}
	inline jboolean DatePicker::getCalendarViewShown() const
	{
		return callMethod<jboolean>(
			"getCalendarViewShown",
			"()Z"
		);
	}
	inline jint DatePicker::getDayOfMonth() const
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	inline jint DatePicker::getFirstDayOfWeek() const
	{
		return callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	inline jlong DatePicker::getMaxDate() const
	{
		return callMethod<jlong>(
			"getMaxDate",
			"()J"
		);
	}
	inline jlong DatePicker::getMinDate() const
	{
		return callMethod<jlong>(
			"getMinDate",
			"()J"
		);
	}
	inline jint DatePicker::getMonth() const
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	inline jboolean DatePicker::getSpinnersShown() const
	{
		return callMethod<jboolean>(
			"getSpinnersShown",
			"()Z"
		);
	}
	inline jint DatePicker::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	inline void DatePicker::init(jint arg0, jint arg1, jint arg2, JObject arg3) const
	{
		callMethod<void>(
			"init",
			"(IIILandroid/widget/DatePicker$OnDateChangedListener;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline jboolean DatePicker::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline void DatePicker::setCalendarViewShown(jboolean arg0) const
	{
		callMethod<void>(
			"setCalendarViewShown",
			"(Z)V",
			arg0
		);
	}
	inline void DatePicker::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void DatePicker::setFirstDayOfWeek(jint arg0) const
	{
		callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	inline void DatePicker::setMaxDate(jlong arg0) const
	{
		callMethod<void>(
			"setMaxDate",
			"(J)V",
			arg0
		);
	}
	inline void DatePicker::setMinDate(jlong arg0) const
	{
		callMethod<void>(
			"setMinDate",
			"(J)V",
			arg0
		);
	}
	inline void DatePicker::setOnDateChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDateChangedListener",
			"(Landroid/widget/DatePicker$OnDateChangedListener;)V",
			arg0.object()
		);
	}
	inline void DatePicker::setSpinnersShown(jboolean arg0) const
	{
		callMethod<void>(
			"setSpinnersShown",
			"(Z)V",
			arg0
		);
	}
	inline void DatePicker::updateDate(jint arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"updateDate",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
