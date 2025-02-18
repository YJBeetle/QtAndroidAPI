#pragma once

#include "./RemoteViews_DrawInstructions.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jlong RemoteViews_DrawInstructions::getSupportedVersion()
	{
		return callStaticMethod<jlong>(
			"android.widget.RemoteViews$DrawInstructions",
			"getSupportedVersion",
			"()J"
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
