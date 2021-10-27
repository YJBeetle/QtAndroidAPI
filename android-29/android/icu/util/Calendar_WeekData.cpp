#include "./Calendar_WeekData.hpp"

namespace android::icu::util
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
	
	Calendar_WeekData::Calendar_WeekData(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Calendar_WeekData::Calendar_WeekData(jint &arg0, jint &arg1, jint &arg2, jint &arg3, jint &arg4, jint &arg5)
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
} // namespace android::icu::util

