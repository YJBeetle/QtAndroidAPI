#pragma once

#include "./FrameLayout.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class Configuration;
}
namespace android::util
{
	class SparseArray;
}
namespace android::view
{
	class ViewStructure;
}
namespace android::view::autofill
{
	class AutofillValue;
}
namespace android::widget
{
	class CalendarView;
}
class JString;

namespace android::widget
{
	class DatePicker : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DatePicker(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		DatePicker(QAndroidJniObject obj) : android::widget::FrameLayout(obj) {}
		
		// Constructors
		DatePicker(android::content::Context arg0);
		DatePicker(android::content::Context arg0, JObject arg1);
		DatePicker(android::content::Context arg0, JObject arg1, jint arg2);
		DatePicker(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void autofill(android::view::autofill::AutofillValue arg0) const;
		void dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1) const;
		JString getAccessibilityClassName() const;
		jint getAutofillType() const;
		android::view::autofill::AutofillValue getAutofillValue() const;
		android::widget::CalendarView getCalendarView() const;
		jboolean getCalendarViewShown() const;
		jint getDayOfMonth() const;
		jint getFirstDayOfWeek() const;
		jlong getMaxDate() const;
		jlong getMinDate() const;
		jint getMonth() const;
		jboolean getSpinnersShown() const;
		jint getYear() const;
		void init(jint arg0, jint arg1, jint arg2, JObject arg3) const;
		jboolean isEnabled() const;
		void setCalendarViewShown(jboolean arg0) const;
		void setEnabled(jboolean arg0) const;
		void setFirstDayOfWeek(jint arg0) const;
		void setMaxDate(jlong arg0) const;
		void setMinDate(jlong arg0) const;
		void setOnDateChangedListener(JObject arg0) const;
		void setSpinnersShown(jboolean arg0) const;
		void updateDate(jint arg0, jint arg1, jint arg2) const;
	};
} // namespace android::widget

