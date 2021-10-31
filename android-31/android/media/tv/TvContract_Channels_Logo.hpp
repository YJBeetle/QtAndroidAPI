#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::tv
{
	class TvContract_Channels_Logo : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvContract_Channels_Logo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvContract_Channels_Logo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media::tv

