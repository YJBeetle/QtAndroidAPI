#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class ReadMedicalResourcesRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ReadMedicalResourcesRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReadMedicalResourcesRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getPageSize() const;
	};
} // namespace android::health::connect

