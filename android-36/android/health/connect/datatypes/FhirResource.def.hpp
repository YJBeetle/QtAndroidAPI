#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::health::connect::datatypes
{
	class FhirResource : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FHIR_RESOURCE_TYPE_ALLERGY_INTOLERANCE();
		static jint FHIR_RESOURCE_TYPE_CONDITION();
		static jint FHIR_RESOURCE_TYPE_ENCOUNTER();
		static jint FHIR_RESOURCE_TYPE_IMMUNIZATION();
		static jint FHIR_RESOURCE_TYPE_LOCATION();
		static jint FHIR_RESOURCE_TYPE_MEDICATION();
		static jint FHIR_RESOURCE_TYPE_MEDICATION_REQUEST();
		static jint FHIR_RESOURCE_TYPE_MEDICATION_STATEMENT();
		static jint FHIR_RESOURCE_TYPE_OBSERVATION();
		static jint FHIR_RESOURCE_TYPE_ORGANIZATION();
		static jint FHIR_RESOURCE_TYPE_PATIENT();
		static jint FHIR_RESOURCE_TYPE_PRACTITIONER();
		static jint FHIR_RESOURCE_TYPE_PRACTITIONER_ROLE();
		static jint FHIR_RESOURCE_TYPE_PROCEDURE();
		
		// QJniObject forward
		template<typename ...Ts> explicit FhirResource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FhirResource(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getData() const;
		JString getId() const;
		jint getType() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect::datatypes

