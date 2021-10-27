#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class MediaPlayer_DrmInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaPlayer_DrmInfo(QAndroidJniObject obj);
		// Constructors
		MediaPlayer_DrmInfo() = default;
		
		// Methods
		QAndroidJniObject getPssh();
		jarray getSupportedSchemes();
	};
} // namespace android::media

