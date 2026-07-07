#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect
{
	class MedicalResourceId;
}
namespace android::health::connect::datatypes
{
	class FhirResource;
}
namespace android::health::connect::datatypes
{
	class FhirVersion;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::health::connect::datatypes
{
	class MedicalResource : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint MEDICAL_RESOURCE_TYPE_ALLERGIES_INTOLERANCES();
		static jint MEDICAL_RESOURCE_TYPE_CONDITIONS();
		static jint MEDICAL_RESOURCE_TYPE_LABORATORY_RESULTS();
		static jint MEDICAL_RESOURCE_TYPE_MEDICATIONS();
		static jint MEDICAL_RESOURCE_TYPE_PERSONAL_DETAILS();
		static jint MEDICAL_RESOURCE_TYPE_PRACTITIONER_DETAILS();
		static jint MEDICAL_RESOURCE_TYPE_PREGNANCY();
		static jint MEDICAL_RESOURCE_TYPE_PROCEDURES();
		static jint MEDICAL_RESOURCE_TYPE_SOCIAL_HISTORY();
		static jint MEDICAL_RESOURCE_TYPE_VACCINES();
		static jint MEDICAL_RESOURCE_TYPE_VISITS();
		static jint MEDICAL_RESOURCE_TYPE_VITAL_SIGNS();
		
		// QJniObject forward
		template<typename ...Ts> explicit MedicalResource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MedicalResource(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getDataSourceId() const;
		android::health::connect::datatypes::FhirResource getFhirResource() const;
		android::health::connect::datatypes::FhirVersion getFhirVersion() const;
		android::health::connect::MedicalResourceId getId() const;
		jint getType() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::health::connect::datatypes

