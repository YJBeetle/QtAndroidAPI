#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./ValueRange.hpp"
#include "../../util/Locale.hpp"
#include "./ChronoField.hpp"

namespace java::time::temporal
{
	// Fields
	java::time::temporal::ChronoField ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_DAY_OF_WEEK_IN_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_DAY_OF_WEEK_IN_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::ALIGNED_WEEK_OF_MONTH()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_WEEK_OF_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::ALIGNED_WEEK_OF_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_WEEK_OF_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::AMPM_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"AMPM_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::CLOCK_HOUR_OF_AMPM()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"CLOCK_HOUR_OF_AMPM",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::CLOCK_HOUR_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"CLOCK_HOUR_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::DAY_OF_MONTH()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::DAY_OF_WEEK()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_WEEK",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::DAY_OF_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::EPOCH_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"EPOCH_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::ERA()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ERA",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::HOUR_OF_AMPM()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"HOUR_OF_AMPM",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::HOUR_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"HOUR_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::INSTANT_SECONDS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"INSTANT_SECONDS",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::MICRO_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MICRO_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::MICRO_OF_SECOND()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MICRO_OF_SECOND",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::MILLI_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MILLI_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::MILLI_OF_SECOND()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MILLI_OF_SECOND",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::MINUTE_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MINUTE_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::MINUTE_OF_HOUR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MINUTE_OF_HOUR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::MONTH_OF_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MONTH_OF_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::NANO_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"NANO_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::NANO_OF_SECOND()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"NANO_OF_SECOND",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::OFFSET_SECONDS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"OFFSET_SECONDS",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::PROLEPTIC_MONTH()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"PROLEPTIC_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::SECOND_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"SECOND_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::SECOND_OF_MINUTE()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"SECOND_OF_MINUTE",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	java::time::temporal::ChronoField ChronoField::YEAR_OF_ERA()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"YEAR_OF_ERA",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	
	// QAndroidJniObject forward
	ChronoField::ChronoField(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::temporal::ChronoField ChronoField::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.ChronoField",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/temporal/ChronoField;",
			arg0.object<jstring>()
		);
	}
	JArray ChronoField::values()
	{
		return callStaticObjectMethod(
			"java.time.temporal.ChronoField",
			"values",
			"()[Ljava/time/temporal/ChronoField;"
		);
	}
	JObject ChronoField::adjustInto(JObject arg0, jlong arg1)
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
	JObject ChronoField::getBaseUnit()
	{
		return callObjectMethod(
			"getBaseUnit",
			"()Ljava/time/temporal/TemporalUnit;"
		);
	}
	JString ChronoField::getDisplayName(java::util::Locale arg0)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	jlong ChronoField::getFrom(JObject arg0)
	{
		return callMethod<jlong>(
			"getFrom",
			"(Ljava/time/temporal/TemporalAccessor;)J",
			arg0.object()
		);
	}
	JObject ChronoField::getRangeUnit()
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
	jboolean ChronoField::isSupportedBy(JObject arg0)
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
	java::time::temporal::ValueRange ChronoField::range()
	{
		return callObjectMethod(
			"range",
			"()Ljava/time/temporal/ValueRange;"
		);
	}
	java::time::temporal::ValueRange ChronoField::rangeRefinedBy(JObject arg0)
	{
		return callObjectMethod(
			"rangeRefinedBy",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	JString ChronoField::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::temporal

