#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Audio_Artists_Albums : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaStore_Audio_Artists_Albums(QAndroidJniObject obj);
		// Constructors
		MediaStore_Audio_Artists_Albums();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0, jlong arg1);
		static QAndroidJniObject getContentUri(const QString &arg0, jlong arg1);
	};
} // namespace android::provider

