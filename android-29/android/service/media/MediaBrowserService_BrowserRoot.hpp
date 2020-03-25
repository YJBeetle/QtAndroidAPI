#pragma once

#ifndef ANDROID_SERVICE_MEDIA_MEDIABROWSERSERVICE_BROWSERROOT
#define ANDROID_SERVICE_MEDIA_MEDIABROWSERSERVICE_BROWSERROOT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::service::media
{
	class MediaBrowserService_BrowserRoot : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject EXTRA_OFFLINE();
		static QAndroidJniObject EXTRA_RECENT();
		static QAndroidJniObject EXTRA_SUGGESTED();
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::os::Bundle arg1);
		
		// Methods
		QAndroidJniObject getRootId();
		QAndroidJniObject getExtras();
	};
} // namespace __jni_impl::android::service::media

#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::media
{
	// Fields
	QAndroidJniObject MediaBrowserService_BrowserRoot::EXTRA_OFFLINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_OFFLINE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaBrowserService_BrowserRoot::EXTRA_RECENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_RECENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject MediaBrowserService_BrowserRoot::EXTRA_SUGGESTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_SUGGESTED",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void MediaBrowserService_BrowserRoot::__constructor(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject MediaBrowserService_BrowserRoot::getRootId()
	{
		return __thiz.callObjectMethod(
			"getRootId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject MediaBrowserService_BrowserRoot::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;");
	}
} // namespace __jni_impl::android::service::media

namespace android::service::media
{
	class MediaBrowserService_BrowserRoot : public __jni_impl::android::service::media::MediaBrowserService_BrowserRoot
	{
	public:
		MediaBrowserService_BrowserRoot(QAndroidJniObject obj) { __thiz = obj; }
		MediaBrowserService_BrowserRoot(jstring arg0, __jni_impl::android::os::Bundle arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::service::media

#endif // ANDROID_SERVICE_MEDIA_MEDIABROWSERSERVICE_BROWSERROOT

