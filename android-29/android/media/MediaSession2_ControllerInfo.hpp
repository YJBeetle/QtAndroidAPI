#pragma once

#ifndef ANDROID_MEDIA_MEDIASESSION2_CONTROLLERINFO
#define ANDROID_MEDIA_MEDIASESSION2_CONTROLLERINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media::session
{
	class MediaSessionManager_RemoteUserInfo;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media
{
	class MediaSession2_ControllerInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jstring getPackageName();
		QAndroidJniObject getRemoteUserInfo();
		QAndroidJniObject getConnectionHints();
		jint getUid();
	};
} // namespace __jni_impl::android::media

#include "session/MediaSessionManager_RemoteUserInfo.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void MediaSession2_ControllerInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MediaSession2$ControllerInfo",
			"(V)V");
	}
	
	// Methods
	jboolean MediaSession2_ControllerInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MediaSession2_ControllerInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaSession2_ControllerInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring MediaSession2_ControllerInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaSession2_ControllerInfo::getRemoteUserInfo()
	{
		return __thiz.callObjectMethod(
			"getRemoteUserInfo",
			"()Landroid/media/session/MediaSessionManager$RemoteUserInfo;"
		);
	}
	QAndroidJniObject MediaSession2_ControllerInfo::getConnectionHints()
	{
		return __thiz.callObjectMethod(
			"getConnectionHints",
			"()Landroid/os/Bundle;"
		);
	}
	jint MediaSession2_ControllerInfo::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MediaSession2_ControllerInfo : public __jni_impl::android::media::MediaSession2_ControllerInfo
	{
	public:
		MediaSession2_ControllerInfo(QAndroidJniObject obj) { __thiz = obj; }
		MediaSession2_ControllerInfo()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_MEDIASESSION2_CONTROLLERINFO

