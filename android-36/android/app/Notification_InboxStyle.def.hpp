#pragma once

#include "./Notification_Style.def.hpp"

namespace android::app
{
	class Notification_Builder;
}
class JString;

namespace android::app
{
	class Notification_InboxStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Notification_InboxStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_InboxStyle(QJniObject obj) : android::app::Notification_Style(obj) {}
		
		// Constructors
		Notification_InboxStyle();
		Notification_InboxStyle(android::app::Notification_Builder arg0);
		
		// Methods
		android::app::Notification_InboxStyle addLine(JString arg0) const;
		android::app::Notification_InboxStyle setBigContentTitle(JString arg0) const;
		android::app::Notification_InboxStyle setSummaryText(JString arg0) const;
	};
} // namespace android::app

