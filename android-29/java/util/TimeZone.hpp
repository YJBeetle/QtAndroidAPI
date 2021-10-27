#pragma once

#include "../../__JniBaseClass.hpp"

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
	class TimeZone : public __JniBaseClass
	{
	public:
		// Fields
		static jint LONG();
		static jint SHORT();
		
		TimeZone(QAndroidJniObject obj);
		// Constructors
		TimeZone();
		
		// Methods
		static jarray getAvailableIDs();
		static jarray getAvailableIDs(jint arg0);
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getTimeZone(jstring arg0);
		static QAndroidJniObject getTimeZone(const QString &arg0);
		static QAndroidJniObject getTimeZone(java::time::ZoneId arg0);
		static void setDefault(java::util::TimeZone arg0);
		jobject clone();
		jint getDSTSavings();
		jstring getDisplayName();
		jstring getDisplayName(java::util::Locale arg0);
		jstring getDisplayName(jboolean arg0, jint arg1);
		jstring getDisplayName(jboolean arg0, jint arg1, java::util::Locale arg2);
		jstring getID();
		jint getOffset(jlong arg0);
		jint getOffset(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		jint getRawOffset();
		jboolean hasSameRules(java::util::TimeZone arg0);
		jboolean inDaylightTime(java::util::Date arg0);
		jboolean observesDaylightTime();
		void setID(jstring arg0);
		void setID(const QString &arg0);
		void setRawOffset(jint arg0);
		QAndroidJniObject toZoneId();
		jboolean useDaylightTime();
	};
} // namespace java::util

