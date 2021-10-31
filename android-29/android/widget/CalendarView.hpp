#pragma once

#include "../../__JniBaseClass.hpp"
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
namespace android::graphics::drawable
{
	class Drawable;
}

namespace android::widget
{
	class CalendarView : public android::widget::FrameLayout
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CalendarView(const char *className, const char *sig, Ts...agv) : android::widget::FrameLayout(className, sig, std::forward<Ts>(agv)...) {}
		CalendarView(QAndroidJniObject obj);
		
		// Constructors
		CalendarView(android::content::Context arg0);
		CalendarView(android::content::Context arg0, __JniBaseClass arg1);
		CalendarView(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		CalendarView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getAccessibilityClassName();
		jlong getDate();
		jint getDateTextAppearance();
		jint getFirstDayOfWeek();
		jint getFocusedMonthDateColor();
		jlong getMaxDate();
		jlong getMinDate();
		QAndroidJniObject getSelectedDateVerticalBar();
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
		void setOnDateChangeListener(__JniBaseClass arg0);
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

