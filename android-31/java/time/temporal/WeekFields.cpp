#include "../../io/ObjectInputStream.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
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
	JObject WeekFields::WEEK_BASED_YEARS()
	{
		return getStaticObjectField(
			"java.time.temporal.WeekFields",
			"WEEK_BASED_YEARS",
			"Ljava/time/temporal/TemporalUnit;"
		);
	}
	
	// QJniObject forward
	WeekFields::WeekFields(QJniObject obj) : JObject(obj) {}
	
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
	JObject WeekFields::dayOfWeek() const
	{
		return callObjectMethod(
			"dayOfWeek",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	jboolean WeekFields::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::time::DayOfWeek WeekFields::getFirstDayOfWeek() const
	{
		return callObjectMethod(
			"getFirstDayOfWeek",
			"()Ljava/time/DayOfWeek;"
		);
	}
	jint WeekFields::getMinimalDaysInFirstWeek() const
	{
		return callMethod<jint>(
			"getMinimalDaysInFirstWeek",
			"()I"
		);
	}
	jint WeekFields::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString WeekFields::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	JObject WeekFields::weekBasedYear() const
	{
		return callObjectMethod(
			"weekBasedYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	JObject WeekFields::weekOfMonth() const
	{
		return callObjectMethod(
			"weekOfMonth",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	JObject WeekFields::weekOfWeekBasedYear() const
	{
		return callObjectMethod(
			"weekOfWeekBasedYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
	JObject WeekFields::weekOfYear() const
	{
		return callObjectMethod(
			"weekOfYear",
			"()Ljava/time/temporal/TemporalField;"
		);
	}
} // namespace java::time::temporal

