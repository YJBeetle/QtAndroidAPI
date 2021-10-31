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
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_InboxStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_InboxStyle(QJniObject obj);
		
		// Constructors
		Notification_InboxStyle();
		Notification_InboxStyle(android::app::Notification_Builder arg0);
		
		// Methods
		android::app::Notification_InboxStyle addLine(jstring arg0);
		android::app::Notification_InboxStyle setBigContentTitle(jstring arg0);
		android::app::Notification_InboxStyle setSummaryText(jstring arg0);
	};
} // namespace android::app

