#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaCas_Session;
}

namespace android::media
{
	class MediaExtractor_CasInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaExtractor_CasInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaExtractor_CasInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::media::MediaCas_Session getSession();
		jint getSystemId();
	};
} // namespace android::media

