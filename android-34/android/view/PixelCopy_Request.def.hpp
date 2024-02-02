#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class Rect;
}

namespace android::view
{
	class PixelCopy_Request : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PixelCopy_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PixelCopy_Request(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::graphics::Bitmap getDestinationBitmap() const;
		android::graphics::Rect getSourceRect() const;
	};
} // namespace android::view

