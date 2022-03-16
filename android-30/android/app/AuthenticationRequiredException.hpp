#pragma once

#include "./PendingIntent.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JThrowable.hpp"
#include "./AuthenticationRequiredException.def.hpp"

namespace android::app
{
	// Fields
	inline JObject AuthenticationRequiredException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.AuthenticationRequiredException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AuthenticationRequiredException::AuthenticationRequiredException(JThrowable arg0, android::app::PendingIntent arg1)
		: java::lang::SecurityException(
			"android.app.AuthenticationRequiredException",
			"(Ljava/lang/Throwable;Landroid/app/PendingIntent;)V",
			arg0.object<jthrowable>(),
			arg1.object()
		) {}
	
	// Methods
	inline jint AuthenticationRequiredException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::app::PendingIntent AuthenticationRequiredException::getUserAction() const
	{
		return callObjectMethod(
			"getUserAction",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline void AuthenticationRequiredException::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

