#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MedicalResourceId.def.hpp"

namespace android::health::connect
{
	// Fields
	inline JObject MedicalResourceId::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.MedicalResourceId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline MedicalResourceId::MedicalResourceId(JString arg0, jint arg1, JString arg2)
		: JObject(
			"android.health.connect.MedicalResourceId",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline android::health::connect::MedicalResourceId MedicalResourceId::fromFhirReference(JString arg0, JString arg1)
	{
		return callStaticObjectMethod(
			"android.health.connect.MedicalResourceId",
			"fromFhirReference",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/health/connect/MedicalResourceId;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline jint MedicalResourceId::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MedicalResourceId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString MedicalResourceId::getDataSourceId() const
	{
		return callObjectMethod(
			"getDataSourceId",
			"()Ljava/lang/String;"
		);
	}
	inline JString MedicalResourceId::getFhirResourceId() const
	{
		return callObjectMethod(
			"getFhirResourceId",
			"()Ljava/lang/String;"
		);
	}
	inline jint MedicalResourceId::getFhirResourceType() const
	{
		return callMethod<jint>(
			"getFhirResourceType",
			"()I"
		);
	}
	inline jint MedicalResourceId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MedicalResourceId::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MedicalResourceId::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
