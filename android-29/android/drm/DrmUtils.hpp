#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::drm
{
	class DrmUtils_ExtendedMetadataParser;
}

namespace android::drm
{
	class DrmUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		DrmUtils(QAndroidJniObject obj);
		// Constructors
		DrmUtils();
		
		// Methods
		static QAndroidJniObject getExtendedMetadataParser(jbyteArray arg0);
	};
} // namespace android::drm

