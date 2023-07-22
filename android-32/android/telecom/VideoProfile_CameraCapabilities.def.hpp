#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telecom
{
	class VideoProfile_CameraCapabilities : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit VideoProfile_CameraCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VideoProfile_CameraCapabilities(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VideoProfile_CameraCapabilities(jint arg0, jint arg1);
		VideoProfile_CameraCapabilities(jint arg0, jint arg1, jboolean arg2, jfloat arg3);
		
		// Methods
		jint describeContents() const;
		jint getHeight() const;
		jfloat getMaxZoom() const;
		jint getWidth() const;
		jboolean isZoomSupported() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telecom

