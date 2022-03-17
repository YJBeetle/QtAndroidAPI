#pragma once

#include "../../content/Context.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./SliceMetrics.def.hpp"

namespace android::app::slice
{
	// Fields
	
	// Constructors
	inline SliceMetrics::SliceMetrics(android::content::Context arg0, android::net::Uri arg1)
		: JObject(
			"android.app.slice.SliceMetrics",
			"(Landroid/content/Context;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline void SliceMetrics::logHidden() const
	{
		callMethod<void>(
			"logHidden",
			"()V"
		);
	}
	inline void SliceMetrics::logTouch(jint arg0, android::net::Uri arg1) const
	{
		callMethod<void>(
			"logTouch",
			"(ILandroid/net/Uri;)V",
			arg0,
			arg1.object()
		);
	}
	inline void SliceMetrics::logVisible() const
	{
		callMethod<void>(
			"logVisible",
			"()V"
		);
	}
} // namespace android::app::slice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::slice;
#endif
