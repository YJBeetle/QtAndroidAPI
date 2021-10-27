#pragma once

#ifndef ANDROID_ICU_UTIL_CALENDAR_WEEKDATA
#define ANDROID_ICU_UTIL_CALENDAR_WEEKDATA

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::icu::util
{
	class Calendar_WeekData : public __JniBaseClass
	{
	public:
		// Fields
		jint firstDayOfWeek();
		jint minimalDaysInFirstWeek();
		jint weekendCease();
		jint weekendCeaseMillis();
		jint weekendOnset();
		jint weekendOnsetMillis();
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::icu::util


namespace __jni_impl::android::icu::util
{
	// Fields
	jint Calendar_WeekData::firstDayOfWeek()
	{
		return __thiz.getField<jint>(
			"firstDayOfWeek"
		);
	}
	jint Calendar_WeekData::minimalDaysInFirstWeek()
	{
		return __thiz.getField<jint>(
			"minimalDaysInFirstWeek"
		);
	}
	jint Calendar_WeekData::weekendCease()
	{
		return __thiz.getField<jint>(
			"weekendCease"
		);
	}
	jint Calendar_WeekData::weekendCeaseMillis()
	{
		return __thiz.getField<jint>(
			"weekendCeaseMillis"
		);
	}
	jint Calendar_WeekData::weekendOnset()
	{
		return __thiz.getField<jint>(
			"weekendOnset"
		);
	}
	jint Calendar_WeekData::weekendOnsetMillis()
	{
		return __thiz.getField<jint>(
			"weekendOnsetMillis"
		);
	}
	
	// Constructors
	void Calendar_WeekData::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.Calendar$WeekData",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	jboolean Calendar_WeekData::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Calendar_WeekData::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Calendar_WeekData::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class Calendar_WeekData : public __jni_impl::android::icu::util::Calendar_WeekData
	{
	public:
		Calendar_WeekData(QAndroidJniObject obj) { __thiz = obj; }
		Calendar_WeekData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_CALENDAR_WEEKDATA

