#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Files : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaStore_Files(QAndroidJniObject obj);
		// Constructors
		MediaStore_Files();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUri(const QString &arg0);
		static QAndroidJniObject getContentUri(jstring arg0, jlong arg1);
		static QAndroidJniObject getContentUri(const QString &arg0, jlong arg1);
	};
} // namespace android::provider

