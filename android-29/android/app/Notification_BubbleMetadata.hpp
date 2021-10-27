#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class Notification_BubbleMetadata : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Notification_BubbleMetadata(QAndroidJniObject obj);
		// Constructors
		Notification_BubbleMetadata() = default;
		
		// Methods
		jint describeContents();
		jboolean getAutoExpandBubble();
		QAndroidJniObject getDeleteIntent();
		jint getDesiredHeight();
		jint getDesiredHeightResId();
		QAndroidJniObject getIcon();
		QAndroidJniObject getIntent();
		jboolean isNotificationSuppressed();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

