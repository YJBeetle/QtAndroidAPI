#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
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

namespace android::widget
{
	class DatePicker : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DatePicker(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		DatePicker(QJniObject obj);
		
		// Constructors
		DatePicker(android::content::Context arg0);
		DatePicker(android::content::Context arg0, JObject arg1);
		DatePicker(android::content::Context arg0, JObject arg1, jint arg2);
		DatePicker(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void autofill(android::view::autofill::AutofillValue arg0);
		void dispatchProvideAutofillStructure(android::view::ViewStructure arg0, jint arg1);
		jstring getAccessibilityClassName();
		jint getAutofillType();
		android::view::autofill::AutofillValue getAutofillValue();
		android::widget::CalendarView getCalendarView();
		jboolean getCalendarViewShown();
		jint getDayOfMonth();
		jint getFirstDayOfWeek();
		jlong getMaxDate();
		jlong getMinDate();
		jint getMonth();
		jboolean getSpinnersShown();
		jint getYear();
		void init(jint arg0, jint arg1, jint arg2, JObject arg3);
		jboolean isEnabled();
		void setCalendarViewShown(jboolean arg0);
		void setEnabled(jboolean arg0);
		void setFirstDayOfWeek(jint arg0);
		void setMaxDate(jlong arg0);
		void setMinDate(jlong arg0);
		void setOnDateChangedListener(JObject arg0);
		void setSpinnersShown(jboolean arg0);
		void updateDate(jint arg0, jint arg1, jint arg2);
	};
} // namespace android::widget

