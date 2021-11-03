#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Calendar_WeekData.hpp"

namespace android::icu::util
{
	// Fields
	jint Calendar_WeekData::firstDayOfWeek()
	{
		return getField<jint>(
			"firstDayOfWeek"
		);
	}
	jint Calendar_WeekData::minimalDaysInFirstWeek()
	{
		return getField<jint>(
			"minimalDaysInFirstWeek"
		);
	}
	jint Calendar_WeekData::weekendCease()
	{
		return getField<jint>(
			"weekendCease"
		);
	}
	jint Calendar_WeekData::weekendCeaseMillis()
	{
		return getField<jint>(
			"weekendCeaseMillis"
		);
	}
	jint Calendar_WeekData::weekendOnset()
	{
		return getField<jint>(
			"weekendOnset"
		);
	}
	jint Calendar_WeekData::weekendOnsetMillis()
	{
		return getField<jint>(
			"weekendOnsetMillis"
		);
	}
	
	// QAndroidJniObject forward
	Calendar_WeekData::Calendar_WeekData(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Calendar_WeekData::Calendar_WeekData(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		: JObject(
			"android.icu.util.Calendar$WeekData",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		) {}
	
	// Methods
	jboolean Calendar_WeekData::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Calendar_WeekData::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString Calendar_WeekData::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

