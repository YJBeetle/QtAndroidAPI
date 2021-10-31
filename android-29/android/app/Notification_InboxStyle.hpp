#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Notification_Style.hpp"

namespace android::app
{
	class Notification_Builder;
}

namespace android::app
{
	class Notification_InboxStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_InboxStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_InboxStyle(QAndroidJniObject obj);
		
		// Constructors
		Notification_InboxStyle();
		Notification_InboxStyle(android::app::Notification_Builder arg0);
		
		// Methods
		QAndroidJniObject addLine(jstring arg0);
		QAndroidJniObject setBigContentTitle(jstring arg0);
		QAndroidJniObject setSummaryText(jstring arg0);
	};
} // namespace android::app

