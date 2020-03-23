#pragma once

#ifndef ANDROID_PROVIDER_MEDIASTORE_FILES
#define ANDROID_PROVIDER_MEDIASTORE_FILES

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Files : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUri(jstring arg0, jlong arg1);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void MediaStore_Files::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Files",
			"()V");
	}
	
	// Methods
	QAndroidJniObject MediaStore_Files::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
	}
	QAndroidJniObject MediaStore_Files::getContentUri(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Files : public __jni_impl::android::provider::MediaStore_Files
	{
	public:
		MediaStore_Files(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Files()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_MEDIASTORE_FILES

