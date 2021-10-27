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
	class Contacts_Settings : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static QAndroidJniObject CONTENT_URI();
		static jstring DEFAULT_SORT_ORDER();
		static jstring SYNC_EVERYTHING();
		
		Contacts_Settings(QAndroidJniObject obj);
		// Constructors
		Contacts_Settings() = default;
		
		// Methods
		static jstring getSetting(android::content::ContentResolver arg0, jstring arg1, jstring arg2);
		static jstring getSetting(android::content::ContentResolver arg0, const QString &arg1, const QString &arg2);
		static void setSetting(android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3);
		static void setSetting(android::content::ContentResolver arg0, const QString &arg1, const QString &arg2, const QString &arg3);
	};
} // namespace android::provider

