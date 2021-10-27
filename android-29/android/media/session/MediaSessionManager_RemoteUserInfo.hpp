#pragma once

#ifndef ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO
#define ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::media::session
{
	class MediaSessionManager_RemoteUserInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jint arg1, jint arg2);
		void __constructor(const QString &arg0, jint arg1, jint arg2);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getPackageName();
		jint getPid();
		jint getUid();
		jint hashCode();
	};
} // namespace __jni_impl::android::media::session


namespace __jni_impl::android::media::session
{
	// Fields
	
	// Constructors
	void MediaSessionManager_RemoteUserInfo::__constructor(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaSessionManager$RemoteUserInfo",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void MediaSessionManager_RemoteUserInfo::__constructor(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaSessionManager$RemoteUserInfo",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	
	// Methods
	jboolean MediaSessionManager_RemoteUserInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MediaSessionManager_RemoteUserInfo::getPackageName()
	{
		return __thiz.callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaSessionManager_RemoteUserInfo::getPid()
	{
		return __thiz.callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	jint MediaSessionManager_RemoteUserInfo::getUid()
	{
		return __thiz.callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jint MediaSessionManager_RemoteUserInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace __jni_impl::android::media::session

namespace android::media::session
{
	class MediaSessionManager_RemoteUserInfo : public __jni_impl::android::media::session::MediaSessionManager_RemoteUserInfo
	{
	public:
		MediaSessionManager_RemoteUserInfo(QAndroidJniObject obj) { __thiz = obj; }
		MediaSessionManager_RemoteUserInfo(jstring arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::media::session

#endif // ANDROID_MEDIA_SESSION_MEDIASESSIONMANAGER_REMOTEUSERINFO

