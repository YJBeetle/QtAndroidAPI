#include "../../io/ObjectInputStream.hpp"
#include "../DayOfWeek.hpp"
#include "../../util/Locale.hpp"
#include "./WeekFields.hpp"

namespace java::time::temporal
{
	// Fields
	QAndroidJniObject WeekFields::ISO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.WeekFields",
			"ISO",
			"Ljava/time/temporal/WeekFields;"
		);
	}
	QAndroidJniObject WeekFields::SUNDAY_START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.WeekFields",
			"SUNDAY_START",
			"Ljava/time/temporal/WeekFields;"
		);
	}
	QAndroidJniObject WeekFields::WEEK_BASED_YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.WeekFields",
			"WEEK_BASED_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	
	// QAndroidJniObject forward
	WeekFields::WeekFields(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject WeekFields::of(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.WeekFields",
			"of",
			"(Ljava/util/Locale;)Ljava/time/temporal/WeekFields;",
			arg0.object()
		);
	}
	QAndroidJniObject WeekFields::of(java::time::DayOfWeek arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.WeekFields",
			"of",
			"(Ljava/time/DayOfWeek;I)Ljava/time/temporal/WeekFields;",
			arg0.object(),
			arg1
		);
	}
	QAndroidJniObject WeekFields::dayOfWeek()
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
	QAndroidJniObject WeekFields::getFirstDayOfWeek()
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
	QAndroidJniObject WeekFields::weekBasedYear()
	{
		return callObjectMethod(
			"weekBasedYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject WeekFields::weekOfMonth()
	{
		return callObjectMethod(
			"weekOfMonth",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject WeekFields::weekOfWeekBasedYear()
	{
		return callObjectMethod(
			"weekOfWeekBasedYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject WeekFields::weekOfYear()
	{
		return callObjectMethod(
			"weekOfYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
} // namespace java::time::temporal

