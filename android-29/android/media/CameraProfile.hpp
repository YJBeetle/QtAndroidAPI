#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::media
{
	class CameraProfile : public __JniBaseClass
	{
	public:
		// Fields
		static jint QUALITY_HIGH();
		static jint QUALITY_LOW();
		static jint QUALITY_MEDIUM();
		
		CameraProfile(QAndroidJniObject obj);
		// Constructors
		CameraProfile();
		
		// Methods
		static jint getJpegEncodingQualityParameter(jint arg0);
		static jint getJpegEncodingQualityParameter(jint arg0, jint arg1);
	};
} // namespace android::media

