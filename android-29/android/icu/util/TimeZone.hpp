#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class TimeZone : public __JniBaseClass
	{
	public:
		// Fields
		static jint GENERIC_LOCATION();
		static QAndroidJniObject GMT_ZONE();
		static jint LONG();
		static jint LONG_GENERIC();
		static jint LONG_GMT();
		static jint SHORT();
		static jint SHORT_COMMONLY_USED();
		static jint SHORT_GENERIC();
		static jint SHORT_GMT();
		static jint TIMEZONE_ICU();
		static jint TIMEZONE_JDK();
		static QAndroidJniObject UNKNOWN_ZONE();
		static jstring UNKNOWN_ZONE_ID();
		
		TimeZone(QAndroidJniObject obj);
		// Constructors
		TimeZone();
		
		// Methods
		static jint countEquivalentIDs(jstring arg0);
		static jint countEquivalentIDs(const QString &arg0);
		static jarray getAvailableIDs();
		static jarray getAvailableIDs(jint arg0);
		static jarray getAvailableIDs(jstring arg0);
		static jarray getAvailableIDs(const QString &arg0);
		static QAndroidJniObject getAvailableIDs(android::icu::util::TimeZone_SystemTimeZoneType arg0, jstring arg1, java::lang::Integer arg2);
		static QAndroidJniObject getAvailableIDs(android::icu::util::TimeZone_SystemTimeZoneType arg0, const QString &arg1, java::lang::Integer arg2);
		static jstring getCanonicalID(jstring arg0);
		static jstring getCanonicalID(const QString &arg0);
		static jstring getCanonicalID(jstring arg0, jbooleanArray arg1);
		static jstring getCanonicalID(const QString &arg0, jbooleanArray arg1);
		static QAndroidJniObject getDefault();
		static jstring getEquivalentID(jstring arg0, jint arg1);
		static jstring getEquivalentID(const QString &arg0, jint arg1);
		static QAndroidJniObject getFrozenTimeZone(jstring arg0);
		static QAndroidJniObject getFrozenTimeZone(const QString &arg0);
		static jstring getIDForWindowsID(jstring arg0, jstring arg1);
		static jstring getIDForWindowsID(const QString &arg0, const QString &arg1);
		static jstring getRegion(jstring arg0);
		static jstring getRegion(const QString &arg0);
		static jstring getTZDataVersion();
		static QAndroidJniObject getTimeZone(jstring arg0);
		static QAndroidJniObject getTimeZone(const QString &arg0);
		static QAndroidJniObject getTimeZone(jstring arg0, jint arg1);
		static QAndroidJniObject getTimeZone(const QString &arg0, jint arg1);
		static jstring getWindowsID(jstring arg0);
		static jstring getWindowsID(const QString &arg0);
		jobject clone();
		QAndroidJniObject cloneAsThawed();
		jboolean equals(jobject arg0);
		QAndroidJniObject freeze();
		jint getDSTSavings();
		jstring getDisplayName();
		jstring getDisplayName(android::icu::util::ULocale arg0);
		jstring getDisplayName(java::util::Locale arg0);
		jstring getDisplayName(jboolean arg0, jint arg1);
		jstring getDisplayName(jboolean arg0, jint arg1, android::icu::util::ULocale arg2);
		jstring getDisplayName(jboolean arg0, jint arg1, java::util::Locale arg2);
		jstring getID();
		jint getOffset(jlong arg0);
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void getOffset(jlong arg0, jboolean arg1, jintArray arg2);
		jint getRawOffset();
		jboolean hasSameRules(android::icu::util::TimeZone arg0);
		jint hashCode();
		jboolean inDaylightTime(java::util::Date arg0);
		jboolean isFrozen();
		jboolean observesDaylightTime();
		void setID(jstring arg0);
		void setID(const QString &arg0);
		void setRawOffset(jint arg0);
		jboolean useDaylightTime();
	};
} // namespace android::icu::util

