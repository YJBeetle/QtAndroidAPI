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
		
		RemoteViews_RemoteResponse(QAndroidJniObject obj);
		// Constructors
		RemoteViews_RemoteResponse();
		
		// Methods
		static QAndroidJniObject fromFillInIntent(android::content::Intent arg0);
		static QAndroidJniObject fromPendingIntent(android::app::PendingIntent arg0);
		QAndroidJniObject addSharedElement(jint arg0, jstring arg1);
		QAndroidJniObject addSharedElement(jint arg0, const QString &arg1);
	};
} // namespace android::widget

