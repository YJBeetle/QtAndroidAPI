#pragma once

#include "./ZoneId.def.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JString;
namespace java::lang
{
	class Integer;
}
class JObject;
class JString;
namespace java::time
{
	class ZoneId;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZoneOffset(const char *className, const char *sig, Ts...agv) : java::time::ZoneId(className, sig, std::forward<Ts>(agv)...) {}
		ZoneOffset(QAndroidJniObject obj) : java::time::ZoneId(obj) {}
		
		// Constructors
		
		// Methods
		static java::time::ZoneOffset from(JObject arg0);
		static java::time::ZoneOffset of(JString arg0);
		static java::time::ZoneOffset ofHours(jint arg0);
		static java::time::ZoneOffset ofHoursMinutes(jint arg0, jint arg1);
		static java::time::ZoneOffset ofHoursMinutesSeconds(jint arg0, jint arg1, jint arg2);
		static java::time::ZoneOffset ofTotalSeconds(jint arg0);
		JObject adjustInto(JObject arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::time::ZoneOffset arg0) const;
		jboolean equals(JObject arg0) const;
		jint get(JObject arg0) const;
		JString getId() const;
		jlong getLong(JObject arg0) const;
		java::time::zone::ZoneRules getRules() const;
		jint getTotalSeconds() const;
		jint hashCode() const;
		jboolean isSupported(JObject arg0) const;
		java::time::ZoneId normalized() const;
		JObject query(JObject arg0) const;
		java::time::temporal::ValueRange range(JObject arg0) const;
		JString toString() const;
	};
} // namespace java::time

