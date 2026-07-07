#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class CreateMedicalDataSourceRequest;
}
namespace android::health::connect::datatypes
{
	class FhirVersion;
}
namespace android::net
{
	class Uri;
}
class JString;

namespace android::health::connect
{
	class CreateMedicalDataSourceRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CreateMedicalDataSourceRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CreateMedicalDataSourceRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CreateMedicalDataSourceRequest_Builder(android::health::connect::CreateMedicalDataSourceRequest arg0);
		CreateMedicalDataSourceRequest_Builder(android::health::connect::CreateMedicalDataSourceRequest_Builder &arg0);
		CreateMedicalDataSourceRequest_Builder(android::net::Uri arg0, JString arg1, android::health::connect::datatypes::FhirVersion arg2);
		
		// Methods
		android::health::connect::CreateMedicalDataSourceRequest build() const;
		android::health::connect::CreateMedicalDataSourceRequest_Builder setDisplayName(JString arg0) const;
		android::health::connect::CreateMedicalDataSourceRequest_Builder setFhirBaseUri(android::net::Uri arg0) const;
		android::health::connect::CreateMedicalDataSourceRequest_Builder setFhirVersion(android::health::connect::datatypes::FhirVersion arg0) const;
	};
} // namespace android::health::connect

