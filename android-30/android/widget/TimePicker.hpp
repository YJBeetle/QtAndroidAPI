#pragma once

#include "./FrameLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::view
{
	class ViewStructure;
}
namespace android::view::autofill
{
	class AutofillValue;
}
namespace java::lang
{
	class Boolean;
}
class JString;
namespace java::lang
{
	class Integer;
}

namespace android::widget
{
	class TimePicker : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TimePicker(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		TimePicker(QJniObject obj);
		
		// Constructors
		TimePicker(android::content::Context arg0);
		TimePicker(android::content::Context arg0, JObject arg1);
		TimePicker(android::content::Context arg0, JObject arg1, jint arg2);
		TimePicker(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void autofill(android::view::autofill::AutofillValue arg0) const;
		void dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const;
		JString getAccessibilityClassName() const;
		jint getAutofillType() const;
		android::view::autofill::AutofillValue getAutofillValue() const;
		jint getBaseline() const;
		java::lang::Integer getCurrentHour() const;
		java::lang::Integer getCurrentMinute() const;
		jint getHour() const;
		jint getMinute() const;
		jboolean is24HourView() const;
		jboolean isEnabled() const;
		void setCurrentHour(java::lang::Integer arg0) const;
		void setCurrentMinute(java::lang::Integer arg0) const;
		void setEnabled(jboolean arg0) const;
		void setHour(jint arg0) const;
		void setIs24HourView(java::lang::Boolean arg0) const;
		void setMinute(jint arg0) const;
		void setOnTimeChangedListener(JObject arg0) const;
		jboolean validateInput() const;
	};
} // namespace android::widget

