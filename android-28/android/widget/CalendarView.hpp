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
namespace android::graphics::drawable
{
	class Drawable;
}
class JString;

namespace android::widget
{
	class CalendarView : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CalendarView(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		CalendarView(QJniObject obj);
		
		// Constructors
		CalendarView(android::content::Context arg0);
		CalendarView(android::content::Context arg0, JObject arg1);
		CalendarView(android::content::Context arg0, JObject arg1, jint arg2);
		CalendarView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getAccessibilityClassName();
		jlong getDate();
		jint getDateTextAppearance();
		jint getFirstDayOfWeek();
		jint getFocusedMonthDateColor();
		jlong getMaxDate();
		jlong getMinDate();
		android::graphics::drawable::Drawable getSelectedDateVerticalBar();
		jint getSelectedWeekBackgroundColor();
		jboolean getShowWeekNumber();
		jint getShownWeekCount();
		jint getUnfocusedMonthDateColor();
		jint getWeekDayTextAppearance();
		jint getWeekNumberColor();
		jint getWeekSeparatorLineColor();
		void setDate(jlong arg0);
		void setDate(jlong arg0, jboolean arg1, jboolean arg2);
		void setDateTextAppearance(jint arg0);
		void setFirstDayOfWeek(jint arg0);
		void setFocusedMonthDateColor(jint arg0);
		void setMaxDate(jlong arg0);
		void setMinDate(jlong arg0);
		void setOnDateChangeListener(JObject arg0);
		void setSelectedDateVerticalBar(android::graphics::drawable::Drawable arg0);
		void setSelectedDateVerticalBar(jint arg0);
		void setSelectedWeekBackgroundColor(jint arg0);
		void setShowWeekNumber(jboolean arg0);
		void setShownWeekCount(jint arg0);
		void setUnfocusedMonthDateColor(jint arg0);
		void setWeekDayTextAppearance(jint arg0);
		void setWeekNumberColor(jint arg0);
		void setWeekSeparatorLineColor(jint arg0);
	};
} // namespace android::widget

