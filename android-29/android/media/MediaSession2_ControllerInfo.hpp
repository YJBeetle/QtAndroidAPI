#pragma once

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
		QAndroidJniObject getConnectionHints();
		jstring getPackageName();
		QAndroidJniObject getRemoteUserInfo();
		jint getUid();
		jint hashCode();
		jstring toString();
	};
} // namespace __jni_impl::android::media

#include "./session/MediaSessionManager_RemoteUserInfo.hpp"
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
	QAndroidJniObject MediaSession2_ControllerInfo::getConnectionHints()
	{
		return __thiz.callObjectMethod(
			"getConnectionHints",
			"()Landroid/os/Bundle;"
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
	jint MediaSession2_ControllerInfo::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jint MediaSession2_ControllerInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring MediaSession2_ControllerInfo::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

