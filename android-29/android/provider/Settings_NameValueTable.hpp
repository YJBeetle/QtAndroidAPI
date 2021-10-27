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
	class Settings_NameValueTable : public __JniBaseClass
	{
	public:
		// Fields
		static jstring NAME();
		static jstring VALUE();
		
		Settings_NameValueTable(QAndroidJniObject obj);
		// Constructors
		Settings_NameValueTable();
		
		// Methods
		static QAndroidJniObject getUriFor(android::net::Uri arg0, jstring arg1);
		static QAndroidJniObject getUriFor(android::net::Uri arg0, const QString &arg1);
	};
} // namespace android::provider

