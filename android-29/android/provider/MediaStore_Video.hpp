#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class MediaStore_Video : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DEFAULT_SORT_ORDER();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2);
	};
} // namespace __jni_impl::android::provider

#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring MediaStore_Video::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Video",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void MediaStore_Video::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Video",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Video::query(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Video",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Video : public __jni_impl::android::provider::MediaStore_Video
	{
	public:
		MediaStore_Video(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Video()
		{
			__constructor();
		}
	};
} // namespace android::provider

