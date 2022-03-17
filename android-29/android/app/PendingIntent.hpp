#pragma once

#include "../../JArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../content/IntentSender.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/UserHandle.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PendingIntent.def.hpp"

namespace android::app
{
	// Fields
	inline JObject PendingIntent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.PendingIntent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PendingIntent::FLAG_CANCEL_CURRENT()
	{
		return getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_CANCEL_CURRENT"
		);
	}
	inline jint PendingIntent::FLAG_IMMUTABLE()
	{
		return getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_IMMUTABLE"
		);
	}
	inline jint PendingIntent::FLAG_NO_CREATE()
	{
		return getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_NO_CREATE"
		);
	}
	inline jint PendingIntent::FLAG_ONE_SHOT()
	{
		return getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_ONE_SHOT"
		);
	}
	inline jint PendingIntent::FLAG_UPDATE_CURRENT()
	{
		return getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_UPDATE_CURRENT"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::app::PendingIntent PendingIntent::getActivities(android::content::Context arg0, jint arg1, JArray arg2, jint arg3)
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
	inline android::app::PendingIntent PendingIntent::getActivities(android::content::Context arg0, jint arg1, JArray arg2, jint arg3, android::os::Bundle arg4)
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
	inline android::app::PendingIntent PendingIntent::getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
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
	inline android::app::PendingIntent PendingIntent::getActivity(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3, android::os::Bundle arg4)
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
	inline android::app::PendingIntent PendingIntent::getBroadcast(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
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
	inline android::app::PendingIntent PendingIntent::getForegroundService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
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
	inline android::app::PendingIntent PendingIntent::getService(android::content::Context arg0, jint arg1, android::content::Intent arg2, jint arg3)
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
	inline android::app::PendingIntent PendingIntent::readPendingIntentOrNullFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.app.PendingIntent",
			"readPendingIntentOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/app/PendingIntent;",
			arg0.object()
		);
	}
	inline void PendingIntent::writePendingIntentOrNullToParcel(android::app::PendingIntent arg0, android::os::Parcel arg1)
	{
		callStaticMethod<void>(
			"android.app.PendingIntent",
			"writePendingIntentOrNullToParcel",
			"(Landroid/app/PendingIntent;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void PendingIntent::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline jint PendingIntent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PendingIntent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString PendingIntent::getCreatorPackage() const
	{
		return callObjectMethod(
			"getCreatorPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint PendingIntent::getCreatorUid() const
	{
		return callMethod<jint>(
			"getCreatorUid",
			"()I"
		);
	}
	inline android::os::UserHandle PendingIntent::getCreatorUserHandle() const
	{
		return callObjectMethod(
			"getCreatorUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	inline android::content::IntentSender PendingIntent::getIntentSender() const
	{
		return callObjectMethod(
			"getIntentSender",
			"()Landroid/content/IntentSender;"
		);
	}
	inline JString PendingIntent::getTargetPackage() const
	{
		return callObjectMethod(
			"getTargetPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint PendingIntent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void PendingIntent::send() const
	{
		callMethod<void>(
			"send",
			"()V"
		);
	}
	inline void PendingIntent::send(jint arg0) const
	{
		callMethod<void>(
			"send",
			"(I)V",
			arg0
		);
	}
	inline void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2) const
	{
		callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline void PendingIntent::send(jint arg0, JObject arg1, android::os::Handler arg2) const
	{
		callMethod<void>(
			"send",
			"(ILandroid/app/PendingIntent$OnFinished;Landroid/os/Handler;)V",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4) const
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
	inline void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, JString arg5) const
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
	inline void PendingIntent::send(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, JString arg5, android::os::Bundle arg6) const
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
	inline JString PendingIntent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PendingIntent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
