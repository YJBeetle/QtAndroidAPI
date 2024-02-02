#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "./PixelCopy_Request.def.hpp"
#include "./Surface.def.hpp"
#include "./SurfaceView.def.hpp"
#include "./View.def.hpp"
#include "./Window.def.hpp"
#include "./PixelCopy_Request_Builder.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::view::PixelCopy_Request_Builder PixelCopy_Request_Builder::ofSurface(android::view::Surface arg0)
	{
		return callStaticObjectMethod(
			"android.view.PixelCopy$Request$Builder",
			"ofSurface",
			"(Landroid/view/Surface;)Landroid/view/PixelCopy$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::PixelCopy_Request_Builder PixelCopy_Request_Builder::ofSurface(android::view::SurfaceView arg0)
	{
		return callStaticObjectMethod(
			"android.view.PixelCopy$Request$Builder",
			"ofSurface",
			"(Landroid/view/SurfaceView;)Landroid/view/PixelCopy$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::PixelCopy_Request_Builder PixelCopy_Request_Builder::ofWindow(android::view::View arg0)
	{
		return callStaticObjectMethod(
			"android.view.PixelCopy$Request$Builder",
			"ofWindow",
			"(Landroid/view/View;)Landroid/view/PixelCopy$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::PixelCopy_Request_Builder PixelCopy_Request_Builder::ofWindow(android::view::Window arg0)
	{
		return callStaticObjectMethod(
			"android.view.PixelCopy$Request$Builder",
			"ofWindow",
			"(Landroid/view/Window;)Landroid/view/PixelCopy$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::PixelCopy_Request PixelCopy_Request_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/PixelCopy$Request;"
		);
	}
	inline android::view::PixelCopy_Request_Builder PixelCopy_Request_Builder::setDestinationBitmap(android::graphics::Bitmap arg0) const
	{
		return callObjectMethod(
			"setDestinationBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/view/PixelCopy$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::PixelCopy_Request_Builder PixelCopy_Request_Builder::setSourceRect(android::graphics::Rect arg0) const
	{
		return callObjectMethod(
			"setSourceRect",
			"(Landroid/graphics/Rect;)Landroid/view/PixelCopy$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
