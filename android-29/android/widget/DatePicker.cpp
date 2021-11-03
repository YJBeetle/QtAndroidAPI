#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../util/SparseArray.hpp"
#include "../view/ViewStructure.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "./CalendarView.hpp"
#include "../../JString.hpp"
#include "./DatePicker.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	DatePicker::DatePicker(QJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	DatePicker::DatePicker(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.DatePicker",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	DatePicker::DatePicker(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.DatePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	DatePicker::DatePicker(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.DatePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	DatePicker::DatePicker(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.DatePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void DatePicker::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void DatePicker::dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	JString DatePicker::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint DatePicker::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue DatePicker::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	android::widget::CalendarView DatePicker::getCalendarView() const
	{
		return callObjectMethod(
			"getCalendarView",
			"()Landroid/widget/CalendarView;"
		);
	}
	jboolean DatePicker::getCalendarViewShown() const
	{
		return callMethod<jboolean>(
			"getCalendarViewShown",
			"()Z"
		);
	}
	jint DatePicker::getDayOfMonth() const
	{
		return callMethod<jint>(
			"getDayOfMonth",
			"()I"
		);
	}
	jint DatePicker::getFirstDayOfWeek() const
	{
		return callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	jlong DatePicker::getMaxDate() const
	{
		return callMethod<jlong>(
			"getMaxDate",
			"()J"
		);
	}
	jlong DatePicker::getMinDate() const
	{
		return callMethod<jlong>(
			"getMinDate",
			"()J"
		);
	}
	jint DatePicker::getMonth() const
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jboolean DatePicker::getSpinnersShown() const
	{
		return callMethod<jboolean>(
			"getSpinnersShown",
			"()Z"
		);
	}
	jint DatePicker::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	void DatePicker::init(jint arg0, jint arg1, jint arg2, JObject arg3) const
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
	jboolean DatePicker::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void DatePicker::setCalendarViewShown(jboolean arg0) const
	{
		callMethod<void>(
			"setCalendarViewShown",
			"(Z)V",
			arg0
		);
	}
	void DatePicker::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void DatePicker::setFirstDayOfWeek(jint arg0) const
	{
		callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	void DatePicker::setMaxDate(jlong arg0) const
	{
		callMethod<void>(
			"setMaxDate",
			"(J)V",
			arg0
		);
	}
	void DatePicker::setMinDate(jlong arg0) const
	{
		callMethod<void>(
			"setMinDate",
			"(J)V",
			arg0
		);
	}
	void DatePicker::setOnDateChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDateChangedListener",
			"(Landroid/widget/DatePicker$OnDateChangedListener;)V",
			arg0.object()
		);
	}
	void DatePicker::setSpinnersShown(jboolean arg0) const
	{
		callMethod<void>(
			"setSpinnersShown",
			"(Z)V",
			arg0
		);
	}
	void DatePicker::updateDate(jint arg0, jint arg1, jint arg2) const
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

