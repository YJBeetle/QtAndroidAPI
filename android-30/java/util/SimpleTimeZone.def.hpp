#pragma once

#include "./TimeZone.def.hpp"

class JByteArray;
class JIntArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SimpleTimeZone(const char *className, const char *sig, Ts...agv) : java::util::TimeZone(className, sig, std::forward<Ts>(agv)...) {}
		SimpleTimeZone(QAndroidJniObject obj) : java::util::TimeZone(obj) {}
		
		// Constructors
		SimpleTimeZone(jint arg0, JString arg1);
		SimpleTimeZone(jint arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9);
		SimpleTimeZone(jint arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10);
		SimpleTimeZone(jint arg0, JString arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7, jint arg8, jint arg9, jint arg10, jint arg11, jint arg12);
		
		// Methods
		JObject clone() const;
		jboolean equals(JObject arg0) const;
		jint getDSTSavings() const;
		jint getOffset(jlong arg0) const;
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		jint getRawOffset() const;
		jboolean hasSameRules(java::util::TimeZone arg0) const;
		jint hashCode() const;
		jboolean inDaylightTime(java::util::Date arg0) const;
		jboolean observesDaylightTime() const;
		void setDSTSavings(jint arg0) const;
		void setEndRule(jint arg0, jint arg1, jint arg2) const;
		void setEndRule(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setEndRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4) const;
		void setRawOffset(jint arg0) const;
		void setStartRule(jint arg0, jint arg1, jint arg2) const;
		void setStartRule(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void setStartRule(jint arg0, jint arg1, jint arg2, jint arg3, jboolean arg4) const;
		void setStartYear(jint arg0) const;
		JString toString() const;
		jboolean useDaylightTime() const;
	};
} // namespace java::util

