#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaCas_Session;
}

namespace android::media
{
	class MediaExtractor_CasInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaExtractor_CasInfo(QAndroidJniObject obj);
		// Constructors
		MediaExtractor_CasInfo() = default;
		
		// Methods
		jbyteArray getPrivateData();
		QAndroidJniObject getSession();
		jint getSystemId();
	};
} // namespace android::media

