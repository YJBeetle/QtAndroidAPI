#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::tv
{
	class TvContract_Channels_Logo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		TvContract_Channels_Logo(QAndroidJniObject obj);
		// Constructors
		TvContract_Channels_Logo() = default;
		
		// Methods
	};
} // namespace android::media::tv

