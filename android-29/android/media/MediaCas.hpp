#pragma once

#include "../../JByteArray.hpp"
#include "../../JArray.hpp"
#include "./MediaCas_Session.def.hpp"
#include "../os/Handler.def.hpp"
#include "../../JString.hpp"
#include "./MediaCas.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline MediaCas::MediaCas(jint arg0)
		: JObject(
			"android.media.MediaCas",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline JArray MediaCas::enumeratePlugins()
	{
		return callStaticObjectMethod(
			"android.media.MediaCas",
			"enumeratePlugins",
			"()[Landroid/media/MediaCas$PluginDescriptor;"
		);
	}
	inline jboolean MediaCas::isSystemIdSupported(jint arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.MediaCas",
			"isSystemIdSupported",
			"(I)Z",
			arg0
		);
	}
	inline void MediaCas::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline android::media::MediaCas_Session MediaCas::openSession() const
	{
		return callObjectMethod(
			"openSession",
			"()Landroid/media/MediaCas$Session;"
		);
	}
	inline void MediaCas::processEmm(JByteArray arg0) const
	{
		callMethod<void>(
			"processEmm",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void MediaCas::processEmm(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"processEmm",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void MediaCas::provision(JString arg0) const
	{
		callMethod<void>(
			"provision",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void MediaCas::refreshEntitlements(jint arg0, JByteArray arg1) const
	{
		callMethod<void>(
			"refreshEntitlements",
			"(I[B)V",
			arg0,
			arg1.object<jbyteArray>()
		);
	}
	inline void MediaCas::sendEvent(jint arg0, jint arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"sendEvent",
			"(II[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	inline void MediaCas::setEventListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setEventListener",
			"(Landroid/media/MediaCas$EventListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void MediaCas::setPrivateData(JByteArray arg0) const
	{
		callMethod<void>(
			"setPrivateData",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
