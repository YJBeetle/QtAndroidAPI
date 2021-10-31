#include "../../io/ObjectInputStream.hpp"
#include "../DayOfWeek.hpp"
#include "../../util/Locale.hpp"
#include "./WeekFields.hpp"

namespace java::time::temporal
{
	// Fields
	java::time::temporal::WeekFields WeekFields::ISO()
	{
		return getStaticObjectField(
			"java.time.temporal.WeekFields",
			"ISO",
			"Ljava/time/temporal/WeekFields;"
		);
	}
	java::time::temporal::WeekFields WeekFields::SUNDAY_START()
	{
		return getStaticObjectField(
			"java.time.temporal.WeekFields",
			"SUNDAY_START",
			"Ljava/time/temporal/WeekFields;"
		);
	}
	__JniBaseClass WeekFields::WEEK_BASED_YEARS()
	{
		return getStaticObjectField(
			"java.time.temporal.WeekFields",
			"WEEK_BASED_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	
	// QAndroidJniObject forward
	WeekFields::WeekFields(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::time::temporal::WeekFields WeekFields::of(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.WeekFields",
			"of",
			"(Ljava/util/Locale;)Ljava/time/temporal/WeekFields;",
			arg0.object()
		);
	}
	java::time::temporal::WeekFields WeekFields::of(java::time::DayOfWeek arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.time.temporal.WeekFields",
			"of",
			"(Ljava/time/DayOfWeek;I)Ljava/time/temporal/WeekFields;",
			arg0.object(),
			arg1
		);
	}
	__JniBaseClass WeekFields::dayOfWeek()
	{
		return callObjectMethod(
			"dayOfWeek",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	jboolean WeekFields::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::time::DayOfWeek WeekFields::getFirstDayOfWeek()
	{
		return callObjectMethod(
			"getFirstDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint WeekFields::getMinimalDaysInFirstWeek()
	{
		return callMethod<jint>(
			"getMinimalDaysInFirstWeek",
			"()I"
		);
	}
	jint WeekFields::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring WeekFields::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	__JniBaseClass WeekFields::weekBasedYear()
	{
		return callObjectMethod(
			"weekBasedYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	__JniBaseClass WeekFields::weekOfMonth()
	{
		return callObjectMethod(
			"weekOfMonth",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	__JniBaseClass WeekFields::weekOfWeekBasedYear()
	{
		return callObjectMethod(
			"weekOfWeekBasedYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	__JniBaseClass WeekFields::weekOfYear()
	{
		return callObjectMethod(
			"weekOfYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
} // namespace java::time::temporal

