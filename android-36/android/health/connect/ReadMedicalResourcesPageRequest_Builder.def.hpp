#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class ReadMedicalResourcesPageRequest;
}
class JString;

namespace android::health::connect
{
	class ReadMedicalResourcesPageRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadMedicalResourcesPageRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReadMedicalResourcesPageRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ReadMedicalResourcesPageRequest_Builder(android::health::connect::ReadMedicalResourcesPageRequest arg0);
		ReadMedicalResourcesPageRequest_Builder(android::health::connect::ReadMedicalResourcesPageRequest_Builder &arg0);
		ReadMedicalResourcesPageRequest_Builder(JString arg0);
		
		// Methods
		android::health::connect::ReadMedicalResourcesPageRequest build() const;
		android::health::connect::ReadMedicalResourcesPageRequest_Builder setPageSize(jint arg0) const;
		android::health::connect::ReadMedicalResourcesPageRequest_Builder setPageToken(JString arg0) const;
	};
} // namespace android::health::connect

