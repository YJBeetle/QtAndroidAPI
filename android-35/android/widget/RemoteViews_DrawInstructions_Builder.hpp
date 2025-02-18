#pragma once

#include "./RemoteViews_DrawInstructions.def.hpp"
#include "./RemoteViews_DrawInstructions_Builder.def.hpp"

namespace android::widget
{
	// Fields
	
	// Constructors
	inline RemoteViews_DrawInstructions_Builder::RemoteViews_DrawInstructions_Builder(JObject arg0)
		: JObject(
			"android.widget.RemoteViews$DrawInstructions$Builder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::widget::RemoteViews_DrawInstructions RemoteViews_DrawInstructions_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/widget/RemoteViews$DrawInstructions;"
		);
	}
} // namespace android::widget

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::widget;
#endif
