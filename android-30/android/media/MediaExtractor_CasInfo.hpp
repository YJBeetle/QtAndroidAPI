#pragma once

#include "../../JObject.hpp"

class JByteArray;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaExtractor_CasInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaExtractor_CasInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JByteArray getPrivateData() const;
		android::media::MediaCas_Session getSession() const;
		jint getSystemId() const;
	};
} // namespace android::media

