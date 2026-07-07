#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ReadMedicalResourcesResponse.def.hpp"

namespace android::health::connect
{
	// Fields
	inline JObject ReadMedicalResourcesResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.ReadMedicalResourcesResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ReadMedicalResourcesResponse::ReadMedicalResourcesResponse(JObject arg0, JString arg1, jint arg2)
		: JObject(
			"android.health.connect.ReadMedicalResourcesResponse",
			"(Ljava/util/List;Ljava/lang/String;I)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline jint ReadMedicalResourcesResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ReadMedicalResourcesResponse::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ReadMedicalResourcesResponse::getMedicalResources() const
	{
		return callObjectMethod(
			"getMedicalResources",
			"()Ljava/util/List;"
		);
	}
	inline JString ReadMedicalResourcesResponse::getNextPageToken() const
	{
		return callObjectMethod(
			"getNextPageToken",
			"()Ljava/lang/String;"
		);
	}
	inline jint ReadMedicalResourcesResponse::getRemainingCount() const
	{
		return callMethod<jint>(
			"getRemainingCount",
			"()I"
		);
	}
	inline jint ReadMedicalResourcesResponse::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ReadMedicalResourcesResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ReadMedicalResourcesResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
