#include "./session/MediaSessionManager_RemoteUserInfo.hpp"
#include "../os/Bundle.hpp"
#include "./MediaSession2_ControllerInfo.hpp"

namespace android::media
{
	// Fields
	
	MediaSession2_ControllerInfo::MediaSession2_ControllerInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace android::media

