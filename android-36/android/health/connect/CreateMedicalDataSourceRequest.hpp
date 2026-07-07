#pragma once

#include "./datatypes/FhirVersion.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./CreateMedicalDataSourceRequest.def.hpp"

namespace android::health::connect
{
	// Fields
	inline JObject CreateMedicalDataSourceRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.CreateMedicalDataSourceRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint CreateMedicalDataSourceRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CreateMedicalDataSourceRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString CreateMedicalDataSourceRequest::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri CreateMedicalDataSourceRequest::getFhirBaseUri() const
	{
		return callObjectMethod(
			"getFhirBaseUri",
			"()Landroid/net/Uri;"
		);
	}
	inline android::health::connect::datatypes::FhirVersion CreateMedicalDataSourceRequest::getFhirVersion() const
	{
		return callObjectMethod(
			"getFhirVersion",
			"()Landroid/health/connect/datatypes/FhirVersion;"
		);
	}
	inline jint CreateMedicalDataSourceRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CreateMedicalDataSourceRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CreateMedicalDataSourceRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
