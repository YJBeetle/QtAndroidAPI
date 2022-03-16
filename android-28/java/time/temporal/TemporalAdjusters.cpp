#include "../DayOfWeek.hpp"
#include "./TemporalAdjusters.hpp"

namespace java::time::temporal
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject TemporalAdjusters::dayOfWeekInMonth(jint arg0, java::time::DayOfWeek arg1)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"dayOfWeekInMonth",
			"(ILjava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0,
			arg1.object()
		);
	}
	JObject TemporalAdjusters::firstDayOfMonth()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfMonth",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	JObject TemporalAdjusters::firstDayOfNextMonth()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfNextMonth",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	JObject TemporalAdjusters::firstDayOfNextYear()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfNextYear",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	JObject TemporalAdjusters::firstDayOfYear()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfYear",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	JObject TemporalAdjusters::firstInMonth(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstInMonth",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	JObject TemporalAdjusters::lastDayOfMonth()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"lastDayOfMonth",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	JObject TemporalAdjusters::lastDayOfYear()
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"lastDayOfYear",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	JObject TemporalAdjusters::lastInMonth(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"lastInMonth",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	JObject TemporalAdjusters::next(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"next",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	JObject TemporalAdjusters::nextOrSame(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"nextOrSame",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	JObject TemporalAdjusters::ofDateAdjuster(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"ofDateAdjuster",
			"(Ljava/util/function/UnaryOperator;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	JObject TemporalAdjusters::previous(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"previous",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
	JObject TemporalAdjusters::previousOrSame(java::time::DayOfWeek arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"previousOrSame",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.object()
		);
	}
} // namespace java::time::temporal

