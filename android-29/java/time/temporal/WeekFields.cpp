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
	
	WeekFields::WeekFields(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject WeekFields::of(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.WeekFields",
			"of",
			"(Ljava/util/Locale;)Ljava/time/temporal/WeekFields;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WeekFields::of(java::time::DayOfWeek arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.WeekFields",
			"of",
			"(Ljava/time/DayOfWeek;I)Ljava/time/temporal/WeekFields;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject WeekFields::dayOfWeek()
	{
		return __thiz.callObjectMethod(
			"dayOfWeek",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	jboolean WeekFields::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject WeekFields::getFirstDayOfWeek()
	{
		return __thiz.callObjectMethod(
			"getFirstDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint WeekFields::getMinimalDaysInFirstWeek()
	{
		return __thiz.callMethod<jint>(
			"getMinimalDaysInFirstWeek",
			"()I"
		);
	}
	jint WeekFields::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring WeekFields::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WeekFields::weekBasedYear()
	{
		return __thiz.callObjectMethod(
			"weekBasedYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject WeekFields::weekOfMonth()
	{
		return __thiz.callObjectMethod(
			"weekOfMonth",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject WeekFields::weekOfWeekBasedYear()
	{
		return __thiz.callObjectMethod(
			"weekOfWeekBasedYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	QAndroidJniObject WeekFields::weekOfYear()
	{
		return __thiz.callObjectMethod(
			"weekOfYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
} // namespace java::time::temporal

