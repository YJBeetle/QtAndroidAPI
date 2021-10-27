#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class CalendarContract_Instances : public __JniBaseClass
	{
	public:
		// Fields
		static jstring BEGIN();
		static QAndroidJniObject CONTENT_BY_DAY_URI();
		static QAndroidJniObject CONTENT_SEARCH_BY_DAY_URI();
		static QAndroidJniObject CONTENT_SEARCH_URI();
		static QAndroidJniObject CONTENT_URI();
		static jstring END();
		static jstring END_DAY();
		static jstring END_MINUTE();
		static QAndroidJniObject ENTERPRISE_CONTENT_BY_DAY_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_SEARCH_BY_DAY_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_SEARCH_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_URI();
		static jstring EVENT_ID();
		static jstring START_DAY();
		static jstring START_MINUTE();
		
		CalendarContract_Instances(QAndroidJniObject obj);
		// Constructors
		CalendarContract_Instances() = default;
		
		// Methods
		static QAndroidJniObject query(android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3);
		static QAndroidJniObject query(android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3, jstring arg4);
		static QAndroidJniObject query(android::content::ContentResolver arg0, jarray arg1, jlong arg2, jlong arg3, const QString &arg4);
	};
} // namespace android::provider

