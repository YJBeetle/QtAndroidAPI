#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class CameraProfile : public JObject
	{
	public:
		// Fields
		static jint QUALITY_HIGH();
		static jint QUALITY_LOW();
		static jint QUALITY_MEDIUM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CameraProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraProfile(QAndroidJniObject obj);
		
		// Constructors
		CameraProfile();
		
		// Methods
		static jint getJpegEncodingQualityParameter(jint arg0);
		static jint getJpegEncodingQualityParameter(jint arg0, jint arg1);
	};
} // namespace android::media

