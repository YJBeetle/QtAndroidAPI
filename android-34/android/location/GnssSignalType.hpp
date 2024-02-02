#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./GnssSignalType.def.hpp"

namespace android::location
{
	// Fields
	inline JObject GnssSignalType::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssSignalType",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::location::GnssSignalType GnssSignalType::create(jint arg0, jdouble arg1, JString arg2)
	{
		return callStaticObjectMethod(
			"android.location.GnssSignalType",
			"create",
			"(IDLjava/lang/String;)Landroid/location/GnssSignalType;",
			arg0,
			arg1,
			arg2.object<jstring>()
		);
	}
	inline jint GnssSignalType::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean GnssSignalType::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble GnssSignalType::getCarrierFrequencyHz() const
	{
		return callMethod<jdouble>(
			"getCarrierFrequencyHz",
			"()D"
		);
	}
	inline JString GnssSignalType::getCodeType() const
	{
		return callObjectMethod(
			"getCodeType",
			"()Ljava/lang/String;"
		);
	}
	inline jint GnssSignalType::getConstellationType() const
	{
		return callMethod<jint>(
			"getConstellationType",
			"()I"
		);
	}
	inline jint GnssSignalType::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString GnssSignalType::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssSignalType::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
