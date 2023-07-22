#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class ImageReader;
}

namespace android::media
{
	class ImageReader_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageReader_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImageReader_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ImageReader_Builder(jint arg0, jint arg1);
		
		// Methods
		android::media::ImageReader build() const;
		android::media::ImageReader_Builder setDefaultDataSpace(jint arg0) const;
		android::media::ImageReader_Builder setDefaultHardwareBufferFormat(jint arg0) const;
		android::media::ImageReader_Builder setImageFormat(jint arg0) const;
		android::media::ImageReader_Builder setMaxImages(jint arg0) const;
		android::media::ImageReader_Builder setUsage(jlong arg0) const;
	};
} // namespace android::media

