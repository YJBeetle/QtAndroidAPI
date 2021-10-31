#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
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
	class Date : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Date(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Date(QJniObject obj);
		
		// Constructors
		Date();
		Date(jstring arg0);
		Date(jlong arg0);
		Date(jint arg0, jint arg1, jint arg2);
		Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		Date(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		static jlong UTC(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		static java::util::Date from(java::time::Instant arg0);
		static jlong parse(jstring arg0);
		jboolean after(java::util::Date arg0);
		jboolean before(java::util::Date arg0);
		jobject clone();
		jint compareTo(jobject arg0);
		jint compareTo(java::util::Date arg0);
		jboolean equals(jobject arg0);
		jint getDate();
		jint getDay();
		jint getHours();
		jint getMinutes();
		jint getMonth();
		jint getSeconds();
		jlong getTime();
		jint getTimezoneOffset();
		jint getYear();
		jint hashCode();
		void setDate(jint arg0);
		void setHours(jint arg0);
		void setMinutes(jint arg0);
		void setMonth(jint arg0);
		void setSeconds(jint arg0);
		void setTime(jlong arg0);
		void setYear(jint arg0);
		jstring toGMTString();
		java::time::Instant toInstant();
		jstring toLocaleString();
		jstring toString();
	};
} // namespace java::util

