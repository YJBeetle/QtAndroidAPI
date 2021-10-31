#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentSender.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"
#include "./PendingIntent.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject PendingIntent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.PendingIntent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PendingIntent::FLAG_CANCEL_CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_CANCEL_CURRENT"
		);
	}
	jint PendingIntent::FLAG_IMMUTABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_IMMUTABLE"
		);
	}
	jint PendingIntent::FLAG_NO_CREATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_NO_CREATE"
		);
	}
	jint PendingIntent::FLAG_ONE_SHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_ONE_SHOT"
		);
	}
	jint PendingIntent::FLAG_UPDATE_CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_UPDATE_CURRENT"
		);
	}
	
	// QAndroidJniObject forward
	PendingIntent::PendingIntent(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject PendingIntent::getActivities(android::content::Context arg0, jint arg1, jarray arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivities",
			"(Landroid/content/Context;I[Landroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject PendingIntent::getActivities(android::content::Context arg0, jint arg1, jarray arg2, jint arg3, android::os::Bundle arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivities",
			"(Landroid/content/Context;I[Landroid/content/Intent;ILandroid/os/Bundle;)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	QAndroidJniObject PendingIntent::getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivity",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	QAndroidJniObject PendingIntent::getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3, android::os::Bundle arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivity",
			"(Landroid/content/Context;ILandroid/content/Intent;ILandroid/os/Bundle;)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3,
			arg4.object()
		);
	}
	QAndroidJniObject PendingIntent::getBroadcast(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getBroadcast",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	QAndroidJniObject PendingIntent::getForegroundService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getForegroundService",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	QAndroidJniObject PendingIntent::getService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getService",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	QAndroidJniObject PendingIntent::readPendingIntentOrNullFromParcel(android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"readPendingIntentOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/app/PendingIntent;",
			arg0.object()
		);
	}
	void PendingIntent::writePendingIntentOrNullToParcel(android::app::PendingIntent arg0, android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.PendingIntent",
			"writePendingIntentOrNullToParcel",
			"(Landroid/app/PendingIntent;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void PendingIntent::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jint PendingIntent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PendingIntent::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring PendingIntent::getCreatorPackage()
	{
		return callObjectMethod(
			"getCreatorPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PendingIntent::getCreatorUid()
	{
		return callMethod<jint>(
			"getCreatorUid",
			"()I"
		);
	}
	QAndroidJniObject PendingIntent::getCreatorUserHandle()
	{
		return callObjectMethod(
			"getCreatorUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	QAndroidJniObject PendingIntent::getIntentSender()
	{
		return callObjectMethod(
			"getIntentSender",
			"()Landroid/content/IntentSender;"
		);
	}
	jstring PendingIntent::getTargetPackage()
	{
		return callObjectMethod(
			"getTargetPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PendingIntent::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void PendingIntent::send()
	{
		callMethod<void>(
			"send",
			"()V"
		);
	}
	void PendingIntent::send(jint arg0)
	{
		callMethod<void>(
			"send",
			"(I)V",
			arg0
		);
	}
	void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2)
	{
		callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void PendingIntent::send(jint arg0, __JniBaseClass arg1, android::os::Handler arg2)
	{
		callMethod<void>(
			"send",
			"(ILandroid/app/PendingIntent$OnFinished;Landroid/os/Handler;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4)
	{
		callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4, jstring arg5)
	{
		callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5
		);
	}
	void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2, __JniBaseClass arg3, android::os::Handler arg4, jstring arg5, android::os::Bundle arg6)
	{
		callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5,
			arg6.object()
		);
	}
	jstring PendingIntent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void PendingIntent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

