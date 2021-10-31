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
		
		// QJniObject forward
		template<typename ...Ts> explicit DrmUtils(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DrmUtils(QJniObject obj);
		
		// Constructors
		DrmUtils();
		
		// Methods
		static android::drm::DrmUtils_ExtendedMetadataParser getExtendedMetadataParser(jbyteArray arg0);
	};
} // namespace android::drm

