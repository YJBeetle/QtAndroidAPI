#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class MediaPlayer_DrmInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaPlayer_DrmInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaPlayer_DrmInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getPssh() const;
		JArray getSupportedSchemes() const;
	};
} // namespace android::media

