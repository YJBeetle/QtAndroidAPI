#include "../../JArray.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../content/IntentSender.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PendingIntent.hpp"

namespace android::app
{
	// Fields
	JObject PendingIntent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.PendingIntent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint PendingIntent::FLAG_CANCEL_CURRENT()
	{
		return getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_CANCEL_CURRENT"
		);
	}
	jint PendingIntent::FLAG_IMMUTABLE()
	{
		return getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_IMMUTABLE"
		);
	}
	jint PendingIntent::FLAG_NO_CREATE()
	{
		return getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_NO_CREATE"
		);
	}
	jint PendingIntent::FLAG_ONE_SHOT()
	{
		return getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_ONE_SHOT"
		);
	}
	jint PendingIntent::FLAG_UPDATE_CURRENT()
	{
		return getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_UPDATE_CURRENT"
		);
	}
	
	// QJniObject forward
	PendingIntent::PendingIntent(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::app::PendingIntent PendingIntent::getActivities(android::content::Context arg0, jint arg1, JArray arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivities",
			"(Landroid/content/Context;I[Landroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object<jarray>(),
			arg3
		);
	}
	android::app::PendingIntent PendingIntent::getActivities(android::content::Context arg0, jint arg1, JArray arg2, jint arg3, android::os::Bundle arg4)
	{
		return callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivities",
			"(Landroid/content/Context;I[Landroid/content/Intent;ILandroid/os/Bundle;)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object<jarray>(),
			arg3,
			arg4.object()
		);
	}
	android::app::PendingIntent PendingIntent::getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivity",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	android::app::PendingIntent PendingIntent::getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3, android::os::Bundle arg4)
	{
		return callStaticObjectMethod(
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
	android::app::PendingIntent PendingIntent::getBroadcast(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.app.PendingIntent",
			"getBroadcast",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	android::app::PendingIntent PendingIntent::getForegroundService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.app.PendingIntent",
			"getForegroundService",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	android::app::PendingIntent PendingIntent::getService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.app.PendingIntent",
			"getService",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	android::app::PendingIntent PendingIntent::readPendingIntentOrNullFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.app.PendingIntent",
			"readPendingIntentOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/app/PendingIntent;",
			arg0.object()
		);
	}
	void PendingIntent::writePendingIntentOrNullToParcel(android::app::PendingIntent arg0, android::os::Parcel arg1)
	{
		callStaticMethod<void>(
			"android.app.PendingIntent",
			"writePendingIntentOrNullToParcel",
			"(Landroid/app/PendingIntent;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void PendingIntent::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	jint PendingIntent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean PendingIntent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString PendingIntent::getCreatorPackage() const
	{
		return callObjectMethod(
			"getCreatorPackage",
			"()Ljava/lang/String;"
		);
	}
	jint PendingIntent::getCreatorUid() const
	{
		return callMethod<jint>(
			"getCreatorUid",
			"()I"
		);
	}
	android::os::UserHandle PendingIntent::getCreatorUserHandle() const
	{
		return callObjectMethod(
			"getCreatorUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	android::content::IntentSender PendingIntent::getIntentSender() const
	{
		return callObjectMethod(
			"getIntentSender",
			"()Landroid/content/IntentSender;"
		);
	}
	JString PendingIntent::getTargetPackage() const
	{
		return callObjectMethod(
			"getTargetPackage",
			"()Ljava/lang/String;"
		);
	}
	jint PendingIntent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void PendingIntent::send() const
	{
		callMethod<void>(
			"send",
			"()V"
		);
	}
	void PendingIntent::send(jint arg0) const
	{
		callMethod<void>(
			"send",
			"(I)V",
			arg0
		);
	}
	void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2) const
	{
		callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void PendingIntent::send(jint arg0, JObject arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"send",
			"(ILandroid/app/PendingIntent$OnFinished;Landroid/os/Handler;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4) const
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
	void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, JString arg5) const
	{
		callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object<jstring>()
		);
	}
	void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, JString arg5, android::os::Bundle arg6) const
	{
		callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object<jstring>(),
			arg6.object()
		);
	}
	JString PendingIntent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void PendingIntent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

