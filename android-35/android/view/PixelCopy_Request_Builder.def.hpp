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
	class PixelCopy_Request;
}
namespace android::view
{
	class Surface;
}
namespace android::view
{
	class SurfaceView;
}
namespace android::view
{
	class View;
}
namespace android::view
{
	class Window;
}

namespace android::view
{
	class PixelCopy_Request_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PixelCopy_Request_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PixelCopy_Request_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::view::PixelCopy_Request_Builder ofSurface(android::view::Surface arg0);
		static android::view::PixelCopy_Request_Builder ofSurface(android::view::SurfaceView arg0);
		static android::view::PixelCopy_Request_Builder ofWindow(android::view::View arg0);
		static android::view::PixelCopy_Request_Builder ofWindow(android::view::Window arg0);
		android::view::PixelCopy_Request build() const;
		android::view::PixelCopy_Request_Builder setDestinationBitmap(android::graphics::Bitmap arg0) const;
		android::view::PixelCopy_Request_Builder setSourceRect(android::graphics::Rect arg0) const;
	};
} // namespace android::view

