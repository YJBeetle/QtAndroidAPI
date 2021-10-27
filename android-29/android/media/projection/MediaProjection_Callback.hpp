#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::projection
{
	class MediaProjection_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaProjection_Callback(QAndroidJniObject obj);
		// Constructors
		MediaProjection_Callback();
		
		// Methods
		void onStop();
	};
} // namespace android::media::projection

