#pragma once

#include "./PendingIntent.def.hpp"
#include "./Person.def.hpp"
#include "../graphics/drawable/Icon.def.hpp"
#include "../../JString.hpp"
#include "./Notification_CallStyle.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::app::Notification_CallStyle Notification_CallStyle::forIncomingCall(android::app::Person arg0, android::app::PendingIntent arg1, android::app::PendingIntent arg2)
	{
		return callStaticObjectMethod(
			"android.app.Notification$CallStyle",
			"forIncomingCall",
			"(Landroid/app/Person;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)Landroid/app/Notification$CallStyle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::app::Notification_CallStyle Notification_CallStyle::forOngoingCall(android::app::Person arg0, android::app::PendingIntent arg1)
	{
		return callStaticObjectMethod(
			"android.app.Notification$CallStyle",
			"forOngoingCall",
			"(Landroid/app/Person;Landroid/app/PendingIntent;)Landroid/app/Notification$CallStyle;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::app::Notification_CallStyle Notification_CallStyle::forScreeningCall(android::app::Person arg0, android::app::PendingIntent arg1, android::app::PendingIntent arg2)
	{
		return callStaticObjectMethod(
			"android.app.Notification$CallStyle",
			"forScreeningCall",
			"(Landroid/app/Person;Landroid/app/PendingIntent;Landroid/app/PendingIntent;)Landroid/app/Notification$CallStyle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::app::Notification_CallStyle Notification_CallStyle::setAnswerButtonColorHint(jint arg0) const
	{
		return callObjectMethod(
			"setAnswerButtonColorHint",
			"(I)Landroid/app/Notification$CallStyle;",
			arg0
		);
	}
	inline android::app::Notification_CallStyle Notification_CallStyle::setDeclineButtonColorHint(jint arg0) const
	{
		return callObjectMethod(
			"setDeclineButtonColorHint",
			"(I)Landroid/app/Notification$CallStyle;",
			arg0
		);
	}
	inline android::app::Notification_CallStyle Notification_CallStyle::setIsVideo(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsVideo",
			"(Z)Landroid/app/Notification$CallStyle;",
			arg0
		);
	}
	inline android::app::Notification_CallStyle Notification_CallStyle::setVerificationIcon(android::graphics::drawable::Icon arg0) const
	{
		return callObjectMethod(
			"setVerificationIcon",
			"(Landroid/graphics/drawable/Icon;)Landroid/app/Notification$CallStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_CallStyle Notification_CallStyle::setVerificationText(JString arg0) const
	{
		return callObjectMethod(
			"setVerificationText",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$CallStyle;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app

// Base class headers
#include "./Notification_Style.hpp"

