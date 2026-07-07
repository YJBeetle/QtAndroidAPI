#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./GetMedicalDataSourcesRequest.def.hpp"

namespace android::health::connect
{
	// Fields
	inline JObject GetMedicalDataSourcesRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.GetMedicalDataSourcesRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GetMedicalDataSourcesRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean GetMedicalDataSourcesRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject GetMedicalDataSourcesRequest::getPackageNames() const
	{
		return callObjectMethod(
			"getPackageNames",
			"()Ljava/util/Set;"
		);
	}
	inline jint GetMedicalDataSourcesRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString GetMedicalDataSourcesRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GetMedicalDataSourcesRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
