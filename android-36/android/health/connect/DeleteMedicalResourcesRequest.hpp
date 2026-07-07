#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./DeleteMedicalResourcesRequest.def.hpp"

namespace android::health::connect
{
	// Fields
	inline JObject DeleteMedicalResourcesRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.DeleteMedicalResourcesRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DeleteMedicalResourcesRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DeleteMedicalResourcesRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject DeleteMedicalResourcesRequest::getDataSourceIds() const
	{
		return callObjectMethod(
			"getDataSourceIds",
			"()Ljava/util/Set;"
		);
	}
	inline JObject DeleteMedicalResourcesRequest::getMedicalResourceTypes() const
	{
		return callObjectMethod(
			"getMedicalResourceTypes",
			"()Ljava/util/Set;"
		);
	}
	inline jint DeleteMedicalResourcesRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DeleteMedicalResourcesRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DeleteMedicalResourcesRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
