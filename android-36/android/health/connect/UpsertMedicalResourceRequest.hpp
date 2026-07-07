#pragma once

#include "./datatypes/FhirVersion.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UpsertMedicalResourceRequest.def.hpp"

namespace android::health::connect
{
	// Fields
	inline JObject UpsertMedicalResourceRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.UpsertMedicalResourceRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UpsertMedicalResourceRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean UpsertMedicalResourceRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString UpsertMedicalResourceRequest::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/String;"
		);
	}
	inline JString UpsertMedicalResourceRequest::getDataSourceId() const
	{
		return callObjectMethod(
			"getDataSourceId",
			"()Ljava/lang/String;"
		);
	}
	inline android::health::connect::datatypes::FhirVersion UpsertMedicalResourceRequest::getFhirVersion() const
	{
		return callObjectMethod(
			"getFhirVersion",
			"()Landroid/health/connect/datatypes/FhirVersion;"
		);
	}
	inline jint UpsertMedicalResourceRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString UpsertMedicalResourceRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UpsertMedicalResourceRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
