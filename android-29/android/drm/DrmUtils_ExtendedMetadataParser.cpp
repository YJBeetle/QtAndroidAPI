#include "../../JByteArray.hpp"
#include "../../JString.hpp"
#include "./DrmUtils_ExtendedMetadataParser.hpp"

namespace android::drm
{
	// Fields
	
	// QJniObject forward
	DrmUtils_ExtendedMetadataParser::DrmUtils_ExtendedMetadataParser(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString DrmUtils_ExtendedMetadataParser::get(JString arg0) const
	{
		return callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JObject DrmUtils_ExtendedMetadataParser::iterator() const
	{
		return callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	JObject DrmUtils_ExtendedMetadataParser::keyIterator() const
	{
		return callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace android::drm

