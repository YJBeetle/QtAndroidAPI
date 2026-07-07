#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MediaSessionManager_RemoteUserInfo.def.hpp"

namespace android::media::session
{
	// Fields
	
	// Constructors
	inline MediaSessionManager_RemoteUserInfo::MediaSessionManager_RemoteUserInfo(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.media.session.MediaSessionManager$RemoteUserInfo",
			"(Ljava/lang/String;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline jboolean MediaSessionManager_RemoteUserInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString MediaSessionManager_RemoteUserInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint MediaSessionManager_RemoteUserInfo::getPid() const
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	inline jint MediaSessionManager_RemoteUserInfo::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	inline jint MediaSessionManager_RemoteUserInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::media::session

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::session;
#endif
