#include "../../os/Bundle.hpp"
#include "./MediaBrowserService_BrowserRoot.hpp"

namespace android::service::media
{
	// Fields
	jstring MediaBrowserService_BrowserRoot::EXTRA_OFFLINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_OFFLINE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaBrowserService_BrowserRoot::EXTRA_RECENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_RECENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaBrowserService_BrowserRoot::EXTRA_SUGGESTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"EXTRA_SUGGESTED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	MediaBrowserService_BrowserRoot::MediaBrowserService_BrowserRoot(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaBrowserService_BrowserRoot::MediaBrowserService_BrowserRoot(jstring &arg0, android::os::Bundle &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	MediaBrowserService_BrowserRoot::MediaBrowserService_BrowserRoot(const QString &arg0, android::os::Bundle &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.media.MediaBrowserService$BrowserRoot",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject MediaBrowserService_BrowserRoot::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring MediaBrowserService_BrowserRoot::getRootId()
	{
		return __thiz.callObjectMethod(
			"getRootId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::service::media

