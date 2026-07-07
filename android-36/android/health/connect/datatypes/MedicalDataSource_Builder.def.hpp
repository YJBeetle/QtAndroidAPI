#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class FhirVersion;
}
namespace android::health::connect::datatypes
{
	class MedicalDataSource;
}
namespace android::net
{
	class Uri;
}
class JString;
namespace java::time
{
	class Instant;
}

namespace android::health::connect::datatypes
{
	class MedicalDataSource_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MedicalDataSource_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MedicalDataSource_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MedicalDataSource_Builder(android::health::connect::datatypes::MedicalDataSource arg0);
		MedicalDataSource_Builder(android::health::connect::datatypes::MedicalDataSource_Builder &arg0);
		MedicalDataSource_Builder(JString arg0, JString arg1, android::net::Uri arg2, JString arg3, android::health::connect::datatypes::FhirVersion arg4);
		
		// Methods
		android::health::connect::datatypes::MedicalDataSource build() const;
		android::health::connect::datatypes::MedicalDataSource_Builder setDisplayName(JString arg0) const;
		android::health::connect::datatypes::MedicalDataSource_Builder setFhirBaseUri(android::net::Uri arg0) const;
		android::health::connect::datatypes::MedicalDataSource_Builder setFhirVersion(android::health::connect::datatypes::FhirVersion arg0) const;
		android::health::connect::datatypes::MedicalDataSource_Builder setId(JString arg0) const;
		android::health::connect::datatypes::MedicalDataSource_Builder setLastDataUpdateTime(java::time::Instant arg0) const;
		android::health::connect::datatypes::MedicalDataSource_Builder setPackageName(JString arg0) const;
	};
} // namespace android::health::connect::datatypes

