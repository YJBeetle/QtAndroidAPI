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
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraProfile(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CameraProfile(QJniObject obj);
		
		// Constructors
		CameraProfile();
		
		// Methods
		static jint getJpegEncodingQualityParameter(jint arg0);
		static jint getJpegEncodingQualityParameter(jint arg0, jint arg1);
	};
} // namespace android::media

