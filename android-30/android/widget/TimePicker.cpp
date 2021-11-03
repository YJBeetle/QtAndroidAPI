#include "../content/Context.hpp"
#include "../view/ViewStructure.hpp"
#include "../view/autofill/AutofillValue.hpp"
#include "../../java/lang/Boolean.hpp"
#include "../../JString.hpp"
#include "../../java/lang/Integer.hpp"
#include "./TimePicker.hpp"

namespace android::widget
{
	// Fields
	
	// QAndroidJniObject forward
	TimePicker::TimePicker(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	TimePicker::TimePicker(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.TimePicker",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	TimePicker::TimePicker(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.TimePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	TimePicker::TimePicker(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.TimePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	TimePicker::TimePicker(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.TimePicker",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	void TimePicker::autofill(android::view::autofill::AutofillValue arg0)
	{
		callMethod<void>(
			"autofill",
			"(Landroid/view/autofill/AutofillValue;)V",
			arg0.object()
		);
	}
	void TimePicker::dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1)
	{
		callMethod<void>(
			"dispatchProvideAutofillStructure",
			"(Landroid/view/ViewStructure;I)V",
			arg0.object(),
			arg1
		);
	}
	JString TimePicker::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint TimePicker::getAutofillType()
	{
		return callMethod<jint>(
			"getAutofillType",
			"()I"
		);
	}
	android::view::autofill::AutofillValue TimePicker::getAutofillValue()
	{
		return callObjectMethod(
			"getAutofillValue",
			"()Landroid/view/autofill/AutofillValue;"
		);
	}
	jint TimePicker::getBaseline()
	{
		return callMethod<jint>(
			"getBaseline",
			"()I"
		);
	}
	java::lang::Integer TimePicker::getCurrentHour()
	{
		return callObjectMethod(
			"getCurrentHour",
			"()Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TimePicker::getCurrentMinute()
	{
		return callObjectMethod(
			"getCurrentMinute",
			"()Ljava/lang/Integer;"
		);
	}
	jint TimePicker::getHour()
	{
		return callMethod<jint>(
			"getHour",
			"()I"
		);
	}
	jint TimePicker::getMinute()
	{
		return callMethod<jint>(
			"getMinute",
			"()I"
		);
	}
	jboolean TimePicker::is24HourView()
	{
		return callMethod<jboolean>(
			"is24HourView",
			"()Z"
		);
	}
	jboolean TimePicker::isEnabled()
	{
		return callMethod<jboolean>(
			"isEnabled",
			"()Z"
		);
	}
	void TimePicker::setCurrentHour(java::lang::Integer arg0)
	{
		callMethod<void>(
			"setCurrentHour",
			"(Ljava/lang/Integer;)V",
			arg0.object()
		);
	}
	void TimePicker::setCurrentMinute(java::lang::Integer arg0)
	{
		callMethod<void>(
			"setCurrentMinute",
			"(Ljava/lang/Integer;)V",
			arg0.object()
		);
	}
	void TimePicker::setEnabled(jboolean arg0)
	{
		callMethod<void>(
			"setEnabled",
			"(Z)V",
			arg0
		);
	}
	void TimePicker::setHour(jint arg0)
	{
		callMethod<void>(
			"setHour",
			"(I)V",
			arg0
		);
	}
	void TimePicker::setIs24HourView(java::lang::Boolean arg0)
	{
		callMethod<void>(
			"setIs24HourView",
			"(Ljava/lang/Boolean;)V",
			arg0.object()
		);
	}
	void TimePicker::setMinute(jint arg0)
	{
		callMethod<void>(
			"setMinute",
			"(I)V",
			arg0
		);
	}
	void TimePicker::setOnTimeChangedListener(JObject arg0)
	{
		callMethod<void>(
			"setOnTimeChangedListener",
			"(Landroid/widget/TimePicker$OnTimeChangedListener;)V",
			arg0.object()
		);
	}
	jboolean TimePicker::validateInput()
	{
		return callMethod<jboolean>(
			"validateInput",
			"()Z"
		);
	}
} // namespace android::widget

