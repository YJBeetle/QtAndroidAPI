#pragma once

#include "../../JObject.hpp"


namespace android::media
{
	class MediaCommunicationManager : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaCommunicationManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaCommunicationManager(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getSession2Tokens();
		jint getVersion();
	};
} // namespace android::media

