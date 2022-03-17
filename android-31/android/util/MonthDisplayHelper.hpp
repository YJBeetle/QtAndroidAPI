#pragma once

#include "../../JIntArray.hpp"
#include "./MonthDisplayHelper.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline MonthDisplayHelper::MonthDisplayHelper(jint arg0, jint arg1)
		: JObject(
			"android.util.MonthDisplayHelper",
			"(II)V",
			arg0,
			arg1
		) {}
	inline MonthDisplayHelper::MonthDisplayHelper(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.util.MonthDisplayHelper",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint MonthDisplayHelper::getColumnOf(jint arg0) const
	{
		return callMethod<jint>(
			"getColumnOf",
			"(I)I",
			arg0
		);
	}
	inline jint MonthDisplayHelper::getDayAt(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getDayAt",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline JIntArray MonthDisplayHelper::getDigitsForRow(jint arg0) const
	{
		return callObjectMethod(
			"getDigitsForRow",
			"(I)[I",
			arg0
		);
	}
	inline jint MonthDisplayHelper::getFirstDayOfMonth() const
	{
		return callMethod<jint>(
			"getFirstDayOfMonth",
			"()I"
		);
	}
	inline jint MonthDisplayHelper::getMonth() const
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	inline jint MonthDisplayHelper::getNumberOfDaysInMonth() const
	{
		return callMethod<jint>(
			"getNumberOfDaysInMonth",
			"()I"
		);
	}
	inline jint MonthDisplayHelper::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	inline jint MonthDisplayHelper::getRowOf(jint arg0) const
	{
		return callMethod<jint>(
			"getRowOf",
			"(I)I",
			arg0
		);
	}
	inline jint MonthDisplayHelper::getWeekStartDay() const
	{
		return callMethod<jint>(
			"getWeekStartDay",
			"()I"
		);
	}
	inline jint MonthDisplayHelper::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	inline jboolean MonthDisplayHelper::isWithinCurrentMonth(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isWithinCurrentMonth",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline void MonthDisplayHelper::nextMonth() const
	{
		callMethod<void>(
			"nextMonth",
			"()V"
		);
	}
	inline void MonthDisplayHelper::previousMonth() const
	{
		callMethod<void>(
			"previousMonth",
			"()V"
		);
	}
} // namespace android::util

// Base class headers

