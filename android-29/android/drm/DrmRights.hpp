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
		
		DrmRights(QAndroidJniObject obj);
		// Constructors
		DrmRights(android::drm::ProcessedData &arg0, jstring &arg1);
		DrmRights(android::drm::ProcessedData &arg0, const QString &arg1);
		DrmRights(java::io::File &arg0, jstring &arg1);
		DrmRights(java::io::File &arg0, const QString &arg1);
		DrmRights(jstring &arg0, jstring &arg1);
		DrmRights(const QString &arg0, const QString &arg1);
		DrmRights(jstring &arg0, jstring &arg1, jstring &arg2);
		DrmRights(const QString &arg0, const QString &arg1, const QString &arg2);
		DrmRights(jstring &arg0, jstring &arg1, jstring &arg2, jstring &arg3);
		DrmRights(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		DrmRights() = default;
		
		// Methods
		jstring getAccountId();
		jbyteArray getData();
		jstring getMimeType();
		jstring getSubscriptionId();
	};
} // namespace android::drm

