#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AvailableNfcAntenna.def.hpp"

namespace android::nfc
{
	// Fields
	inline JObject AvailableNfcAntenna::CREATOR()
	{
		return getStaticObjectField(
			"android.nfc.AvailableNfcAntenna",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AvailableNfcAntenna::AvailableNfcAntenna(jint arg0, jint arg1)
		: JObject(
			"android.nfc.AvailableNfcAntenna",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint AvailableNfcAntenna::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AvailableNfcAntenna::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AvailableNfcAntenna::getLocationX() const
	{
		return callMethod<jint>(
			"getLocationX",
			"()I"
		);
	}
	inline jint AvailableNfcAntenna::getLocationY() const
	{
		return callMethod<jint>(
			"getLocationY",
			"()I"
		);
	}
	inline jint AvailableNfcAntenna::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AvailableNfcAntenna::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AvailableNfcAntenna::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::nfc

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::nfc;
#endif
