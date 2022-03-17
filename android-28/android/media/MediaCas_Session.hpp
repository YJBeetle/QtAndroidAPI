#pragma once

#include "../../JByteArray.hpp"
#include "./MediaCas.def.hpp"
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
