#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class UpsertMedicalResourceRequest;
}
namespace android::health::connect::datatypes
{
	class FhirVersion;
}
class JString;

namespace android::health::connect
{
	class UpsertMedicalResourceRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UpsertMedicalResourceRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UpsertMedicalResourceRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UpsertMedicalResourceRequest_Builder(android::health::connect::UpsertMedicalResourceRequest arg0);
		UpsertMedicalResourceRequest_Builder(android::health::connect::UpsertMedicalResourceRequest_Builder &arg0);
		UpsertMedicalResourceRequest_Builder(JString arg0, android::health::connect::datatypes::FhirVersion arg1, JString arg2);
		
		// Methods
		android::health::connect::UpsertMedicalResourceRequest build() const;
		android::health::connect::UpsertMedicalResourceRequest_Builder setData(JString arg0) const;
		android::health::connect::UpsertMedicalResourceRequest_Builder setDataSourceId(JString arg0) const;
		android::health::connect::UpsertMedicalResourceRequest_Builder setFhirVersion(android::health::connect::datatypes::FhirVersion arg0) const;
	};
} // namespace android::health::connect

