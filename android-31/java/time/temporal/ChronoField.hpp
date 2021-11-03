#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;
namespace java::time::temporal
{
	class ValueRange;
}
namespace java::util
{
	class Locale;
}

namespace java::time::temporal
{
	class ChronoField : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::temporal::ChronoField ALIGNED_DAY_OF_WEEK_IN_MONTH();
		static java::time::temporal::ChronoField ALIGNED_DAY_OF_WEEK_IN_YEAR();
		static java::time::temporal::ChronoField ALIGNED_WEEK_OF_MONTH();
		static java::time::temporal::ChronoField ALIGNED_WEEK_OF_YEAR();
		static java::time::temporal::ChronoField AMPM_OF_DAY();
		static java::time::temporal::ChronoField CLOCK_HOUR_OF_AMPM();
		static java::time::temporal::ChronoField CLOCK_HOUR_OF_DAY();
		static java::time::temporal::ChronoField DAY_OF_MONTH();
		static java::time::temporal::ChronoField DAY_OF_WEEK();
		static java::time::temporal::ChronoField DAY_OF_YEAR();
		static java::time::temporal::ChronoField EPOCH_DAY();
		static java::time::temporal::ChronoField ERA();
		static java::time::temporal::ChronoField HOUR_OF_AMPM();
		static java::time::temporal::ChronoField HOUR_OF_DAY();
		static java::time::temporal::ChronoField INSTANT_SECONDS();
		static java::time::temporal::ChronoField MICRO_OF_DAY();
		static java::time::temporal::ChronoField MICRO_OF_SECOND();
		static java::time::temporal::ChronoField MILLI_OF_DAY();
		static java::time::temporal::ChronoField MILLI_OF_SECOND();
		static java::time::temporal::ChronoField MINUTE_OF_DAY();
		static java::time::temporal::ChronoField MINUTE_OF_HOUR();
		static java::time::temporal::ChronoField MONTH_OF_YEAR();
		static java::time::temporal::ChronoField NANO_OF_DAY();
		static java::time::temporal::ChronoField NANO_OF_SECOND();
		static java::time::temporal::ChronoField OFFSET_SECONDS();
		static java::time::temporal::ChronoField PROLEPTIC_MONTH();
		static java::time::temporal::ChronoField SECOND_OF_DAY();
		static java::time::temporal::ChronoField SECOND_OF_MINUTE();
		static java::time::temporal::ChronoField YEAR();
		static java::time::temporal::ChronoField YEAR_OF_ERA();
		
		// QJniObject forward
		template<typename ...Ts> explicit ChronoField(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ChronoField(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::temporal::ChronoField valueOf(JString arg0);
		static JArray values();
		JObject adjustInto(JObject arg0, jlong arg1);
		jint checkValidIntValue(jlong arg0);
		jlong checkValidValue(jlong arg0);
		JObject getBaseUnit();
		JString getDisplayName(java::util::Locale arg0);
		jlong getFrom(JObject arg0);
		JObject getRangeUnit();
		jboolean isDateBased();
		jboolean isSupportedBy(JObject arg0);
		jboolean isTimeBased();
		java::time::temporal::ValueRange range();
		java::time::temporal::ValueRange rangeRefinedBy(JObject arg0);
		JString toString();
	};
} // namespace java::time::temporal

