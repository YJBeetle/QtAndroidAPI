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
		JString getAccessibilityClassName() const;
		jlong getDate() const;
		jint getDateTextAppearance() const;
		jint getFirstDayOfWeek() const;
		jint getFocusedMonthDateColor() const;
		jlong getMaxDate() const;
		jlong getMinDate() const;
		android::graphics::drawable::Drawable getSelectedDateVerticalBar() const;
		jint getSelectedWeekBackgroundColor() const;
		jboolean getShowWeekNumber() const;
		jint getShownWeekCount() const;
		jint getUnfocusedMonthDateColor() const;
		jint getWeekDayTextAppearance() const;
		jint getWeekNumberColor() const;
		jint getWeekSeparatorLineColor() const;
		void setDate(jlong arg0) const;
		void setDate(jlong arg0, jboolean arg1, jboolean arg2) const;
		void setDateTextAppearance(jint arg0) const;
		void setFirstDayOfWeek(jint arg0) const;
		void setFocusedMonthDateColor(jint arg0) const;
		void setMaxDate(jlong arg0) const;
		void setMinDate(jlong arg0) const;
		void setOnDateChangeListener(JObject arg0) const;
		void setSelectedDateVerticalBar(android::graphics::drawable::Drawable arg0) const;
		void setSelectedDateVerticalBar(jint arg0) const;
		void setSelectedWeekBackgroundColor(jint arg0) const;
		void setShowWeekNumber(jboolean arg0) const;
		void setShownWeekCount(jint arg0) const;
		void setUnfocusedMonthDateColor(jint arg0) const;
		void setWeekDayTextAppearance(jint arg0) const;
		void setWeekNumberColor(jint arg0) const;
		void setWeekSeparatorLineColor(jint arg0) const;
	};
} // namespace android::widget

