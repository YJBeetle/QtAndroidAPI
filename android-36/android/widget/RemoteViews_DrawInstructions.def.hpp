#pragma once

#include "../../JObject.hpp"

namespace android::widget
{
	class RemoteViews_DrawInstructions : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteViews_DrawInstructions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews_DrawInstructions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jlong getSupportedVersion();
	};
} // namespace android::widget

