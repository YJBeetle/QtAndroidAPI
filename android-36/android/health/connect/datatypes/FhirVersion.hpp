#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./FhirVersion.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline JObject FhirVersion::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.FhirVersion",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::health::connect::datatypes::FhirVersion FhirVersion::parseFhirVersion(JString arg0)
	{
		return callStaticObjectMethod(
			"android.health.connect.datatypes.FhirVersion",
			"parseFhirVersion",
			"(Ljava/lang/String;)Landroid/health/connect/datatypes/FhirVersion;",
			arg0.object<jstring>()
		);
	}
	inline jint FhirVersion::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean FhirVersion::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint FhirVersion::getMajor() const
	{
		return callMethod<jint>(
			"getMajor",
			"()I"
		);
	}
	inline jint FhirVersion::getMinor() const
	{
		return callMethod<jint>(
			"getMinor",
			"()I"
		);
	}
	inline jint FhirVersion::getPatch() const
	{
		return callMethod<jint>(
			"getPatch",
			"()I"
		);
	}
	inline jint FhirVersion::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean FhirVersion::isSupportedFhirVersion() const
	{
		return callMethod<jboolean>(
			"isSupportedFhirVersion",
			"()Z"
		);
	}
	inline JString FhirVersion::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FhirVersion::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
