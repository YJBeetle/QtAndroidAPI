#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::time
{
	class Duration;
}
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class ZoneId;
}

namespace java::time
{
	class Clock : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Clock(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Clock(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject fixed(java::time::Instant arg0, java::time::ZoneId arg1);
		static QAndroidJniObject offset(java::time::Clock arg0, java::time::Duration arg1);
		static QAndroidJniObject system(java::time::ZoneId arg0);
		static QAndroidJniObject systemDefaultZone();
		static QAndroidJniObject systemUTC();
		static QAndroidJniObject tick(java::time::Clock arg0, java::time::Duration arg1);
		static QAndroidJniObject tickMillis(java::time::ZoneId arg0);
		static QAndroidJniObject tickMinutes(java::time::ZoneId arg0);
		static QAndroidJniObject tickSeconds(java::time::ZoneId arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject getZone();
		jint hashCode();
		QAndroidJniObject instant();
		jlong millis();
		QAndroidJniObject withZone(java::time::ZoneId arg0);
	};
} // namespace java::time

