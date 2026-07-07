#pragma once

#include "./TracingConfig.def.hpp"
#include "../../java/io/OutputStream.def.hpp"
#include "./TracingController.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline TracingController::TracingController()
		: JObject(
			"android.webkit.TracingController",
			"()V"
		) {}
	
	// Methods
	inline android::webkit::TracingController TracingController::getInstance()
	{
		return callStaticObjectMethod(
			"android.webkit.TracingController",
			"getInstance",
			"()Landroid/webkit/TracingController;"
		);
	}
	inline jboolean TracingController::isTracing() const
	{
		return callMethod<jboolean>(
			"isTracing",
			"()Z"
		);
	}
	inline void TracingController::start(android::webkit::TracingConfig arg0) const
	{
		callMethod<void>(
			"start",
			"(Landroid/webkit/TracingConfig;)V",
			arg0.object()
		);
	}
	inline jboolean TracingController::stop(java::io::OutputStream arg0, JObject arg1) const
	{
		return callMethod<jboolean>(
			"stop",
			"(Ljava/io/OutputStream;Ljava/util/concurrent/Executor;)Z",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
