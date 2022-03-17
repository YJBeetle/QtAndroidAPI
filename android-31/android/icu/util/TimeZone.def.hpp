#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
class JBooleanArray;
namespace android::icu::util
{
	class TimeZone_SystemTimeZoneType;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::lang
{
	class Integer;
}
class JObject;
class JString;
namespace java::util
{
	class Date;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::util
{
	class TimeZone : public JObject
	{
	public:
		// Fields
		static jint GENERIC_LOCATION();
		static android::icu::util::TimeZone GMT_ZONE();
		static jint LONG();
		static jint LONG_GENERIC();
		static jint LONG_GMT();
		static jint SHORT();
		static jint SHORT_COMMONLY_USED();
		static jint SHORT_GENERIC();
		static jint SHORT_GMT();
		static jint TIMEZONE_ICU();
		static jint TIMEZONE_JDK();
		static android::icu::util::TimeZone UNKNOWN_ZONE();
		static JString UNKNOWN_ZONE_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TimeZone(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TimeZone(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		TimeZone();
		
		// Methods
		static jint countEquivalentIDs(JString arg0);
		static JArray getAvailableIDs();
		static JArray getAvailableIDs(jint arg0);
		static JArray getAvailableIDs(JString arg0);
		static JObject getAvailableIDs(android::icu::util::TimeZone_SystemTimeZoneType arg0, JString arg1, java::lang::Integer arg2);
		static JString getCanonicalID(JString arg0);
		static JString getCanonicalID(JString arg0, JBooleanArray arg1);
		static android::icu::util::TimeZone getDefault();
		static JString getEquivalentID(JString arg0, jint arg1);
		static android::icu::util::TimeZone getFrozenTimeZone(JString arg0);
		static JString getIDForWindowsID(JString arg0, JString arg1);
		static JString getRegion(JString arg0);
		static JString getTZDataVersion();
		static android::icu::util::TimeZone getTimeZone(JString arg0);
		static android::icu::util::TimeZone getTimeZone(JString arg0, jint arg1);
		static JString getWindowsID(JString arg0);
		JObject clone() const;
		android::icu::util::TimeZone cloneAsThawed() const;
		jboolean equals(JObject arg0) const;
		android::icu::util::TimeZone freeze() const;
		jint getDSTSavings() const;
		JString getDisplayName() const;
		JString getDisplayName(android::icu::util::ULocale arg0) const;
		JString getDisplayName(java::util::Locale arg0) const;
		JString getDisplayName(jboolean arg0, jint arg1) const;
		JString getDisplayName(jboolean arg0, jint arg1, android::icu::util::ULocale arg2) const;
		JString getDisplayName(jboolean arg0, jint arg1, java::util::Locale arg2) const;
		JString getID() const;
		jint getOffset(jlong arg0) const;
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5) const;
		void getOffset(jlong arg0, jboolean arg1, JIntArray arg2) const;
		jint getRawOffset() const;
		jboolean hasSameRules(android::icu::util::TimeZone arg0) const;
		jint hashCode() const;
		jboolean inDaylightTime(java::util::Date arg0) const;
		jboolean isFrozen() const;
		jboolean observesDaylightTime() const;
		void setID(JString arg0) const;
		void setRawOffset(jint arg0) const;
		jboolean useDaylightTime() const;
	};
} // namespace android::icu::util

