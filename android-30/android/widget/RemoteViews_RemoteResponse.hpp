#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Intent;
}

namespace android::widget
{
	class RemoteViews_RemoteResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteViews_RemoteResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteViews_RemoteResponse(QAndroidJniObject obj);
		
		// Constructors
		RemoteViews_RemoteResponse();
		
		// Methods
		static android::widget::RemoteViews_RemoteResponse fromFillInIntent(android::content::Intent arg0);
		static android::widget::RemoteViews_RemoteResponse fromPendingIntent(android::app::PendingIntent arg0);
		android::widget::RemoteViews_RemoteResponse addSharedElement(jint arg0, jstring arg1);
	};
} // namespace android::widget

