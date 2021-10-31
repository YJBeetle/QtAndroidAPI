#include "./session/MediaSessionManager_RemoteUserInfo.hpp"
#include "../os/Bundle.hpp"
#include "./MediaSession2_ControllerInfo.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaSession2_ControllerInfo::MediaSession2_ControllerInfo(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MediaSession2_ControllerInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::os::Bundle MediaSession2_ControllerInfo::getConnectionHints()
	{
		return callObjectMethod(
			"getConnectionHints",
			"()Landroid/os/Bundle;"
		);
	}
	jstring MediaSession2_ControllerInfo::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::media::session::MediaSessionManager_RemoteUserInfo MediaSession2_ControllerInfo::getRemoteUserInfo()
	{
		return callObjectMethod(
			"getRemoteUserInfo",
			"()Landroid/media/session/MediaSessionManager$RemoteUserInfo;"
		);
	}
	jint MediaSession2_ControllerInfo::getUid()
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jint MediaSession2_ControllerInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring MediaSession2_ControllerInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

