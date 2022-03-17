#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SliceSpec.def.hpp"

namespace android::app::slice
{
	// Fields
	inline JObject SliceSpec::CREATOR()
	{
		return getStaticObjectField(
			"android.app.slice.SliceSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline SliceSpec::SliceSpec(JString arg0, jint arg1)
		: JObject(
			"android.app.slice.SliceSpec",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jboolean SliceSpec::canRender(android::app::slice::SliceSpec arg0) const
	{
		return callMethod<jboolean>(
			"canRender",
			"(Landroid/app/slice/SliceSpec;)Z",
			arg0.object()
		);
	}
	inline jint SliceSpec::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SliceSpec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SliceSpec::getRevision() const
	{
		return callMethod<jint>(
			"getRevision",
			"()I"
		);
	}
	inline JString SliceSpec::getType() const
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		);
	}
	inline JString SliceSpec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SliceSpec::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::slice

// Base class headers

