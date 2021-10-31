#pragma once

#include "../../__JniBaseClass.hpp"
#include "../util/Date.hpp"

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
		Timestamp(QAndroidJniObject obj);
		
		// Constructors
		Timestamp(jlong arg0);
		Timestamp(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		
		// Methods
		static QAndroidJniObject from(java::time::Instant arg0);
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(java::time::LocalDateTime arg0);
		jboolean after(java::sql::Timestamp arg0);
		jboolean before(java::sql::Timestamp arg0);
		jint compareTo(jobject arg0);
		jint compareTo(java::sql::Timestamp arg0);
		jint compareTo(java::util::Date arg0);
		jboolean equals(jobject arg0);
		jboolean equals(java::sql::Timestamp arg0);
		jint getNanos();
		jlong getTime();
		jint hashCode();
		void setNanos(jint arg0);
		void setTime(jlong arg0);
		QAndroidJniObject toInstant();
		QAndroidJniObject toLocalDateTime();
		jstring toString();
	};
} // namespace java::sql

