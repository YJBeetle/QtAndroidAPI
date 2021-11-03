#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JString;

namespace android::media
{
	class MediaDrm_ProvisionRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaDrm_ProvisionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaDrm_ProvisionRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JByteArray getData() const;
		JString getDefaultUrl() const;
	};
} // namespace android::media

