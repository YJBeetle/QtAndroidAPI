#include "./Notification_Action.hpp"
#include "./PendingIntent.hpp"
#include "./RemoteInput.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Bundle.hpp"
#include "./Notification_Action_Builder.hpp"

namespace android::app
{
	// Fields
	
	Notification_Action_Builder::Notification_Action_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_Action_Builder::Notification_Action_Builder(android::app::Notification_Action &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$Builder",
			"(Landroid/app/Notification$Action;)V",
			arg0.__jniObject().object()
		);
	}
	Notification_Action_Builder::Notification_Action_Builder(android::graphics::drawable::Icon &arg0, jstring &arg1, android::app::PendingIntent &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$Builder",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	Notification_Action_Builder::Notification_Action_Builder(android::graphics::drawable::Icon &arg0, const QString &arg1, android::app::PendingIntent &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$Builder",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	Notification_Action_Builder::Notification_Action_Builder(jint &arg0, jstring &arg1, android::app::PendingIntent &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$Builder",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	Notification_Action_Builder::Notification_Action_Builder(jint &arg0, const QString &arg1, android::app::PendingIntent &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action$Builder",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Notification_Action_Builder::addExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"addExtras",
			"(Landroid/os/Bundle;)Landroid/app/Notification$Action$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Action_Builder::addRemoteInput(android::app::RemoteInput arg0)
	{
		return __thiz.callObjectMethod(
			"addRemoteInput",
			"(Landroid/app/RemoteInput;)Landroid/app/Notification$Action$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Action_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/Notification$Action;"
		);
	}
	QAndroidJniObject Notification_Action_Builder::extend(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"extend",
			"(Landroid/app/Notification$Action$Extender;)Landroid/app/Notification$Action$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Notification_Action_Builder::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Notification_Action_Builder::setAllowGeneratedReplies(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setAllowGeneratedReplies",
			"(Z)Landroid/app/Notification$Action$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_Builder::setContextual(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setContextual",
			"(Z)Landroid/app/Notification$Action$Builder;",
			arg0
		);
	}
	QAndroidJniObject Notification_Action_Builder::setSemanticAction(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setSemanticAction",
			"(I)Landroid/app/Notification$Action$Builder;",
			arg0
		);
	}
} // namespace android::app

