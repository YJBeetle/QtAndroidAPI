#include "./DrmUtils_ExtendedMetadataParser.hpp"

namespace android::drm
{
	// Fields
	
	// QAndroidJniObject forward
	DrmUtils_ExtendedMetadataParser::DrmUtils_ExtendedMetadataParser(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring DrmUtils_ExtendedMetadataParser::get(jstring arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	__JniBaseClass DrmUtils_ExtendedMetadataParser::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	__JniBaseClass DrmUtils_ExtendedMetadataParser::keyIterator()
	{
		return callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace android::drm

