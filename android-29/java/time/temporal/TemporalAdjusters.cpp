#include "../DayOfWeek.hpp"
#include "./TemporalAdjusters.hpp"

namespace java::time::temporal
{
	// Fields
	
	TemporalAdjusters::TemporalAdjusters(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TemporalAdjusters::dayOfWeekInMonth(jint arg0, java::time::DayOfWeek arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"dayOfWeekInMonth",
			"(ILjava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::firstDayOfMonth()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfMonth",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	QAndroidJniObject TemporalAdjusters::firstDayOfNextMonth()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfNextMonth",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	QAndroidJniObject TemporalAdjusters::firstDayOfNextYear()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfNextYear",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	QAndroidJniObject TemporalAdjusters::firstDayOfYear()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstDayOfYear",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	QAndroidJniObject TemporalAdjusters::firstInMonth(java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"firstInMonth",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::lastDayOfMonth()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"lastDayOfMonth",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	QAndroidJniObject TemporalAdjusters::lastDayOfYear()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"lastDayOfYear",
			"()Ljava/time/temporal/TemporalAdjuster;"
		);
	}
	QAndroidJniObject TemporalAdjusters::lastInMonth(java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"lastInMonth",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::next(java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"next",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::nextOrSame(java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"nextOrSame",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::ofDateAdjuster(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"ofDateAdjuster",
			"(Ljava/util/function/UnaryOperator;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::previous(java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"previous",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::previousOrSame(java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"previousOrSame",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
} // namespace java::time::temporal

