#include "./DrmUtils_ExtendedMetadataParser.hpp"
#include "./DrmUtils.hpp"

namespace android::drm
{
	// Fields
	
	// QAndroidJniObject forward
	DrmUtils::DrmUtils(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DrmUtils::DrmUtils()
		: __JniBaseClass(
			"android.drm.DrmUtils",
			"()V"
		) {}
	
	// Methods
	android::drm::DrmUtils_ExtendedMetadataParser DrmUtils::getExtendedMetadataParser(jbyteArray arg0)
	{
		return callStaticObjectMethod(
			"android.drm.DrmUtils",
			"getExtendedMetadataParser",
			"([B)Landroid/drm/DrmUtils$ExtendedMetadataParser;",
			arg0
		);
	}
} // namespace android::drm

