#pragma once

#include "../../lang/Enum.hpp"

class JArray;
class JObject;
class JString;
namespace java::lang
{
	class Thread;
}
namespace java::time
{
	class Duration;
}
namespace java::time::temporal
{
	class ChronoUnit;
}

namespace java::util::concurrent
{
	class TimeUnit : public java::lang::Enum
	{
	public:
		// Fields
		static java::util::concurrent::TimeUnit DAYS();
		static java::util::concurrent::TimeUnit HOURS();
		static java::util::concurrent::TimeUnit MICROSECONDS();
		static java::util::concurrent::TimeUnit MILLISECONDS();
		static java::util::concurrent::TimeUnit MINUTES();
		static java::util::concurrent::TimeUnit NANOSECONDS();
		static java::util::concurrent::TimeUnit SECONDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeUnit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeUnit(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::concurrent::TimeUnit of(java::time::temporal::ChronoUnit arg0);
		static java::util::concurrent::TimeUnit valueOf(JString arg0);
		static JArray values();
		jlong convert(java::time::Duration arg0) const;
		jlong convert(jlong arg0, java::util::concurrent::TimeUnit arg1) const;
		void sleep(jlong arg0) const;
		void timedJoin(java::lang::Thread arg0, jlong arg1) const;
		void timedWait(JObject arg0, jlong arg1) const;
		java::time::temporal::ChronoUnit toChronoUnit() const;
		jlong toDays(jlong arg0) const;
		jlong toHours(jlong arg0) const;
		jlong toMicros(jlong arg0) const;
		jlong toMillis(jlong arg0) const;
		jlong toMinutes(jlong arg0) const;
		jlong toNanos(jlong arg0) const;
		jlong toSeconds(jlong arg0) const;
	};
} // namespace java::util::concurrent

