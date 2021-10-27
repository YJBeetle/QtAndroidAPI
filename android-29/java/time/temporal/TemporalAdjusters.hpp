#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::time
{
	class DayOfWeek;
}

namespace __jni_impl::java::time::temporal
{
	class TemporalAdjusters : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject dayOfWeekInMonth(jint arg0, __jni_impl::java::time::DayOfWeek arg1);
		static QAndroidJniObject firstDayOfMonth();
		static QAndroidJniObject firstDayOfNextMonth();
		static QAndroidJniObject firstDayOfNextYear();
		static QAndroidJniObject firstDayOfYear();
		static QAndroidJniObject firstInMonth(__jni_impl::java::time::DayOfWeek arg0);
		static QAndroidJniObject lastDayOfMonth();
		static QAndroidJniObject lastDayOfYear();
		static QAndroidJniObject lastInMonth(__jni_impl::java::time::DayOfWeek arg0);
		static QAndroidJniObject next(__jni_impl::java::time::DayOfWeek arg0);
		static QAndroidJniObject nextOrSame(__jni_impl::java::time::DayOfWeek arg0);
		static QAndroidJniObject ofDateAdjuster(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject previous(__jni_impl::java::time::DayOfWeek arg0);
		static QAndroidJniObject previousOrSame(__jni_impl::java::time::DayOfWeek arg0);
	};
} // namespace __jni_impl::java::time::temporal

#include "../DayOfWeek.hpp"

namespace __jni_impl::java::time::temporal
{
	// Fields
	
	// Constructors
	void TemporalAdjusters::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.TemporalAdjusters",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TemporalAdjusters::dayOfWeekInMonth(jint arg0, __jni_impl::java::time::DayOfWeek arg1)
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
	QAndroidJniObject TemporalAdjusters::firstInMonth(__jni_impl::java::time::DayOfWeek arg0)
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
	QAndroidJniObject TemporalAdjusters::lastInMonth(__jni_impl::java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"lastInMonth",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::next(__jni_impl::java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"next",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::nextOrSame(__jni_impl::java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"nextOrSame",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::ofDateAdjuster(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"ofDateAdjuster",
			"(Ljava/util/function/UnaryOperator;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::previous(__jni_impl::java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"previous",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TemporalAdjusters::previousOrSame(__jni_impl::java::time::DayOfWeek arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.TemporalAdjusters",
			"previousOrSame",
			"(Ljava/time/DayOfWeek;)Ljava/time/temporal/TemporalAdjuster;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::time::temporal

namespace java::time::temporal
{
	class TemporalAdjusters : public __jni_impl::java::time::temporal::TemporalAdjusters
	{
	public:
		TemporalAdjusters(QAndroidJniObject obj) { __thiz = obj; }
		TemporalAdjusters()
		{
			__constructor();
		}
	};
} // namespace java::time::temporal

