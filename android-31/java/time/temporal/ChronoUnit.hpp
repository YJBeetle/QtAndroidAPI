#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JString;
namespace java::time
{
	class Duration;
}

namespace java::time::temporal
{
	class ChronoUnit : public java::lang::Enum
	{
	public:
		// Fields
		static java::time::temporal::ChronoUnit CENTURIES();
		static java::time::temporal::ChronoUnit DAYS();
		static java::time::temporal::ChronoUnit DECADES();
		static java::time::temporal::ChronoUnit ERAS();
		static java::time::temporal::ChronoUnit FOREVER();
		static java::time::temporal::ChronoUnit HALF_DAYS();
		static java::time::temporal::ChronoUnit HOURS();
		static java::time::temporal::ChronoUnit MICROS();
		static java::time::temporal::ChronoUnit MILLENNIA();
		static java::time::temporal::ChronoUnit MILLIS();
		static java::time::temporal::ChronoUnit MINUTES();
		static java::time::temporal::ChronoUnit MONTHS();
		static java::time::temporal::ChronoUnit NANOS();
		static java::time::temporal::ChronoUnit SECONDS();
		static java::time::temporal::ChronoUnit WEEKS();
		static java::time::temporal::ChronoUnit YEARS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ChronoUnit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ChronoUnit(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::temporal::ChronoUnit valueOf(JString arg0);
		static JArray values();
		JObject addTo(JObject arg0, jlong arg1) const;
		jlong between(JObject arg0, JObject arg1) const;
		java::time::Duration getDuration() const;
		jboolean isDateBased() const;
		jboolean isDurationEstimated() const;
		jboolean isSupportedBy(JObject arg0) const;
		jboolean isTimeBased() const;
		JString toString() const;
	};
} // namespace java::time::temporal

