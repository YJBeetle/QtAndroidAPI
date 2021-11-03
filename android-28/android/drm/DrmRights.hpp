#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::drm
{
	class ProcessedData;
}
namespace java::io
{
	class File;
}
class JString;

namespace android::drm
{
	class DrmRights : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmRights(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmRights(QAndroidJniObject obj);
		
		// Constructors
		DrmRights(android::drm::ProcessedData arg0, JString arg1);
		DrmRights(java::io::File arg0, JString arg1);
		DrmRights(JString arg0, JString arg1);
		DrmRights(JString arg0, JString arg1, JString arg2);
		DrmRights(JString arg0, JString arg1, JString arg2, JString arg3);
		
		// Methods
		JString getAccountId() const;
		JByteArray getData() const;
		JString getMimeType() const;
		JString getSubscriptionId() const;
	};
} // namespace android::drm

