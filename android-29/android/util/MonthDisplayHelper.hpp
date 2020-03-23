#pragma once

#ifndef ANDROID_UTIL_MONTHDISPLAYHELPER
#define ANDROID_UTIL_MONTHDISPLAYHELPER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::util
{
	class MonthDisplayHelper : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1);
		
		// Methods
		jint getOffset();
		jint getYear();
		jint getMonth();
		jint getWeekStartDay();
		jint getFirstDayOfMonth();
		jint getNumberOfDaysInMonth();
		QAndroidJniObject getDigitsForRow(jint arg0);
		jint getDayAt(jint arg0, jint arg1);
		jint getRowOf(jint arg0);
		jint getColumnOf(jint arg0);
		void previousMonth();
		void nextMonth();
		jboolean isWithinCurrentMonth(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::util


namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void MonthDisplayHelper::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.util.MonthDisplayHelper",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void MonthDisplayHelper::__constructor(jint arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.MonthDisplayHelper",
			"(II)V",
			arg0,
			arg1);
	}
	
	// Methods
	jint MonthDisplayHelper::getOffset()
	{
		return __thiz.callMethod<jint>(
			"getOffset",
			"()I");
	}
	jint MonthDisplayHelper::getYear()
	{
		return __thiz.callMethod<jint>(
			"getYear",
			"()I");
	}
	jint MonthDisplayHelper::getMonth()
	{
		return __thiz.callMethod<jint>(
			"getMonth",
			"()I");
	}
	jint MonthDisplayHelper::getWeekStartDay()
	{
		return __thiz.callMethod<jint>(
			"getWeekStartDay",
			"()I");
	}
	jint MonthDisplayHelper::getFirstDayOfMonth()
	{
		return __thiz.callMethod<jint>(
			"getFirstDayOfMonth",
			"()I");
	}
	jint MonthDisplayHelper::getNumberOfDaysInMonth()
	{
		return __thiz.callMethod<jint>(
			"getNumberOfDaysInMonth",
			"()I");
	}
	QAndroidJniObject MonthDisplayHelper::getDigitsForRow(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getDigitsForRow",
			"(I)[I",
			arg0);
	}
	jint MonthDisplayHelper::getDayAt(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getDayAt",
			"(II)I",
			arg0,
			arg1);
	}
	jint MonthDisplayHelper::getRowOf(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getRowOf",
			"(I)I",
			arg0);
	}
	jint MonthDisplayHelper::getColumnOf(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getColumnOf",
			"(I)I",
			arg0);
	}
	void MonthDisplayHelper::previousMonth()
	{
		__thiz.callMethod<void>(
			"previousMonth",
			"()V");
	}
	void MonthDisplayHelper::nextMonth()
	{
		__thiz.callMethod<void>(
			"nextMonth",
			"()V");
	}
	jboolean MonthDisplayHelper::isWithinCurrentMonth(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jboolean>(
			"isWithinCurrentMonth",
			"(II)Z",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class MonthDisplayHelper : public __jni_impl::android::util::MonthDisplayHelper
	{
	public:
		MonthDisplayHelper(QAndroidJniObject obj) { __thiz = obj; }
		MonthDisplayHelper(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		MonthDisplayHelper(jint arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_MONTHDISPLAYHELPER

