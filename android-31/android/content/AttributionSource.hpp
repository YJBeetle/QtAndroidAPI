#pragma once

#include "./Context.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AttributionSource.def.hpp"

namespace android::content
{
	// Fields
	inline JObject AttributionSource::CREATOR()
	{
		return getStaticObjectField(
			"android.content.AttributionSource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean AttributionSource::checkCallingUid() const
	{
		return callMethod<jboolean>(
			"checkCallingUid",
			"()Z"
		);
	}
	inline jint AttributionSource::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void AttributionSource::enforceCallingUid() const
	{
		callMethod<void>(
			"enforceCallingUid",
			"()V"
		);
	}
	inline jboolean AttributionSource::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString AttributionSource::getAttributionTag() const
	{
		return callObjectMethod(
			"getAttributionTag",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::AttributionSource AttributionSource::getNext() const
	{
		return callObjectMethod(
			"getNext",
			"()Landroid/content/AttributionSource;"
		);
	}
	inline JString AttributionSource::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint AttributionSource::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	inline jint AttributionSource::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AttributionSource::isTrusted(android::content::Context arg0) const
	{
		return callMethod<jboolean>(
			"isTrusted",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	inline JString AttributionSource::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AttributionSource::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

