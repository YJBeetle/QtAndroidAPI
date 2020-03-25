#pragma once

#ifndef JAVA_TIME_TEMPORAL_CHRONOFIELD
#define JAVA_TIME_TEMPORAL_CHRONOFIELD

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

namespace __jni_impl::java::time::temporal
{
	class ValueRange;
}
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::time::temporal
{
	class ChronoField : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NANO_OF_SECOND();
		static QAndroidJniObject NANO_OF_DAY();
		static QAndroidJniObject MICRO_OF_SECOND();
		static QAndroidJniObject MICRO_OF_DAY();
		static QAndroidJniObject MILLI_OF_SECOND();
		static QAndroidJniObject MILLI_OF_DAY();
		static QAndroidJniObject SECOND_OF_MINUTE();
		static QAndroidJniObject SECOND_OF_DAY();
		static QAndroidJniObject MINUTE_OF_HOUR();
		static QAndroidJniObject MINUTE_OF_DAY();
		static QAndroidJniObject HOUR_OF_AMPM();
		static QAndroidJniObject CLOCK_HOUR_OF_AMPM();
		static QAndroidJniObject HOUR_OF_DAY();
		static QAndroidJniObject CLOCK_HOUR_OF_DAY();
		static QAndroidJniObject AMPM_OF_DAY();
		static QAndroidJniObject DAY_OF_WEEK();
		static QAndroidJniObject ALIGNED_DAY_OF_WEEK_IN_MONTH();
		static QAndroidJniObject ALIGNED_DAY_OF_WEEK_IN_YEAR();
		static QAndroidJniObject DAY_OF_MONTH();
		static QAndroidJniObject DAY_OF_YEAR();
		static QAndroidJniObject EPOCH_DAY();
		static QAndroidJniObject ALIGNED_WEEK_OF_MONTH();
		static QAndroidJniObject ALIGNED_WEEK_OF_YEAR();
		static QAndroidJniObject MONTH_OF_YEAR();
		static QAndroidJniObject PROLEPTIC_MONTH();
		static QAndroidJniObject YEAR_OF_ERA();
		static QAndroidJniObject YEAR();
		static QAndroidJniObject ERA();
		static QAndroidJniObject INSTANT_SECONDS();
		static QAndroidJniObject OFFSET_SECONDS();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
		QAndroidJniObject range();
		jlong checkValidValue(jlong arg0);
		jint checkValidIntValue(jlong arg0);
		QAndroidJniObject getBaseUnit();
		QAndroidJniObject getRangeUnit();
		jboolean isDateBased();
		jboolean isTimeBased();
		jboolean isSupportedBy(__jni_impl::__JniBaseClass arg0);
		jlong getFrom(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject adjustInto(__jni_impl::__JniBaseClass arg0, jlong arg1);
		QAndroidJniObject rangeRefinedBy(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getDisplayName(__jni_impl::java::util::Locale arg0);
	};
} // namespace __jni_impl::java::time::temporal

#include "ValueRange.hpp"
#include "../../util/Locale.hpp"

namespace __jni_impl::java::time::temporal
{
	// Fields
	QAndroidJniObject ChronoField::NANO_OF_SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"NANO_OF_SECOND",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::NANO_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"NANO_OF_DAY",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::MICRO_OF_SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MICRO_OF_SECOND",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::MICRO_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MICRO_OF_DAY",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::MILLI_OF_SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MILLI_OF_SECOND",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::MILLI_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MILLI_OF_DAY",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::SECOND_OF_MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"SECOND_OF_MINUTE",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::SECOND_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"SECOND_OF_DAY",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::MINUTE_OF_HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MINUTE_OF_HOUR",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::MINUTE_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MINUTE_OF_DAY",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::HOUR_OF_AMPM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"HOUR_OF_AMPM",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::CLOCK_HOUR_OF_AMPM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"CLOCK_HOUR_OF_AMPM",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::HOUR_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"HOUR_OF_DAY",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::CLOCK_HOUR_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"CLOCK_HOUR_OF_DAY",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::AMPM_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"AMPM_OF_DAY",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::DAY_OF_WEEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_WEEK",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_DAY_OF_WEEK_IN_MONTH",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_DAY_OF_WEEK_IN_YEAR",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::DAY_OF_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_MONTH",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::DAY_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_YEAR",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::EPOCH_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"EPOCH_DAY",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::ALIGNED_WEEK_OF_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_WEEK_OF_MONTH",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::ALIGNED_WEEK_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_WEEK_OF_YEAR",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::MONTH_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MONTH_OF_YEAR",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::PROLEPTIC_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"PROLEPTIC_MONTH",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::YEAR_OF_ERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"YEAR_OF_ERA",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"YEAR",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::ERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ERA",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::INSTANT_SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"INSTANT_SECONDS",
			"Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::OFFSET_SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"OFFSET_SECONDS",
			"Ljava/time/temporal/ChronoField;");
	}
	
	// Constructors
	void ChronoField::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.temporal.ChronoField",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ChronoField::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject ChronoField::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ChronoField",
			"values",
			"()[Ljava/time/temporal/ChronoField;");
	}
	QAndroidJniObject ChronoField::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ChronoField",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/temporal/ChronoField;",
			arg0);
	}
	QAndroidJniObject ChronoField::range()
	{
		return __thiz.callObjectMethod(
			"range",
			"()Ljava/time/temporal/ValueRange;");
	}
	jlong ChronoField::checkValidValue(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"checkValidValue",
			"(J)J",
			arg0);
	}
	jint ChronoField::checkValidIntValue(jlong arg0)
	{
		return __thiz.callMethod<jint>(
			"checkValidIntValue",
			"(J)I",
			arg0);
	}
	QAndroidJniObject ChronoField::getBaseUnit()
	{
		return __thiz.callObjectMethod(
			"getBaseUnit",
			"()Ljava/time/temporal/TemporalUnit;");
	}
	QAndroidJniObject ChronoField::getRangeUnit()
	{
		return __thiz.callObjectMethod(
			"getRangeUnit",
			"()Ljava/time/temporal/TemporalUnit;");
	}
	jboolean ChronoField::isDateBased()
	{
		return __thiz.callMethod<jboolean>(
			"isDateBased",
			"()Z");
	}
	jboolean ChronoField::isTimeBased()
	{
		return __thiz.callMethod<jboolean>(
			"isTimeBased",
			"()Z");
	}
	jboolean ChronoField::isSupportedBy(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isSupportedBy",
			"(Ljava/time/temporal/TemporalAccessor;)Z",
			arg0.__jniObject().object());
	}
	jlong ChronoField::getFrom(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callMethod<jlong>(
			"getFrom",
			"(Ljava/time/temporal/TemporalAccessor;)J",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ChronoField::adjustInto(__jni_impl::__JniBaseClass arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject ChronoField::rangeRefinedBy(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"rangeRefinedBy",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ChronoField::getDisplayName(__jni_impl::java::util::Locale arg0)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::time::temporal

namespace java::time::temporal
{
	class ChronoField : public __jni_impl::java::time::temporal::ChronoField
	{
	public:
		ChronoField(QAndroidJniObject obj) { __thiz = obj; }
		ChronoField()
		{
			__constructor();
		}
	};
} // namespace java::time::temporal

#endif // JAVA_TIME_TEMPORAL_CHRONOFIELD

