#include "./session/MediaSessionManager_RemoteUserInfo.hpp"
#include "../os/Bundle.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaSession2_ControllerInfo.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaSession2_ControllerInfo::MediaSession2_ControllerInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean MediaSession2_ControllerInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::os::Bundle MediaSession2_ControllerInfo::getConnectionHints()
	{
		return callObjectMethod(
			"getConnectionHints",
			"()Landroid/os/Bundle;"
		);
	}
	JString MediaSession2_ControllerInfo::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
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
	JString MediaSession2_ControllerInfo::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

