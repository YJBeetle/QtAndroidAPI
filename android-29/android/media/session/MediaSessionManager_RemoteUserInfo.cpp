#include "./MediaSessionManager_RemoteUserInfo.hpp"

namespace android::media::session
{
	// Fields
	
	MediaSessionManager_RemoteUserInfo::MediaSessionManager_RemoteUserInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaSessionManager_RemoteUserInfo::MediaSessionManager_RemoteUserInfo(jstring &arg0, jint &arg1, jint &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.media.session.MediaSessionManager$RemoteUserInfo",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	MediaSessionManager_RemoteUserInfo::MediaSessionManager_RemoteUserInfo(const QString &arg0, jint &arg1, jint &arg2)
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
} // namespace android::media::session

