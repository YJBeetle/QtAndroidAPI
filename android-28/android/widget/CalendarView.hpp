#pragma once

#include "../content/Context.def.hpp"
#include "../content/res/Configuration.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../../JString.hpp"
#include "./CalendarView.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline CalendarView::CalendarView(android::content::Context arg0)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline CalendarView::CalendarView(android::content::Context arg0, JObject arg1)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline CalendarView::CalendarView(android::content::Context arg0, JObject arg1, jint arg2)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline CalendarView::CalendarView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3)
		: android::widget::FrameLayout(
			"android.widget.CalendarView",
			"(Landroid/content/Context;Landroid/util/AttributeSet;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline JString CalendarView::getAccessibilityClassName() const
	{
		return callObjectMethod(
			"getAccessibilityClassName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jlong CalendarView::getDate() const
	{
		return callMethod<jlong>(
			"getDate",
			"()J"
		);
	}
	inline jint CalendarView::getDateTextAppearance() const
	{
		return callMethod<jint>(
			"getDateTextAppearance",
			"()I"
		);
	}
	inline jint CalendarView::getFirstDayOfWeek() const
	{
		return callMethod<jint>(
			"getFirstDayOfWeek",
			"()I"
		);
	}
	inline jint CalendarView::getFocusedMonthDateColor() const
	{
		return callMethod<jint>(
			"getFocusedMonthDateColor",
			"()I"
		);
	}
	inline jlong CalendarView::getMaxDate() const
	{
		return callMethod<jlong>(
			"getMaxDate",
			"()J"
		);
	}
	inline jlong CalendarView::getMinDate() const
	{
		return callMethod<jlong>(
			"getMinDate",
			"()J"
		);
	}
	inline android::graphics::drawable::Drawable CalendarView::getSelectedDateVerticalBar() const
	{
		return callObjectMethod(
			"getSelectedDateVerticalBar",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint CalendarView::getSelectedWeekBackgroundColor() const
	{
		return callMethod<jint>(
			"getSelectedWeekBackgroundColor",
			"()I"
		);
	}
	inline jboolean CalendarView::getShowWeekNumber() const
	{
		return callMethod<jboolean>(
			"getShowWeekNumber",
			"()Z"
		);
	}
	inline jint CalendarView::getShownWeekCount() const
	{
		return callMethod<jint>(
			"getShownWeekCount",
			"()I"
		);
	}
	inline jint CalendarView::getUnfocusedMonthDateColor() const
	{
		return callMethod<jint>(
			"getUnfocusedMonthDateColor",
			"()I"
		);
	}
	inline jint CalendarView::getWeekDayTextAppearance() const
	{
		return callMethod<jint>(
			"getWeekDayTextAppearance",
			"()I"
		);
	}
	inline jint CalendarView::getWeekNumberColor() const
	{
		return callMethod<jint>(
			"getWeekNumberColor",
			"()I"
		);
	}
	inline jint CalendarView::getWeekSeparatorLineColor() const
	{
		return callMethod<jint>(
			"getWeekSeparatorLineColor",
			"()I"
		);
	}
	inline void CalendarView::setDate(jlong arg0) const
	{
		callMethod<void>(
			"setDate",
			"(J)V",
			arg0
		);
	}
	inline void CalendarView::setDate(jlong arg0, jboolean arg1, jboolean arg2) const
	{
		callMethod<void>(
			"setDate",
			"(JZZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void CalendarView::setDateTextAppearance(jint arg0) const
	{
		callMethod<void>(
			"setDateTextAppearance",
			"(I)V",
			arg0
		);
	}
	inline void CalendarView::setFirstDayOfWeek(jint arg0) const
	{
		callMethod<void>(
			"setFirstDayOfWeek",
			"(I)V",
			arg0
		);
	}
	inline void CalendarView::setFocusedMonthDateColor(jint arg0) const
	{
		callMethod<void>(
			"setFocusedMonthDateColor",
			"(I)V",
			arg0
		);
	}
	inline void CalendarView::setMaxDate(jlong arg0) const
	{
		callMethod<void>(
			"setMaxDate",
			"(J)V",
			arg0
		);
	}
	inline void CalendarView::setMinDate(jlong arg0) const
	{
		callMethod<void>(
			"setMinDate",
			"(J)V",
			arg0
		);
	}
	inline void CalendarView::setOnDateChangeListener(JObject arg0) const
	{
		callMethod<void>(
			"setOnDateChangeListener",
			"(Landroid/widget/CalendarView$OnDateChangeListener;)V",
			arg0.object()
		);
	}
	inline void CalendarView::setSelectedDateVerticalBar(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"setSelectedDateVerticalBar",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	inline void CalendarView::setSelectedDateVerticalBar(jint arg0) const
	{
		callMethod<void>(
			"setSelectedDateVerticalBar",
			"(I)V",
			arg0
		);
	}
	inline void CalendarView::setSelectedWeekBackgroundColor(jint arg0) const
	{
		callMethod<void>(
			"setSelectedWeekBackgroundColor",
			"(I)V",
			arg0
		);
	}
	inline void CalendarView::setShowWeekNumber(jboolean arg0) const
	{
		callMethod<void>(
			"setShowWeekNumber",
			"(Z)V",
			arg0
		);
	}
	inline void CalendarView::setShownWeekCount(jint arg0) const
	{
		callMethod<void>(
			"setShownWeekCount",
			"(I)V",
			arg0
		);
	}
	inline void CalendarView::setUnfocusedMonthDateColor(jint arg0) const
	{
		callMethod<void>(
			"setUnfocusedMonthDateColor",
			"(I)V",
			arg0
		);
	}
	inline void CalendarView::setWeekDayTextAppearance(jint arg0) const
	{
		callMethod<void>(
			"setWeekDayTextAppearance",
			"(I)V",
			arg0
		);
	}
	inline void CalendarView::setWeekNumberColor(jint arg0) const
	{
		callMethod<void>(
			"setWeekNumberColor",
			"(I)V",
			arg0
		);
	}
	inline void CalendarView::setWeekSeparatorLineColor(jint arg0) const
	{
		callMethod<void>(
			"setWeekSeparatorLineColor",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

// Base class headers
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "./FrameLayout.hpp"

