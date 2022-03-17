#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class Image;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class Surface;
}

namespace android::media
{
	class ImageWriter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ImageWriter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ImageWriter(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::media::ImageWriter newInstance(android::view::Surface arg0, jint arg1);
		static android::media::ImageWriter newInstance(android::view::Surface arg0, jint arg1, jint arg2);
		void close() const;
		android::media::Image dequeueInputImage() const;
		jint getFormat() const;
		jint getMaxImages() const;
		void queueInputImage(android::media::Image arg0) const;
		void setOnImageReleasedListener(JObject arg0, android::os::Handler arg1) const;
	};
} // namespace android::media

