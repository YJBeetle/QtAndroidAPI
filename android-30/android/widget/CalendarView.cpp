#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./CalendarView.hpp"

namespace android::widget
{
	// Fields
	
	// QJniObject forward
	CalendarView::CalendarView(QJniObject obj) : android::widget::FrameLayout(obj) {}
	
	// Constructors
	CalendarView::CalendarView(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	CalendarView::CalendarView(android::content::Context arg0, __JniBaseClass arg1)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	CalendarView::CalendarView(android::content::Context arg0, __JniBaseClass arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	CalendarView::CalendarView(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	jstring CalendarView::getAccessibilityClassName()
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jlong CalendarView::getDate()
	{
		return callMethod<jlong>(
			"getDate",
			"()J"
		);
	}
	jint CalendarView::getDateTextAppearance()
	{
		return callMethod<jint>(
			"getDateTextAppearance",
			"()I"
		);
	}
	jint CalendarView::getFirstDayOfWeek()
	{
		return callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	jint CalendarView::getFocusedMonthDateColor()
	{
		return callMethod<jint>(
			"getFocusedMonthDateColor",
			"()I"
		);
	}
	jlong CalendarView::getMaxDate()
	{
		return callMethod<jlong>(
			"getMaxDate",
			"()J"
		);
	}
	jlong CalendarView::getMinDate()
	{
		return callMethod<jlong>(
			"getMinDate",
			"()J"
		);
	}
	android::graphics::drawable::Drawable CalendarView::getSelectedDateVerticalBar()
	{
		return callObjectMethod(
			"getSelectedDateVerticalBar",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint CalendarView::getSelectedWeekBackgroundColor()
	{
		return callMethod<jint>(
			"getSelectedWeekBackgroundColor",
			"()I"
		);
	}
	jboolean CalendarView::getShowWeekNumber()
	{
		return callMethod<jboolean>(
			"getShowWeekNumber",
			"()Z"
		);
	}
	jint CalendarView::getShownWeekCount()
	{
		return callMethod<jint>(
			"getShownWeekCount",
			"()I"
		);
	}
	jint CalendarView::getUnfocusedMonthDateColor()
	{
		return callMethod<jint>(
			"getUnfocusedMonthDateColor",
			"()I"
		);
	}
	jint CalendarView::getWeekDayTextAppearance()
	{
		return callMethod<jint>(
			"getWeekDayTextAppearance",
			"()I"
		);
	}
	jint CalendarView::getWeekNumberColor()
	{
		return callMethod<jint>(
			"getWeekNumberColor",
			"()I"
		);
	}
	jint CalendarView::getWeekSeparatorLineColor()
	{
		return callMethod<jint>(
			"getWeekSeparatorLineColor",
			"()I"
		);
	}
	void CalendarView::setDate(jlong arg0)
	{
		callMethod<void>(
			"setDate",
			"(J)V",
			arg0
		);
	}
	void CalendarView::setDate(jlong arg0, jboolean arg1, jboolean arg2)
	{
		callMethod<void>(
			"setDate",
			"(JZZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void CalendarView::setDateTextAppearance(jint arg0)
	{
		callMethod<void>(
			"setDateTextAppearance",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setFirstDayOfWeek(jint arg0)
	{
		callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setFocusedMonthDateColor(jint arg0)
	{
		callMethod<void>(
			"setFocusedMonthDateColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setMaxDate(jlong arg0)
	{
		callMethod<void>(
			"setMaxDate",
			"(J)V",
			arg0
		);
	}
	void CalendarView::setMinDate(jlong arg0)
	{
		callMethod<void>(
			"setMinDate",
			"(J)V",
			arg0
		);
	}
	void CalendarView::setOnDateChangeListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setOnDateChangeListener",
			"(Landroid/widget/CalendarView$OnDateChangeListener;)V",
			arg0.object()
		);
	}
	void CalendarView::setSelectedDateVerticalBar(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"setSelectedDateVerticalBar",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void CalendarView::setSelectedDateVerticalBar(jint arg0)
	{
		callMethod<void>(
			"setSelectedDateVerticalBar",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setSelectedWeekBackgroundColor(jint arg0)
	{
		callMethod<void>(
			"setSelectedWeekBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setShowWeekNumber(jboolean arg0)
	{
		callMethod<void>(
			"setShowWeekNumber",
			"(Z)V",
			arg0
		);
	}
	void CalendarView::setShownWeekCount(jint arg0)
	{
		callMethod<void>(
			"setShownWeekCount",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setUnfocusedMonthDateColor(jint arg0)
	{
		callMethod<void>(
			"setUnfocusedMonthDateColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setWeekDayTextAppearance(jint arg0)
	{
		callMethod<void>(
			"setWeekDayTextAppearance",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setWeekNumberColor(jint arg0)
	{
		callMethod<void>(
			"setWeekNumberColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setWeekSeparatorLineColor(jint arg0)
	{
		callMethod<void>(
			"setWeekSeparatorLineColor",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

