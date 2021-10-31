#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ZoneId.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::time::temporal
{
	class ValueRange;
}
namespace java::time::zone
{
	class ZoneRules;
}

namespace java::time
{
	class ZoneOffset : public java::time::ZoneId
	{
	public:
		// Fields
		static java::time::ZoneOffset MAX();
		static java::time::ZoneOffset MIN();
		static java::time::ZoneOffset UTC();
		
		// QJniObject forward
		template<typename ...Ts> explicit ZoneOffset(const char *className, const char *sig, Ts...agv) : java::time::ZoneId(className, sig, std::forward<Ts>(agv)...) {}
		ZoneOffset(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::time::ZoneOffset from(__JniBaseClass arg0);
		static java::time::ZoneOffset of(jstring arg0);
		static java::time::ZoneOffset ofHours(jint arg0);
		static java::time::ZoneOffset ofHoursMinutes(jint arg0, jint arg1);
		static java::time::ZoneOffset ofHoursMinutesSeconds(jint arg0, jint arg1, jint arg2);
		static java::time::ZoneOffset ofTotalSeconds(jint arg0);
		__JniBaseClass adjustInto(__JniBaseClass arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::ZoneOffset arg0);
		jboolean equals(jobject arg0);
		jint get(__JniBaseClass arg0);
		jstring getId();
		jlong getLong(__JniBaseClass arg0);
		java::time::zone::ZoneRules getRules();
		jint getTotalSeconds();
		jint hashCode();
		jboolean isSupported(__JniBaseClass arg0);
		jobject query(__JniBaseClass arg0);
		java::time::temporal::ValueRange range(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace java::time

