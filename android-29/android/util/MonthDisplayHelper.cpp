#include "./MonthDisplayHelper.hpp"

namespace android::util
{
	// Fields
	
	MonthDisplayHelper::MonthDisplayHelper(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MonthDisplayHelper::MonthDisplayHelper(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.MonthDisplayHelper",
			"(II)V",
			arg0,
			arg1
		);
	}
	MonthDisplayHelper::MonthDisplayHelper(jint &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.util.MonthDisplayHelper",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jint MonthDisplayHelper::getColumnOf(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnOf",
			"(I)I",
			arg0
		);
	}
	jint MonthDisplayHelper::getDayAt(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getDayAt",
			"(II)I",
			arg0,
			arg1
		);
	}
	jintArray MonthDisplayHelper::getDigitsForRow(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDigitsForRow",
			"(I)[I",
			arg0
		).object<jintArray>();
	}
	jint MonthDisplayHelper::getFirstDayOfMonth()
	{
		return __thiz.callMethod<jint>(
			"getFirstDayOfMonth",
			"()I"
		);
	}
	jint MonthDisplayHelper::getMonth()
	{
		return __thiz.callMethod<jint>(
			"getMonth",
			"()I"
		);
	}
	jint MonthDisplayHelper::getNumberOfDaysInMonth()
	{
		return __thiz.callMethod<jint>(
			"getNumberOfDaysInMonth",
			"()I"
		);
	}
	jint MonthDisplayHelper::getOffset()
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"()I"
		);
	}
	jint MonthDisplayHelper::getRowOf(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRowOf",
			"(I)I",
			arg0
		);
	}
	jint MonthDisplayHelper::getWeekStartDay()
	{
		return __thiz.callMethod<jint>(
			"getWeekStartDay",
			"()I"
		);
	}
	jint MonthDisplayHelper::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I"
		);
	}
	jboolean MonthDisplayHelper::isWithinCurrentMonth(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isWithinCurrentMonth",
			"(II)Z",
			arg0,
			arg1
		);
	}
	void MonthDisplayHelper::nextMonth()
	{
		__thiz.callMethod<void>(
			"nextMonth",
			"()V"
		);
	}
	void MonthDisplayHelper::previousMonth()
	{
		__thiz.callMethod<void>(
			"previousMonth",
			"()V"
		);
	}
} // namespace android::util

