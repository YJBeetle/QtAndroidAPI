#pragma once

#include "./FhirVersion.def.hpp"
#include "../../../net/Uri.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./MedicalDataSource.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline JObject MedicalDataSource::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.MedicalDataSource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MedicalDataSource::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MedicalDataSource::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString MedicalDataSource::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri MedicalDataSource::getFhirBaseUri() const
	{
		return callObjectMethod(
			"getFhirBaseUri",
			"()Landroid/net/Uri;"
		);
	}
	inline android::health::connect::datatypes::FhirVersion MedicalDataSource::getFhirVersion() const
	{
		return callObjectMethod(
			"getFhirVersion",
			"()Landroid/health/connect/datatypes/FhirVersion;"
		);
	}
	inline JString MedicalDataSource::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::Instant MedicalDataSource::getLastDataUpdateTime() const
	{
		return callObjectMethod(
			"getLastDataUpdateTime",
			"()Ljava/time/Instant;"
		);
	}
	inline JString MedicalDataSource::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint MedicalDataSource::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MedicalDataSource::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MedicalDataSource::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
