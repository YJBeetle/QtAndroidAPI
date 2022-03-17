#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./ValueRange.def.hpp"
#include "../../util/Locale.def.hpp"
#include "./ChronoField.def.hpp"

namespace java::time::temporal
{
	// Fields
	inline java::time::temporal::ChronoField ChronoField::ALIGNED_DAY_OF_WEEK_IN_MONTH()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_DAY_OF_WEEK_IN_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::ALIGNED_DAY_OF_WEEK_IN_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_DAY_OF_WEEK_IN_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::ALIGNED_WEEK_OF_MONTH()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_WEEK_OF_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::ALIGNED_WEEK_OF_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ALIGNED_WEEK_OF_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::AMPM_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"AMPM_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::CLOCK_HOUR_OF_AMPM()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"CLOCK_HOUR_OF_AMPM",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::CLOCK_HOUR_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"CLOCK_HOUR_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::DAY_OF_MONTH()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::DAY_OF_WEEK()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_WEEK",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::DAY_OF_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"DAY_OF_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::EPOCH_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"EPOCH_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::ERA()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"ERA",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::HOUR_OF_AMPM()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"HOUR_OF_AMPM",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::HOUR_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"HOUR_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::INSTANT_SECONDS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"INSTANT_SECONDS",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::MICRO_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MICRO_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::MICRO_OF_SECOND()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MICRO_OF_SECOND",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::MILLI_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MILLI_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::MILLI_OF_SECOND()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MILLI_OF_SECOND",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::MINUTE_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MINUTE_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::MINUTE_OF_HOUR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MINUTE_OF_HOUR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::MONTH_OF_YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"MONTH_OF_YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::NANO_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"NANO_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::NANO_OF_SECOND()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"NANO_OF_SECOND",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::OFFSET_SECONDS()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"OFFSET_SECONDS",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::PROLEPTIC_MONTH()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"PROLEPTIC_MONTH",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::SECOND_OF_DAY()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"SECOND_OF_DAY",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::SECOND_OF_MINUTE()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"SECOND_OF_MINUTE",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::YEAR()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"YEAR",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	inline java::time::temporal::ChronoField ChronoField::YEAR_OF_ERA()
	{
		return getStaticObjectField(
			"java.time.temporal.ChronoField",
			"YEAR_OF_ERA",
			"Ljava/time/temporal/ChronoField;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::time::temporal::ChronoField ChronoField::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.temporal.ChronoField",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/temporal/ChronoField;",
			arg0.object<jstring>()
		);
	}
	inline JArray ChronoField::values()
	{
		return callStaticObjectMethod(
			"java.time.temporal.ChronoField",
			"values",
			"()[Ljava/time/temporal/ChronoField;"
		);
	}
	inline JObject ChronoField::adjustInto(JObject arg0, jlong arg1) const
	{
		return callObjectMethod(
			"adjustInto",
			"(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;",
			arg0.object(),
			arg1
		);
	}
	inline jint ChronoField::checkValidIntValue(jlong arg0) const
	{
		return callMethod<jint>(
			"checkValidIntValue",
			"(J)I",
			arg0
		);
	}
	inline jlong ChronoField::checkValidValue(jlong arg0) const
	{
		return callMethod<jlong>(
			"checkValidValue",
			"(J)J",
			arg0
		);
	}
	inline JObject ChronoField::getBaseUnit() const
	{
		return callObjectMethod(
			"getBaseUnit",
			"()Ljava/time/temporal/TemporalUnit;"
		);
	}
	inline JString ChronoField::getDisplayName(java::util::Locale arg0) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jlong ChronoField::getFrom(JObject arg0) const
	{
		return callMethod<jlong>(
			"getFrom",
			"(Ljava/time/temporal/TemporalAccessor;)J",
			arg0.object()
		);
	}
	inline JObject ChronoField::getRangeUnit() const
	{
		return callObjectMethod(
			"getRangeUnit",
			"()Ljava/time/temporal/TemporalUnit;"
		);
	}
	inline jboolean ChronoField::isDateBased() const
	{
		return callMethod<jboolean>(
			"isDateBased",
			"()Z"
		);
	}
	inline jboolean ChronoField::isSupportedBy(JObject arg0) const
	{
		return callMethod<jboolean>(
			"isSupportedBy",
			"(Ljava/time/temporal/TemporalAccessor;)Z",
			arg0.object()
		);
	}
	inline jboolean ChronoField::isTimeBased() const
	{
		return callMethod<jboolean>(
			"isTimeBased",
			"()Z"
		);
	}
	inline java::time::temporal::ValueRange ChronoField::range() const
	{
		return callObjectMethod(
			"range",
			"()Ljava/time/temporal/ValueRange;"
		);
	}
	inline java::time::temporal::ValueRange ChronoField::rangeRefinedBy(JObject arg0) const
	{
		return callObjectMethod(
			"rangeRefinedBy",
			"(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	inline JString ChronoField::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::time::temporal

// Base class headers
#include "../../lang/Enum.hpp"

