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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmUtils(QAndroidJniObject obj);
		
		// Constructors
		DrmUtils();
		
		// Methods
		static QAndroidJniObject getExtendedMetadataParser(jbyteArray arg0);
	};
} // namespace android::drm

