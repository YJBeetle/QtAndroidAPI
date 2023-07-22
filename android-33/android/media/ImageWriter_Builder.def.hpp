#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class ImageWriter;
}
namespace android::view
{
	class Surface;
}

namespace android::media
{
	class ImageWriter_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageWriter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImageWriter_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ImageWriter_Builder(android::view::Surface arg0);
		
		// Methods
		android::media::ImageWriter build() const;
		android::media::ImageWriter_Builder setDataSpace(jint arg0) const;
		android::media::ImageWriter_Builder setHardwareBufferFormat(jint arg0) const;
		android::media::ImageWriter_Builder setImageFormat(jint arg0) const;
		android::media::ImageWriter_Builder setMaxImages(jint arg0) const;
		android::media::ImageWriter_Builder setUsage(jlong arg0) const;
		android::media::ImageWriter_Builder setWidthAndHeight(jint arg0, jint arg1) const;
	};
} // namespace android::media

