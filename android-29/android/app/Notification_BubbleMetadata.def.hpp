#pragma once

#include "../../JObject.hpp"

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
	class Notification_BubbleMetadata : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_BubbleMetadata(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Notification_BubbleMetadata(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean getAutoExpandBubble() const;
		android::app::PendingIntent getDeleteIntent() const;
		jint getDesiredHeight() const;
		jint getDesiredHeightResId() const;
		android::graphics::drawable::Icon getIcon() const;
		android::app::PendingIntent getIntent() const;
		jboolean isNotificationSuppressed() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

