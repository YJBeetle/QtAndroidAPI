#pragma once

#include "../../JObject.hpp"
#include "./TimeZone.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::util
{
	class Date;
}
namespace java::util
{
	class TimeZone;
}

namespace java::util
{
	class SimpleTimeZone : public java::util::TimeZone
	{
	public:
		// Fields
		static jint STANDARD_TIME();
		static jint UTC_TIME();
		static jint WALL_TIME();
		
		// QJniObject forward
		template<typename ...Ts> explicit SimpleTimeZone(const char *className, const char *sig, Ts...agv) : java::util::TimeZone(className, sig, std::forward<Ts>(agv)...) {}
		SimpleTimeZone(QJniObject obj);
		
		// Constructors
		SimpleTimeZone(jint arg0, jstring arg1);
		SimpleTimeZone(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		SimpleTimeZone(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10);
		SimpleTimeZone(jint arg0, jstring arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12);
		
		// Methods
		jobject clone();
		jboolean equals(jobject arg0);
		jint getDSTSavings();
		jint getOffset(jlong arg0);
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		jint getRawOffset();
		jboolean hasSameRules(java::util::TimeZone arg0);
		jint hashCode();
		jboolean inDaylightTime(java::util::Date arg0);
		jboolean observesDaylightTime();
		void setDSTSavings(jint arg0);
		void setEndRule(jint arg0, jint arg1, jint arg2);
		void setEndRule(jint arg0, jint arg1, jint arg2, jint arg3);
		void setEndRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4);
		void setRawOffset(jint arg0);
		void setStartRule(jint arg0, jint arg1, jint arg2);
		void setStartRule(jint arg0, jint arg1, jint arg2, jint arg3);
		void setStartRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4);
		void setStartYear(jint arg0);
		jstring toString();
		jboolean useDaylightTime();
	};
} // namespace java::util

