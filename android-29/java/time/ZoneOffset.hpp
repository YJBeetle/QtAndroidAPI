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
		static QAndroidJniObject MAX();
		static QAndroidJniObject MIN();
		static QAndroidJniObject UTC();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZoneOffset(const char *className, const char *sig, Ts...agv) : java::time::ZoneId(className, sig, std::forward<Ts>(agv)...) {}
		ZoneOffset(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject from(__JniBaseClass arg0);
		static QAndroidJniObject of(jstring arg0);
		static QAndroidJniObject ofHours(jint arg0);
		static QAndroidJniObject ofHoursMinutes(jint arg0, jint arg1);
		static QAndroidJniObject ofHoursMinutesSeconds(jint arg0, jint arg1, jint arg2);
		static QAndroidJniObject ofTotalSeconds(jint arg0);
		QAndroidJniObject adjustInto(__JniBaseClass arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::time::ZoneOffset arg0);
		jboolean equals(jobject arg0);
		jint get(__JniBaseClass arg0);
		jstring getId();
		jlong getLong(__JniBaseClass arg0);
		QAndroidJniObject getRules();
		jint getTotalSeconds();
		jint hashCode();
		jboolean isSupported(__JniBaseClass arg0);
		jobject query(__JniBaseClass arg0);
		QAndroidJniObject range(__JniBaseClass arg0);
		jstring toString();
	};
} // namespace java::time

