#include "../../JIntArray.hpp"
#include "./MonthDisplayHelper.hpp"

namespace android::util
{
	// Fields
	
	// QAndroidJniObject forward
	MonthDisplayHelper::MonthDisplayHelper(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MonthDisplayHelper::MonthDisplayHelper(jint arg0, jint arg1)
		: JObject(
			"android.util.MonthDisplayHelper",
			"(II)V",
			arg0,
			arg1
		) {}
	MonthDisplayHelper::MonthDisplayHelper(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.util.MonthDisplayHelper",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jint MonthDisplayHelper::getColumnOf(jint arg0) const
	{
		return callMethod<jint>(
			"getColumnOf",
			"(I)I",
			arg0
		);
	}
	jint MonthDisplayHelper::getDayAt(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"getDayAt",
			"(II)I",
			arg0,
			arg1
		);
	}
	JIntArray MonthDisplayHelper::getDigitsForRow(jint arg0) const
	{
		return callObjectMethod(
			"getDigitsForRow",
			"(I)[I",
			arg0
		);
	}
	jint MonthDisplayHelper::getFirstDayOfMonth() const
	{
		return callMethod<jint>(
			"getFirstDayOfMonth",
			"()I"
		);
	}
	jint MonthDisplayHelper::getMonth() const
	{
		return callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jint MonthDisplayHelper::getNumberOfDaysInMonth() const
	{
		return callMethod<jint>(
			"getNumberOfDaysInMonth",
			"()I"
		);
	}
	jint MonthDisplayHelper::getOffset() const
	{
		return callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint MonthDisplayHelper::getRowOf(jint arg0) const
	{
		return callMethod<jint>(
			"getRowOf",
			"(I)I",
			arg0
		);
	}
	jint MonthDisplayHelper::getWeekStartDay() const
	{
		return callMethod<jint>(
			"getWeekStartDay",
			"()I"
		);
	}
	jint MonthDisplayHelper::getYear() const
	{
		return callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jboolean MonthDisplayHelper::isWithinCurrentMonth(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isWithinCurrentMonth",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void MonthDisplayHelper::nextMonth() const
	{
		callMethod<void>(
			"nextMonth",
			"()V"
		);
	}
	void MonthDisplayHelper::previousMonth() const
	{
		callMethod<void>(
			"previousMonth",
			"()V"
		);
	}
} // namespace android::util

