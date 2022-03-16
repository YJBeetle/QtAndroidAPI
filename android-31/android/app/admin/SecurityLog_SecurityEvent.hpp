#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "./SecurityLog_SecurityEvent.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JObject SecurityLog_SecurityEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.SecurityLog$SecurityEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SecurityLog_SecurityEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SecurityLog_SecurityEvent::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject SecurityLog_SecurityEvent::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		);
	}
	inline jlong SecurityLog_SecurityEvent::getId() const
	{
		return callMethod<jlong>(
			"getId",
			"()J"
		);
	}
	inline jint SecurityLog_SecurityEvent::getLogLevel() const
	{
		return callMethod<jint>(
			"getLogLevel",
			"()I"
		);
	}
	inline jint SecurityLog_SecurityEvent::getTag() const
	{
		return callMethod<jint>(
			"getTag",
			"()I"
		);
	}
	inline jlong SecurityLog_SecurityEvent::getTimeNanos() const
	{
		return callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	inline jint SecurityLog_SecurityEvent::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void SecurityLog_SecurityEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

// Base class headers

