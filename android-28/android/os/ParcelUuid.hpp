#pragma once

#include "./Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./ParcelUuid.def.hpp"

namespace android::os
{
	// Fields
	inline JObject ParcelUuid::CREATOR()
	{
		return getStaticObjectField(
			"android.os.ParcelUuid",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ParcelUuid::ParcelUuid(java::util::UUID arg0)
		: JObject(
			"android.os.ParcelUuid",
			"(Ljava/util/UUID;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::os::ParcelUuid ParcelUuid::fromString(JString arg0)
	{
		return callStaticObjectMethod(
			"android.os.ParcelUuid",
			"fromString",
			"(Ljava/lang/String;)Landroid/os/ParcelUuid;",
			arg0.object<jstring>()
		);
	}
	inline jint ParcelUuid::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ParcelUuid::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::util::UUID ParcelUuid::getUuid() const
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	inline jint ParcelUuid::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ParcelUuid::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ParcelUuid::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

