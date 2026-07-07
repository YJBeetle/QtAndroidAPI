#pragma once

#include "../MedicalResourceId.def.hpp"
#include "./FhirResource.def.hpp"
#include "./FhirVersion.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MedicalResource.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline JObject MedicalResource::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.MedicalResource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_ALLERGIES_INTOLERANCES()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_ALLERGIES_INTOLERANCES"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_CONDITIONS()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_CONDITIONS"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_LABORATORY_RESULTS()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_LABORATORY_RESULTS"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_MEDICATIONS()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_MEDICATIONS"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_PERSONAL_DETAILS()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_PERSONAL_DETAILS"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_PRACTITIONER_DETAILS()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_PRACTITIONER_DETAILS"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_PREGNANCY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_PREGNANCY"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_PROCEDURES()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_PROCEDURES"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_SOCIAL_HISTORY()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_SOCIAL_HISTORY"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_VACCINES()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_VACCINES"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_VISITS()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_VISITS"
		);
	}
	inline jint MedicalResource::MEDICAL_RESOURCE_TYPE_VITAL_SIGNS()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.MedicalResource",
			"MEDICAL_RESOURCE_TYPE_VITAL_SIGNS"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint MedicalResource::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean MedicalResource::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString MedicalResource::getDataSourceId() const
	{
		return callObjectMethod(
			"getDataSourceId",
			"()Ljava/lang/String;"
		);
	}
	inline android::health::connect::datatypes::FhirResource MedicalResource::getFhirResource() const
	{
		return callObjectMethod(
			"getFhirResource",
			"()Landroid/health/connect/datatypes/FhirResource;"
		);
	}
	inline android::health::connect::datatypes::FhirVersion MedicalResource::getFhirVersion() const
	{
		return callObjectMethod(
			"getFhirVersion",
			"()Landroid/health/connect/datatypes/FhirVersion;"
		);
	}
	inline android::health::connect::MedicalResourceId MedicalResource::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Landroid/health/connect/MedicalResourceId;"
		);
	}
	inline jint MedicalResource::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint MedicalResource::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MedicalResource::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void MedicalResource::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
