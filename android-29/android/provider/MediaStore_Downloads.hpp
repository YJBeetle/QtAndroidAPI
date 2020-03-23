#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_DOWNLOADS
#define ANDROID_PROVIDER_MEDIASTORE_DOWNLOADS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Downloads : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_TYPE();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject MediaStore_Downloads::CONTENT_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Downloads",
			"CONTENT_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaStore_Downloads::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Downloads",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject MediaStore_Downloads::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Downloads",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;");
	}
	
	// Constructors
	void MediaStore_Downloads::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Downloads",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject MediaStore_Downloads::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Downloads",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Downloads : public __jni_impl::android::provider::MediaStore_Downloads
	{
	public:
		MediaStore_Downloads(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Downloads()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_DOWNLOADS

