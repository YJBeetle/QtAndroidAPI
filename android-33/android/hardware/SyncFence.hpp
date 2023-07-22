#pragma once

#include "../os/Parcel.def.hpp"
#include "../../java/time/Duration.def.hpp"
#include "./SyncFence.def.hpp"

namespace android::hardware
{
	// Fields
	inline JObject SyncFence::CREATOR()
	{
		return getStaticObjectField(
			"android.hardware.SyncFence",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong SyncFence::SIGNAL_TIME_INVALID()
	{
		return getStaticField<jlong>(
			"android.hardware.SyncFence",
			"SIGNAL_TIME_INVALID"
		);
	}
	inline jlong SyncFence::SIGNAL_TIME_PENDING()
	{
		return getStaticField<jlong>(
			"android.hardware.SyncFence",
			"SIGNAL_TIME_PENDING"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean SyncFence::await(java::time::Duration arg0) const
	{
		return callMethod<jboolean>(
			"await",
			"(Ljava/time/Duration;)Z",
			arg0.object()
		);
	}
	inline jboolean SyncFence::awaitForever() const
	{
		return callMethod<jboolean>(
			"awaitForever",
			"()Z"
		);
	}
	inline void SyncFence::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint SyncFence::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong SyncFence::getSignalTime() const
	{
		return callMethod<jlong>(
			"getSignalTime",
			"()J"
		);
	}
	inline jboolean SyncFence::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	inline void SyncFence::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
