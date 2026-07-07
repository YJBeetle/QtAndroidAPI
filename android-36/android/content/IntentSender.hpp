#pragma once

#include "./Context.def.hpp"
#include "./Intent.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../os/UserHandle.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./IntentSender.def.hpp"

namespace android::content
{
	// Fields
	inline JObject IntentSender::CREATOR()
	{
		return getStaticObjectField(
			"android.content.IntentSender",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::content::IntentSender IntentSender::readIntentSenderOrNullFromParcel(android::os::Parcel arg0)
	{
		return callStaticObjectMethod(
			"android.content.IntentSender",
			"readIntentSenderOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/content/IntentSender;",
			arg0.object()
		);
	}
	inline void IntentSender::writeIntentSenderOrNullToParcel(android::content::IntentSender arg0, android::os::Parcel arg1)
	{
		callStaticMethod<void>(
			"android.content.IntentSender",
			"writeIntentSenderOrNullToParcel",
			"(Landroid/content/IntentSender;Landroid/os/Parcel;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline jint IntentSender::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean IntentSender::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString IntentSender::getCreatorPackage() const
	{
		return callObjectMethod(
			"getCreatorPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint IntentSender::getCreatorUid() const
	{
		return callMethod<jint>(
			"getCreatorUid",
			"()I"
		);
	}
	inline android::os::UserHandle IntentSender::getCreatorUserHandle() const
	{
		return callObjectMethod(
			"getCreatorUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	inline JString IntentSender::getTargetPackage() const
	{
		return callObjectMethod(
			"getTargetPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint IntentSender::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void IntentSender::sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4) const
	{
		callMethod<void>(
			"sendIntent",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/content/IntentSender$OnFinished;Landroid/os/Handler;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline void IntentSender::sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, JObject arg3, android::os::Handler arg4, JString arg5) const
	{
		callMethod<void>(
			"sendIntent",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/content/IntentSender$OnFinished;Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object(),
			arg4.object(),
			arg5.object<jstring>()
		);
	}
	inline void IntentSender::sendIntent(android::content::Context arg0, jint arg1, android::content::Intent arg2, JString arg3, android::os::Bundle arg4, JObject arg5, JObject arg6) const
	{
		callMethod<void>(
			"sendIntent",
			"(Landroid/content/Context;ILandroid/content/Intent;Ljava/lang/String;Landroid/os/Bundle;Ljava/util/concurrent/Executor;Landroid/content/IntentSender$OnFinished;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object<jstring>(),
			arg4.object(),
			arg5.object(),
			arg6.object()
		);
	}
	inline JString IntentSender::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void IntentSender::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
