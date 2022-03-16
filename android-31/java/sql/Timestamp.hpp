#pragma once

#include "../util/Date.hpp"

class JObject;
class JString;
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class LocalDateTime;
}
namespace java::util
{
	class Date;
}

namespace java::sql
{
	class Timestamp : public java::util::Date
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Timestamp(const char *className, const char *sig, Ts...agv) : java::util::Date(className, sig, std::forward<Ts>(agv)...) {}
		Timestamp(QAndroidJniObject obj) : java::util::Date(obj) {}
		
		// Constructors
		Timestamp(jlong arg0);
		Timestamp(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		
		// Methods
		static java::sql::Timestamp from(java::time::Instant arg0);
		static java::sql::Timestamp valueOf(JString arg0);
		static java::sql::Timestamp valueOf(java::time::LocalDateTime arg0);
		jboolean after(java::sql::Timestamp arg0) const;
		jboolean before(java::sql::Timestamp arg0) const;
		jint compareTo(JObject arg0) const;
		jint compareTo(java::sql::Timestamp arg0) const;
		jint compareTo(java::util::Date arg0) const;
		jboolean equals(JObject arg0) const;
		jboolean equals(java::sql::Timestamp arg0) const;
		jint getNanos() const;
		jlong getTime() const;
		jint hashCode() const;
		void setNanos(jint arg0) const;
		void setTime(jlong arg0) const;
		java::time::Instant toInstant() const;
		java::time::LocalDateTime toLocalDateTime() const;
		JString toString() const;
	};
} // namespace java::sql

