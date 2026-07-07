#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../../java/util/UUID.def.hpp"
#include "./RangingDevice.def.hpp"

namespace android::ranging
{
	// Fields
	inline JObject RangingDevice::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.RangingDevice",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RangingDevice::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RangingDevice::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::util::UUID RangingDevice::getUuid() const
	{
		return callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	inline jint RangingDevice::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString RangingDevice::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RangingDevice::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
