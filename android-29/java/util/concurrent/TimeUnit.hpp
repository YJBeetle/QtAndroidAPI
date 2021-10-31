#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"

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
		static QAndroidJniObject DAYS();
		static QAndroidJniObject HOURS();
		static QAndroidJniObject MICROSECONDS();
		static QAndroidJniObject MILLISECONDS();
		static QAndroidJniObject MINUTES();
		static QAndroidJniObject NANOSECONDS();
		static QAndroidJniObject SECONDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeUnit(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TimeUnit(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject of(java::time::temporal::ChronoUnit arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
		jlong convert(java::time::Duration arg0);
		jlong convert(jlong arg0, java::util::concurrent::TimeUnit arg1);
		void sleep(jlong arg0);
		void timedJoin(java::lang::Thread arg0, jlong arg1);
		void timedWait(jobject arg0, jlong arg1);
		QAndroidJniObject toChronoUnit();
		jlong toDays(jlong arg0);
		jlong toHours(jlong arg0);
		jlong toMicros(jlong arg0);
		jlong toMillis(jlong arg0);
		jlong toMinutes(jlong arg0);
		jlong toNanos(jlong arg0);
		jlong toSeconds(jlong arg0);
	};
} // namespace java::util::concurrent

