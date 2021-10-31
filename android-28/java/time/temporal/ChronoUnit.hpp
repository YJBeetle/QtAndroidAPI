#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ChronoUnit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ChronoUnit(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::temporal::ChronoUnit valueOf(jstring arg0);
		static jarray values();
		__JniBaseClass addTo(__JniBaseClass arg0, jlong arg1);
		jlong between(__JniBaseClass arg0, __JniBaseClass arg1);
		java::time::Duration getDuration();
		jboolean isDateBased();
		jboolean isDurationEstimated();
		jboolean isSupportedBy(__JniBaseClass arg0);
		jboolean isTimeBased();
		jstring toString();
	};
} // namespace java::time::temporal

