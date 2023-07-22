#pragma once

#include "./RenderProcessGoneDetail.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline RenderProcessGoneDetail::RenderProcessGoneDetail()
		: JObject(
			"android.webkit.RenderProcessGoneDetail",
			"()V"
		) {}
	
	// Methods
	inline jboolean RenderProcessGoneDetail::didCrash() const
	{
		return callMethod<jboolean>(
			"didCrash",
			"()Z"
		);
	}
	inline jint RenderProcessGoneDetail::rendererPriorityAtExit() const
	{
		return callMethod<jint>(
			"rendererPriorityAtExit",
			"()I"
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
