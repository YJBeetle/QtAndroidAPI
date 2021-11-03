#include "../../JString.hpp"
#include "./DrmUtils_ExtendedMetadataParser.hpp"

namespace android::drm
{
	// Fields
	
	// QAndroidJniObject forward
	DrmUtils_ExtendedMetadataParser::DrmUtils_ExtendedMetadataParser(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString DrmUtils_ExtendedMetadataParser::get(JString arg0)
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject DrmUtils_ExtendedMetadataParser::iterator()
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject DrmUtils_ExtendedMetadataParser::keyIterator()
	{
		return callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace android::drm

