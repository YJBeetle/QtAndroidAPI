#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}

namespace android::view
{
	class PixelCopy_Result : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PixelCopy_Result(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PixelCopy_Result(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::graphics::Bitmap getBitmap() const;
		jint getStatus() const;
	};
} // namespace android::view

