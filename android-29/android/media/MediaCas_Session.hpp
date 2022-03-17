#pragma once

#include "../../JByteArray.hpp"
#include "./MediaCas.def.hpp"
#include "../../JObject.hpp"
#include "../../java/util/ArrayList.def.hpp"
#include "./MediaCas_Session.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void MediaCas_Session::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jboolean MediaCas_Session::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void MediaCas_Session::processEcm(JByteArray arg0) const
	{
		callMethod<void>(
			"processEcm",
			"([B)V",
			arg0.object<jbyteArray>()
		);
	}
	inline void MediaCas_Session::processEcm(JByteArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"processEcm",
			"([BII)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2
		);
	}
	inline void MediaCas_Session::sendSessionEvent(jint arg0, jint arg1, JByteArray arg2) const
	{
		callMethod<void>(
			"sendSessionEvent",
			"(II[B)V",
			arg0,
			arg1,
			arg2.object<jbyteArray>()
		);
	}
	inline void MediaCas_Session::setPrivateData(JByteArray arg0) const
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
