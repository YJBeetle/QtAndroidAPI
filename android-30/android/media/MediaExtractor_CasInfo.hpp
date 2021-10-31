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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaExtractor_CasInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaExtractor_CasInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jbyteArray getPrivateData();
		android::media::MediaCas_Session getSession();
		jint getSystemId();
	};
} // namespace android::media

