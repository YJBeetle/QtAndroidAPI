#include "./MediaCas_Session.hpp"
#include "./MediaExtractor_CasInfo.hpp"

namespace android::media
{
	// Fields
	
	MediaExtractor_CasInfo::MediaExtractor_CasInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jbyteArray MediaExtractor_CasInfo::getPrivateData()
	{
		return __thiz.callObjectMethod(
			"getPrivateData",
			"()[B"
		).object<jbyteArray>();
	}
	QAndroidJniObject MediaExtractor_CasInfo::getSession()
	{
		return __thiz.callObjectMethod(
			"getSession",
			"()Landroid/media/MediaCas$Session;"
		);
	}
	jint MediaExtractor_CasInfo::getSystemId()
	{
		return __thiz.callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
} // namespace android::media

