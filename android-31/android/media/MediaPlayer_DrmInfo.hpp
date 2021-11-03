#pragma once

#include "../../JObject.hpp"

class JArray;

namespace android::media
{
	class MediaPlayer_DrmInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaPlayer_DrmInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_DrmInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getPssh();
		JArray getSupportedSchemes();
	};
} // namespace android::media

