#pragma once

#include "./ReadMedicalResourcesRequest.def.hpp"

class JObject;
class JString;

namespace android::health::connect
{
	class ReadMedicalResourcesPageRequest : public android::health::connect::ReadMedicalResourcesRequest
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadMedicalResourcesPageRequest(const char *className, const char *sig, Ts...agv) : android::health::connect::ReadMedicalResourcesRequest(className, sig, std::forward<Ts>(agv)...) {}
		ReadMedicalResourcesPageRequest(QJniObject obj) : android::health::connect::ReadMedicalResourcesRequest(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getPageToken() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::health::connect

