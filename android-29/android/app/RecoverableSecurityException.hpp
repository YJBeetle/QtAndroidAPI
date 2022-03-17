#pragma once

#include "./RemoteAction.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./RecoverableSecurityException.def.hpp"

namespace android::app
{
	// Fields
	inline JObject RecoverableSecurityException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.RecoverableSecurityException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline RecoverableSecurityException::RecoverableSecurityException(JThrowable arg0, JString arg1, android::app::RemoteAction arg2)
		: java::lang::SecurityException(
			"android.app.RecoverableSecurityException",
			"(Ljava/lang/Throwable;Ljava/lang/CharSequence;Landroid/app/RemoteAction;)V",
			arg0.object<jthrowable>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	inline jint RecoverableSecurityException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::RemoteAction RecoverableSecurityException::getUserAction() const
	{
		return callObjectMethod(
			"getUserAction",
			"()Landroid/app/RemoteAction;"
		);
	}
	inline JString RecoverableSecurityException::getUserMessage() const
	{
		return callObjectMethod(
			"getUserMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void RecoverableSecurityException::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
#include "../../java/lang/Exception.hpp"
#include "../../java/lang/RuntimeException.hpp"
#include "../../java/lang/SecurityException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
