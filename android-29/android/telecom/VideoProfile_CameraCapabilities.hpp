#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telecom
{
	class VideoProfile_CameraCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		VideoProfile_CameraCapabilities(QAndroidJniObject obj);
		// Constructors
		VideoProfile_CameraCapabilities(jint &arg0, jint &arg1);
		VideoProfile_CameraCapabilities(jint &arg0, jint &arg1, jboolean &arg2, jfloat &arg3);
		VideoProfile_CameraCapabilities() = default;
		
		// Methods
		jint describeContents();
		jint getHeight();
		jfloat getMaxZoom();
		jint getWidth();
		jboolean isZoomSupported();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

