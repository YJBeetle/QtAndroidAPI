#pragma once

#include "./Notification_Style.hpp"

namespace android::app
{
	class Notification_Builder;
}
class JString;

namespace android::app
{
	class Notification_BigTextStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_BigTextStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_BigTextStyle(QAndroidJniObject obj) : android::app::Notification_Style(obj) {}
		
		// Constructors
		Notification_BigTextStyle();
		Notification_BigTextStyle(android::app::Notification_Builder arg0);
		
		// Methods
		android::app::Notification_BigTextStyle bigText(JString arg0) const;
		android::app::Notification_BigTextStyle setBigContentTitle(JString arg0) const;
		android::app::Notification_BigTextStyle setSummaryText(JString arg0) const;
	};
} // namespace android::app

