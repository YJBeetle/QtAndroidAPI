#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Intent;
}
class JString;

namespace android::widget
{
	class RemoteViews_RemoteResponse : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteViews_RemoteResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews_RemoteResponse(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		RemoteViews_RemoteResponse();
		
		// Methods
		static android::widget::RemoteViews_RemoteResponse fromFillInIntent(android::content::Intent arg0);
		static android::widget::RemoteViews_RemoteResponse fromPendingIntent(android::app::PendingIntent arg0);
		android::widget::RemoteViews_RemoteResponse addSharedElement(jint arg0, JString arg1) const;
	};
} // namespace android::widget

