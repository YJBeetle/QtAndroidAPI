#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MediaSessionManager_RemoteUserInfo.hpp"

namespace android::media::session
{
	// Fields
	
	// QJniObject forward
	MediaSessionManager_RemoteUserInfo::MediaSessionManager_RemoteUserInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaSessionManager_RemoteUserInfo::MediaSessionManager_RemoteUserInfo(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.media.session.MediaSessionManager$RemoteUserInfo",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean MediaSessionManager_RemoteUserInfo::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString MediaSessionManager_RemoteUserInfo::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jint MediaSessionManager_RemoteUserInfo::getPid()
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	jint MediaSessionManager_RemoteUserInfo::getUid()
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	jint MediaSessionManager_RemoteUserInfo::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::session

