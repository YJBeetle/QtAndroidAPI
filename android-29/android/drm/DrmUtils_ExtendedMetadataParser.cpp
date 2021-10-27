#include "./DrmUtils_ExtendedMetadataParser.hpp"

namespace android::drm
{
	// Fields
	
	DrmUtils_ExtendedMetadataParser::DrmUtils_ExtendedMetadataParser(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring DrmUtils_ExtendedMetadataParser::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring DrmUtils_ExtendedMetadataParser::get(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject DrmUtils_ExtendedMetadataParser::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject DrmUtils_ExtendedMetadataParser::keyIterator()
	{
		return __thiz.callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace android::drm

