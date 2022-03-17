#pragma once

#include "../content/Context.def.hpp"
#include "../view/ViewStructure.def.hpp"
#include "../view/autofill/AutofillValue.def.hpp"
#include "../../java/lang/Boolean.def.hpp"
#include "../../JString.hpp"
#include "../../java/lang/Integer.def.hpp"
#include "./TimePicker.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline TimePicker::TimePicker(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.TimePicker",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline TimePicker::TimePicker(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.TimePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline TimePicker::TimePicker(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.TimePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline TimePicker::TimePicker(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.TimePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline void TimePicker::autofill(android::view::autofill::AutofillValue arg0) const
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	inline void TimePicker::dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const
	{
		callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	inline JString TimePicker::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint TimePicker::getAutofillType() const
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	inline android::view::autofill::AutofillValue TimePicker::getAutofillValue() const
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	inline jint TimePicker::getBaseline() const
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	inline java::lang::Integer TimePicker::getCurrentHour() const
	{
		return callObjectMethod(
			"getCurrentHour",
			"()Ljava/lang/Integer;"
		);
	}
	inline java::lang::Integer TimePicker::getCurrentMinute() const
	{
		return callObjectMethod(
			"getCurrentMinute",
			"()Ljava/lang/Integer;"
		);
	}
	inline jint TimePicker::getHour() const
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	inline jint TimePicker::getMinute() const
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	inline jboolean TimePicker::is24HourView() const
	{
		return callMethod<jboolean>(
			"is24HourView",
			"()Z"
		);
	}
	inline jboolean TimePicker::isEnabled() const
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	inline void TimePicker::setCurrentHour(java::lang::Integer arg0) const
	{
		callMethod<void>(
			"setCurrentHour",
			"(Ljava/lang/Integer;)V",
			arg0.object()
		);
	}
	inline void TimePicker::setCurrentMinute(java::lang::Integer arg0) const
	{
		callMethod<void>(
			"setCurrentMinute",
			"(Ljava/lang/Integer;)V",
			arg0.object()
		);
	}
	inline void TimePicker::setEnabled(jboolean arg0) const
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	inline void TimePicker::setHour(jint arg0) const
	{
		callMethod<void>(
			"setHour",
			"(I)V",
			arg0
		);
	}
	inline void TimePicker::setIs24HourView(java::lang::Boolean arg0) const
	{
		callMethod<void>(
			"setIs24HourView",
			"(Ljava/lang/Boolean;)V",
			arg0.object()
		);
	}
	inline void TimePicker::setMinute(jint arg0) const
	{
		callMethod<void>(
			"setMinute",
			"(I)V",
			arg0
		);
	}
	inline void TimePicker::setOnTimeChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnTimeChangedListener",
			"(Landroid/widget/TimePicker$OnTimeChangedListener;)V",
			arg0.object()
		);
	}
	inline jboolean TimePicker::validateInput() const
	{
		return callMethod<jboolean>(
			"validateInput",
			"()Z"
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
