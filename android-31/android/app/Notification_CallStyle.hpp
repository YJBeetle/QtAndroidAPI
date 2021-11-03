#pragma once

#include "../../JObject.hpp"
#include "./Notification_Style.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::app
{
	class Person;
}
namespace android::graphics::drawable
{
	class Icon;
}

namespace android::app
{
	class Notification_CallStyle : public android::app::Notification_Style
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Notification_CallStyle(const char *className, const char *sig, Ts...agv) : android::app::Notification_Style(className, sig, std::forward<Ts>(agv)...) {}
		Notification_CallStyle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::app::Notification_CallStyle forIncomingCall(android::app::Person arg0, android::app::PendingIntent arg1, android::app::PendingIntent arg2);
		static android::app::Notification_CallStyle forOngoingCall(android::app::Person arg0, android::app::PendingIntent arg1);
		static android::app::Notification_CallStyle forScreeningCall(android::app::Person arg0, android::app::PendingIntent arg1, android::app::PendingIntent arg2);
		android::app::Notification_CallStyle setAnswerButtonColorHint(jint arg0);
		android::app::Notification_CallStyle setDeclineButtonColorHint(jint arg0);
		android::app::Notification_CallStyle setIsVideo(jboolean arg0);
		android::app::Notification_CallStyle setVerificationIcon(android::graphics::drawable::Icon arg0);
		android::app::Notification_CallStyle setVerificationText(jstring arg0);
	};
} // namespace android::app

