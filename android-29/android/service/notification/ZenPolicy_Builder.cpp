#include "./ZenPolicy.hpp"
#include "./ZenPolicy_Builder.hpp"

namespace android::service::notification
{
	// Fields
	
	ZenPolicy_Builder::ZenPolicy_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ZenPolicy_Builder::ZenPolicy_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.ZenPolicy$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject ZenPolicy_Builder::allowAlarms(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"allowAlarms",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowAllSounds()
	{
		return __thiz.callObjectMethod(
			"allowAllSounds",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowCalls(jint arg0)
	{
		return __thiz.callObjectMethod(
			"allowCalls",
			"(I)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowEvents(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"allowEvents",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowMedia(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"allowMedia",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowMessages(jint arg0)
	{
		return __thiz.callObjectMethod(
			"allowMessages",
			"(I)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowReminders(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"allowReminders",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowRepeatCallers(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"allowRepeatCallers",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::allowSystem(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"allowSystem",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/notification/ZenPolicy;"
		);
	}
	QAndroidJniObject ZenPolicy_Builder::disallowAllSounds()
	{
		return __thiz.callObjectMethod(
			"disallowAllSounds",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	QAndroidJniObject ZenPolicy_Builder::hideAllVisualEffects()
	{
		return __thiz.callObjectMethod(
			"hideAllVisualEffects",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showAllVisualEffects()
	{
		return __thiz.callObjectMethod(
			"showAllVisualEffects",
			"()Landroid/service/notification/ZenPolicy$Builder;"
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showBadges(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"showBadges",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showFullScreenIntent(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"showFullScreenIntent",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showInAmbientDisplay(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"showInAmbientDisplay",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showInNotificationList(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"showInNotificationList",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showLights(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"showLights",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showPeeking(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"showPeeking",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
	QAndroidJniObject ZenPolicy_Builder::showStatusBarIcons(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"showStatusBarIcons",
			"(Z)Landroid/service/notification/ZenPolicy$Builder;",
			arg0
		);
	}
} // namespace android::service::notification

