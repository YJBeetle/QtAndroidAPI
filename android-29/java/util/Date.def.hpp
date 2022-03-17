#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JObject;
class JString;
namespace java::lang
{
	class StringBuilder;
}
namespace java::time
{
	class Instant;
}

namespace java::util
{
	class Date : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Date(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Date(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		Date();
		Date(JString arg0);
		Date(jlong arg0);
		Date(jint arg0, jint arg1, jint arg2);
		Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		static jlong UTC(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static java::util::Date from(java::time::Instant arg0);
		static jlong parse(JString arg0);
		jboolean after(java::util::Date arg0) const;
		jboolean before(java::util::Date arg0) const;
		JObject clone() const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::util::Date arg0) const;
		jboolean equals(JObject arg0) const;
		jint getDate() const;
		jint getDay() const;
		jint getHours() const;
		jint getMinutes() const;
		jint getMonth() const;
		jint getSeconds() const;
		jlong getTime() const;
		jint getTimezoneOffset() const;
		jint getYear() const;
		jint hashCode() const;
		void setDate(jint arg0) const;
		void setHours(jint arg0) const;
		void setMinutes(jint arg0) const;
		void setMonth(jint arg0) const;
		void setSeconds(jint arg0) const;
		void setTime(jlong arg0) const;
		void setYear(jint arg0) const;
		JString toGMTString() const;
		java::time::Instant toInstant() const;
		JString toLocaleString() const;
		JString toString() const;
	};
} // namespace java::util

