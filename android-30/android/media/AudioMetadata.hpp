#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class AudioMetadata : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AudioMetadata(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AudioMetadata(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject createMap();
	};
} // namespace android::media

