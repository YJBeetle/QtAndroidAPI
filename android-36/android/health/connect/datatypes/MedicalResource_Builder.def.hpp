#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class FhirResource;
}
namespace android::health::connect::datatypes
{
	class FhirVersion;
}
namespace android::health::connect::datatypes
{
	class MedicalResource;
}
class JString;

namespace android::health::connect::datatypes
{
	class MedicalResource_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MedicalResource_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MedicalResource_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MedicalResource_Builder(android::health::connect::datatypes::MedicalResource arg0);
		MedicalResource_Builder(android::health::connect::datatypes::MedicalResource_Builder &arg0);
		MedicalResource_Builder(jint arg0, JString arg1, android::health::connect::datatypes::FhirVersion arg2, android::health::connect::datatypes::FhirResource arg3);
		
		// Methods
		android::health::connect::datatypes::MedicalResource build() const;
		android::health::connect::datatypes::MedicalResource_Builder setDataSourceId(JString arg0) const;
		android::health::connect::datatypes::MedicalResource_Builder setFhirResource(android::health::connect::datatypes::FhirResource arg0) const;
		android::health::connect::datatypes::MedicalResource_Builder setFhirVersion(android::health::connect::datatypes::FhirVersion arg0) const;
		android::health::connect::datatypes::MedicalResource_Builder setType(jint arg0) const;
	};
} // namespace android::health::connect::datatypes

