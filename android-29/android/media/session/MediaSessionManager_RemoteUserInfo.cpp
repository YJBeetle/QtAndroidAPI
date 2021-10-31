#include "./MediaSessionManager_RemoteUserInfo.hpp"

namespace android::media::session
{
	// Fields
	
	// QAndroidJniObject forward
	MediaSessionManager_RemoteUserInfo::MediaSessionManager_RemoteUserInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaSessionManager_RemoteUserInfo::MediaSessionManager_RemoteUserInfo(jstring arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.media.session.MediaSessionManager$RemoteUserInfo",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jboolean MediaSessionManager_RemoteUserInfo::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring MediaSessionManager_RemoteUserInfo::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
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

