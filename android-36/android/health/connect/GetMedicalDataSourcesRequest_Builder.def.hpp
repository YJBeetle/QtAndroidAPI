#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class GetMedicalDataSourcesRequest;
}
class JString;

namespace android::health::connect
{
	class GetMedicalDataSourcesRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GetMedicalDataSourcesRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GetMedicalDataSourcesRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GetMedicalDataSourcesRequest_Builder();
		GetMedicalDataSourcesRequest_Builder(android::health::connect::GetMedicalDataSourcesRequest arg0);
		GetMedicalDataSourcesRequest_Builder(android::health::connect::GetMedicalDataSourcesRequest_Builder &arg0);
		
		// Methods
		android::health::connect::GetMedicalDataSourcesRequest_Builder addPackageName(JString arg0) const;
		android::health::connect::GetMedicalDataSourcesRequest build() const;
		android::health::connect::GetMedicalDataSourcesRequest_Builder clearPackageNames() const;
	};
} // namespace android::health::connect

