#pragma once

#include "./ReadMedicalResourcesRequest.def.hpp"

class JObject;
class JString;

namespace android::health::connect
{
	class ReadMedicalResourcesInitialRequest : public android::health::connect::ReadMedicalResourcesRequest
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadMedicalResourcesInitialRequest(const char *className, const char *sig, Ts...agv) : android::health::connect::ReadMedicalResourcesRequest(className, sig, std::forward<Ts>(agv)...) {}
		ReadMedicalResourcesInitialRequest(QJniObject obj) : android::health::connect::ReadMedicalResourcesRequest(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getDataSourceIds() const;
		jint getMedicalResourceType() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::health::connect

