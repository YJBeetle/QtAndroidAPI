#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class ReadMedicalResourcesInitialRequest;
}
class JString;

namespace android::health::connect
{
	class ReadMedicalResourcesInitialRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadMedicalResourcesInitialRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReadMedicalResourcesInitialRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ReadMedicalResourcesInitialRequest_Builder(android::health::connect::ReadMedicalResourcesInitialRequest arg0);
		ReadMedicalResourcesInitialRequest_Builder(android::health::connect::ReadMedicalResourcesInitialRequest_Builder &arg0);
		ReadMedicalResourcesInitialRequest_Builder(jint arg0);
		
		// Methods
		android::health::connect::ReadMedicalResourcesInitialRequest_Builder addDataSourceId(JString arg0) const;
		android::health::connect::ReadMedicalResourcesInitialRequest_Builder addDataSourceIds(JObject arg0) const;
		android::health::connect::ReadMedicalResourcesInitialRequest build() const;
		android::health::connect::ReadMedicalResourcesInitialRequest_Builder clearDataSourceIds() const;
		android::health::connect::ReadMedicalResourcesInitialRequest_Builder setMedicalResourceType(jint arg0) const;
		android::health::connect::ReadMedicalResourcesInitialRequest_Builder setPageSize(jint arg0) const;
	};
} // namespace android::health::connect

