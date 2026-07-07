#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./FhirResource.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline JObject FhirResource::CREATOR()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.FhirResource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_ALLERGY_INTOLERANCE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_ALLERGY_INTOLERANCE"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_CONDITION()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_CONDITION"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_ENCOUNTER()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_ENCOUNTER"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_IMMUNIZATION()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_IMMUNIZATION"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_LOCATION()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_LOCATION"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_MEDICATION()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_MEDICATION"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_MEDICATION_REQUEST()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_MEDICATION_REQUEST"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_MEDICATION_STATEMENT()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_MEDICATION_STATEMENT"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_OBSERVATION()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_OBSERVATION"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_ORGANIZATION()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_ORGANIZATION"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_PATIENT()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_PATIENT"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_PRACTITIONER()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_PRACTITIONER"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_PRACTITIONER_ROLE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_PRACTITIONER_ROLE"
		);
	}
	inline jint FhirResource::FHIR_RESOURCE_TYPE_PROCEDURE()
	{
		return getStaticField<jint>(
			"android.health.connect.datatypes.FhirResource",
			"FHIR_RESOURCE_TYPE_PROCEDURE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FhirResource::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean FhirResource::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString FhirResource::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/String;"
		);
	}
	inline JString FhirResource::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jint FhirResource::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint FhirResource::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString FhirResource::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FhirResource::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
