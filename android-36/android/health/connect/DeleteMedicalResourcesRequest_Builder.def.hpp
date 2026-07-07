#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class DeleteMedicalResourcesRequest;
}
class JString;

namespace android::health::connect
{
	class DeleteMedicalResourcesRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeleteMedicalResourcesRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeleteMedicalResourcesRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DeleteMedicalResourcesRequest_Builder();
		DeleteMedicalResourcesRequest_Builder(android::health::connect::DeleteMedicalResourcesRequest arg0);
		DeleteMedicalResourcesRequest_Builder(android::health::connect::DeleteMedicalResourcesRequest_Builder &arg0);
		
		// Methods
		android::health::connect::DeleteMedicalResourcesRequest_Builder addDataSourceId(JString arg0) const;
		android::health::connect::DeleteMedicalResourcesRequest_Builder addMedicalResourceType(jint arg0) const;
		android::health::connect::DeleteMedicalResourcesRequest build() const;
		android::health::connect::DeleteMedicalResourcesRequest_Builder clearDataSourceIds() const;
		android::health::connect::DeleteMedicalResourcesRequest_Builder clearMedicalResourceTypes() const;
	};
} // namespace android::health::connect

