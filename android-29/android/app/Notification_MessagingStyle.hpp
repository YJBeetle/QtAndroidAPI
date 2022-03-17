#pragma once

#include "./Notification_MessagingStyle_Message.def.hpp"
#include "./Person.def.hpp"
#include "../../JString.hpp"
#include "./Notification_MessagingStyle.def.hpp"

namespace android::app
{
	// Fields
	inline jint Notification_MessagingStyle::MAXIMUM_RETAINED_MESSAGES()
	{
		return getStaticField<jint>(
			"android.app.Notification$MessagingStyle",
			"MAXIMUM_RETAINED_MESSAGES"
		);
	}
	
	// Constructors
	inline Notification_MessagingStyle::Notification_MessagingStyle(android::app::Person arg0)
		: android::app::Notification_Style(
			"android.app.Notification$MessagingStyle",
			"(Landroid/app/Person;)V",
			arg0.object()
		) {}
	inline Notification_MessagingStyle::Notification_MessagingStyle(JString arg0)
		: android::app::Notification_Style(
			"android.app.Notification$MessagingStyle",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::Notification_MessagingStyle Notification_MessagingStyle::addHistoricMessage(android::app::Notification_MessagingStyle_Message arg0) const
	{
		return callObjectMethod(
			"addHistoricMessage",
			"(Landroid/app/Notification$MessagingStyle$Message;)Landroid/app/Notification$MessagingStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_MessagingStyle Notification_MessagingStyle::addMessage(android::app::Notification_MessagingStyle_Message arg0) const
	{
		return callObjectMethod(
			"addMessage",
			"(Landroid/app/Notification$MessagingStyle$Message;)Landroid/app/Notification$MessagingStyle;",
			arg0.object()
		);
	}
	inline android::app::Notification_MessagingStyle Notification_MessagingStyle::addMessage(JString arg0, jlong arg1, android::app::Person arg2) const
	{
		return callObjectMethod(
			"addMessage",
			"(Ljava/lang/CharSequence;JLandroid/app/Person;)Landroid/app/Notification$MessagingStyle;",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		);
	}
	inline android::app::Notification_MessagingStyle Notification_MessagingStyle::addMessage(JString arg0, jlong arg1, JString arg2) const
	{
		return callObjectMethod(
			"addMessage",
			"(Ljava/lang/CharSequence;JLjava/lang/CharSequence;)Landroid/app/Notification$MessagingStyle;",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline JString Notification_MessagingStyle::getConversationTitle() const
	{
		return callObjectMethod(
			"getConversationTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JObject Notification_MessagingStyle::getHistoricMessages() const
	{
		return callObjectMethod(
			"getHistoricMessages",
			"()Ljava/util/List;"
		);
	}
	inline JObject Notification_MessagingStyle::getMessages() const
	{
		return callObjectMethod(
			"getMessages",
			"()Ljava/util/List;"
		);
	}
	inline android::app::Person Notification_MessagingStyle::getUser() const
	{
		return callObjectMethod(
			"getUser",
			"()Landroid/app/Person;"
		);
	}
	inline JString Notification_MessagingStyle::getUserDisplayName() const
	{
		return callObjectMethod(
			"getUserDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean Notification_MessagingStyle::isGroupConversation() const
	{
		return callMethod<jboolean>(
			"isGroupConversation",
			"()Z"
		);
	}
	inline android::app::Notification_MessagingStyle Notification_MessagingStyle::setConversationTitle(JString arg0) const
	{
		return callObjectMethod(
			"setConversationTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/Notification$MessagingStyle;",
			arg0.object<jstring>()
		);
	}
	inline android::app::Notification_MessagingStyle Notification_MessagingStyle::setGroupConversation(jboolean arg0) const
	{
		return callObjectMethod(
			"setGroupConversation",
			"(Z)Landroid/app/Notification$MessagingStyle;",
			arg0
		);
	}
} // namespace android::app

// Base class headers
#include "./Notification_Style.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
