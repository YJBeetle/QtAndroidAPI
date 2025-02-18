#pragma once

#include "../../JObject.hpp"

namespace android::widget
{
	class RemoteViews_DrawInstructions;
}

namespace android::widget
{
	class RemoteViews_DrawInstructions_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteViews_DrawInstructions_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews_DrawInstructions_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoteViews_DrawInstructions_Builder(JObject arg0);
		
		// Methods
		android::widget::RemoteViews_DrawInstructions build() const;
	};
} // namespace android::widget

