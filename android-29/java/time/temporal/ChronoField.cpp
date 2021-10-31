#include "./ValueRange.hpp"
#include "../../util/Locale.hpp"
#include "./ChronoField.hpp"

namespace java::time::temporal
{
	// Fields
	QAndroidJniObject ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_DAY_OF_WEEK_IN_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_DAY_OF_WEEK_IN_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::ALIGNED_WEEK_OF_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_WEEK_OF_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::ALIGNED_WEEK_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_WEEK_OF_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::AMPM_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"AMPM_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::CLOCK_HOUR_OF_AMPM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"CLOCK_HOUR_OF_AMPM",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::CLOCK_HOUR_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"CLOCK_HOUR_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::DAY_OF_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::DAY_OF_WEEK()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_WEEK",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::DAY_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::EPOCH_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"EPOCH_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::ERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ERA",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::HOUR_OF_AMPM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"HOUR_OF_AMPM",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::HOUR_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"HOUR_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::INSTANT_SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"INSTANT_SECONDS",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::MICRO_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MICRO_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::MICRO_OF_SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MICRO_OF_SECOND",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::MILLI_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MILLI_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::MILLI_OF_SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MILLI_OF_SECOND",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::MINUTE_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MINUTE_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::MINUTE_OF_HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MINUTE_OF_HOUR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::MONTH_OF_YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MONTH_OF_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::NANO_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"NANO_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::NANO_OF_SECOND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"NANO_OF_SECOND",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::OFFSET_SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"OFFSET_SECONDS",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::PROLEPTIC_MONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"PROLEPTIC_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::SECOND_OF_DAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"SECOND_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::SECOND_OF_MINUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"SECOND_OF_MINUTE",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::YEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	QAndroidJniObject ChronoField::YEAR_OF_ERA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.temporal.ChronoField",
			"YEAR_OF_ERA",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	
	// QAndroidJniObject forward
	ChronoField::ChronoField(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ChronoField::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ChronoField",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/temporal/ChronoField;",
			arg0
		);
	}
	jarray ChronoField::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.temporal.ChronoField",
			"values",
			"()[Ljava/time/temporal/ChronoField;"
		).object<jarray>();
	}
	QAndroidJniObject ChronoField::adjustInto(__JniBaseClass arg0, jlong arg1)
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;",
			arg0.object(),
			arg1
		);
	}
	jint ChronoField::checkValidIntValue(jlong arg0)
	{
		return callMethod<jint>(
			"checkValidIntValue",
			"(J)I",
			arg0
		);
	}
	jlong ChronoField::checkValidValue(jlong arg0)
	{
		return callMethod<jlong>(
			"checkValidValue",
			"(J)J",
			arg0
		);
	}
	QAndroidJniObject ChronoField::getBaseUnit()
	{
		return callObjectMethod(
			"getBaseUnit",
			"()Ljava/time/temporal/TemporalUnit;"
		);
	}
	jstring ChronoField::getDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
	jlong ChronoField::getFrom(__JniBaseClass arg0)
	{
		return callMethod<jlong>(
			"getFrom",
			"(Ljava/time/temporal/TemporalAccessor;)J",
			arg0.object()
		);
	}
	QAndroidJniObject ChronoField::getRangeUnit()
	{
		return callObjectMethod(
			"getRangeUnit",
			"()Ljava/time/temporal/TemporalUnit;"
		);
	}
	jboolean ChronoField::isDateBased()
	{
		return callMethod<jboolean>(
			"isDateBased",
			"()Z"
		);
	}
	jboolean ChronoField::isSupportedBy(__JniBaseClass arg0)
	{
		return callMethod<jboolean>(
			"isSupportedBy",
			"(Ljava/time/temporal/TemporalAccessor;)Z",
			arg0.object()
		);
	}
	jboolean ChronoField::isTimeBased()
	{
		return callMethod<jboolean>(
			"isTimeBased",
			"()Z"
		);
	}
	QAndroidJniObject ChronoField::range()
	{
		return callObjectMethod(
			"range",
			"()Ljava/time/temporal/ValueRange;"
		);
	}
	QAndroidJniObject ChronoField::rangeRefinedBy(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"rangeRefinedBy",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jstring ChronoField::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::temporal

