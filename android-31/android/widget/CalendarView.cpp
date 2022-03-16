#include "../content/Context.hpp"
#include "../content/res/Configuration.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../../JString.hpp"
#include "./CalendarView.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	CalendarView::CalendarView(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	CalendarView::CalendarView(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	CalendarView::CalendarView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	CalendarView::CalendarView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	JString CalendarView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	jlong CalendarView::getDate() const
	{
		return callMethod<jlong>(
			"getDate",
			"()J"
		);
	}
	jint CalendarView::getDateTextAppearance() const
	{
		return callMethod<jint>(
			"getDateTextAppearance",
			"()I"
		);
	}
	jint CalendarView::getFirstDayOfWeek() const
	{
		return callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	jint CalendarView::getFocusedMonthDateColor() const
	{
		return callMethod<jint>(
			"getFocusedMonthDateColor",
			"()I"
		);
	}
	jlong CalendarView::getMaxDate() const
	{
		return callMethod<jlong>(
			"getMaxDate",
			"()J"
		);
	}
	jlong CalendarView::getMinDate() const
	{
		return callMethod<jlong>(
			"getMinDate",
			"()J"
		);
	}
	android::graphics::drawable::Drawable CalendarView::getSelectedDateVerticalBar() const
	{
		return callObjectMethod(
			"getSelectedDateVerticalBar",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint CalendarView::getSelectedWeekBackgroundColor() const
	{
		return callMethod<jint>(
			"getSelectedWeekBackgroundColor",
			"()I"
		);
	}
	jboolean CalendarView::getShowWeekNumber() const
	{
		return callMethod<jboolean>(
			"getShowWeekNumber",
			"()Z"
		);
	}
	jint CalendarView::getShownWeekCount() const
	{
		return callMethod<jint>(
			"getShownWeekCount",
			"()I"
		);
	}
	jint CalendarView::getUnfocusedMonthDateColor() const
	{
		return callMethod<jint>(
			"getUnfocusedMonthDateColor",
			"()I"
		);
	}
	jint CalendarView::getWeekDayTextAppearance() const
	{
		return callMethod<jint>(
			"getWeekDayTextAppearance",
			"()I"
		);
	}
	jint CalendarView::getWeekNumberColor() const
	{
		return callMethod<jint>(
			"getWeekNumberColor",
			"()I"
		);
	}
	jint CalendarView::getWeekSeparatorLineColor() const
	{
		return callMethod<jint>(
			"getWeekSeparatorLineColor",
			"()I"
		);
	}
	void CalendarView::setDate(jlong arg0) const
	{
		callMethod<void>(
			"setDate",
			"(J)V",
			arg0
		);
	}
	void CalendarView::setDate(jlong arg0, jboolean arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setDate",
			"(JZZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	void CalendarView::setDateTextAppearance(jint arg0) const
	{
		callMethod<void>(
			"setDateTextAppearance",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setFirstDayOfWeek(jint arg0) const
	{
		callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setFocusedMonthDateColor(jint arg0) const
	{
		callMethod<void>(
			"setFocusedMonthDateColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setMaxDate(jlong arg0) const
	{
		callMethod<void>(
			"setMaxDate",
			"(J)V",
			arg0
		);
	}
	void CalendarView::setMinDate(jlong arg0) const
	{
		callMethod<void>(
			"setMinDate",
			"(J)V",
			arg0
		);
	}
	void CalendarView::setOnDateChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDateChangeListener",
			"(Landroid/widget/CalendarView$OnDateChangeListener;)V",
			arg0.object()
		);
	}
	void CalendarView::setSelectedDateVerticalBar(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setSelectedDateVerticalBar",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	void CalendarView::setSelectedDateVerticalBar(jint arg0) const
	{
		callMethod<void>(
			"setSelectedDateVerticalBar",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setSelectedWeekBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setSelectedWeekBackgroundColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setShowWeekNumber(jboolean arg0) const
	{
		callMethod<void>(
			"setShowWeekNumber",
			"(Z)V",
			arg0
		);
	}
	void CalendarView::setShownWeekCount(jint arg0) const
	{
		callMethod<void>(
			"setShownWeekCount",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setUnfocusedMonthDateColor(jint arg0) const
	{
		callMethod<void>(
			"setUnfocusedMonthDateColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setWeekDayTextAppearance(jint arg0) const
	{
		callMethod<void>(
			"setWeekDayTextAppearance",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setWeekNumberColor(jint arg0) const
	{
		callMethod<void>(
			"setWeekNumberColor",
			"(I)V",
			arg0
		);
	}
	void CalendarView::setWeekSeparatorLineColor(jint arg0) const
	{
		callMethod<void>(
			"setWeekSeparatorLineColor",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

