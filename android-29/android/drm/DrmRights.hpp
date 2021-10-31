#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::drm
{
	class ProcessedData;
}
namespace java::io
{
	class File;
}

namespace android::drm
{
	class DrmRights : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmRights(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmRights(QAndroidJniObject obj);
		
		// Constructors
		DrmRights(android::drm::ProcessedData arg0, jstring arg1);
		DrmRights(java::io::File arg0, jstring arg1);
		DrmRights(jstring arg0, jstring arg1);
		DrmRights(jstring arg0, jstring arg1, jstring arg2);
		DrmRights(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		
		// Methods
		jstring getAccountId();
		jbyteArray getData();
		jstring getMimeType();
		jstring getSubscriptionId();
	};
} // namespace android::drm

