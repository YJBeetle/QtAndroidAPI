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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VideoProfile_CameraCapabilities(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VideoProfile_CameraCapabilities(QAndroidJniObject obj);
		
		// Constructors
		VideoProfile_CameraCapabilities(jint arg0, jint arg1);
		VideoProfile_CameraCapabilities(jint arg0, jint arg1, jboolean arg2, jfloat arg3);
		
		// Methods
		jint describeContents();
		jint getHeight();
		jfloat getMaxZoom();
		jint getWidth();
		jboolean isZoomSupported();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telecom

