#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
class JObject;
class JString;
namespace java::time
{
	class ZoneId;
}
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace java::util
{
	class TimeZone : public JObject
	{
	public:
		// Fields
		static jint LONG();
		static jint SHORT();
		
		// QJniObject forward
		template<typename ...Ts> explicit TimeZone(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimeZone(QJniObject obj);
		
		// Constructors
		TimeZone();
		
		// Methods
		static JArray getAvailableIDs();
		static JArray getAvailableIDs(jint arg0);
		static java::util::TimeZone getDefault();
		static java::util::TimeZone getTimeZone(JString arg0);
		static java::util::TimeZone getTimeZone(java::time::ZoneId arg0);
		static void setDefault(java::util::TimeZone arg0);
		JObject clone() const;
		jint getDSTSavings() const;
		JString getDisplayName() const;
		JString getDisplayName(java::util::Locale arg0) const;
		JString getDisplayName(jboolean arg0, jint arg1) const;
		JString getDisplayName(jboolean arg0, jint arg1, java::util::Locale arg2) const;
		JString getID() const;
		jint getOffset(jlong arg0) const;
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		jint getRawOffset() const;
		jboolean hasSameRules(java::util::TimeZone arg0) const;
		jboolean inDaylightTime(java::util::Date arg0) const;
		jboolean observesDaylightTime() const;
		void setID(JString arg0) const;
		void setRawOffset(jint arg0) const;
		java::time::ZoneId toZoneId() const;
		jboolean useDaylightTime() const;
	};
} // namespace java::util

