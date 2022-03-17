#pragma once

#include "./session/MediaSessionManager_RemoteUserInfo.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./MediaSession2_ControllerInfo.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean MediaSession2_ControllerInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::Bundle MediaSession2_ControllerInfo::getConnectionHints() const
	{
		return callObjectMethod(
			"getConnectionHints",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString MediaSession2_ControllerInfo::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::media::session::MediaSessionManager_RemoteUserInfo MediaSession2_ControllerInfo::getRemoteUserInfo() const
	{
		return callObjectMethod(
			"getRemoteUserInfo",
			"()Landroid/media/session/MediaSessionManager$RemoteUserInfo;"
		);
	}
	inline jint MediaSession2_ControllerInfo::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	inline jint MediaSession2_ControllerInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MediaSession2_ControllerInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
