#pragma once

#include "../../JObject.hpp"
#include "./View.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics
{
	class Rect;
}
namespace android::graphics
{
	class Region;
}
namespace android::view
{
	class SurfaceControl;
}
namespace android::view
{
	class SurfaceControlViewHost_SurfacePackage;
}

namespace android::view
{
	class SurfaceView : public android::view::View
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceView(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceView(QJniObject obj);
		
		// Constructors
		SurfaceView(android::content::Context arg0);
		SurfaceView(android::content::Context arg0, JObject arg1);
		SurfaceView(android::content::Context arg0, JObject arg1, jint arg2);
		SurfaceView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void draw(android::graphics::Canvas arg0);
		jboolean gatherTransparentRegion(android::graphics::Region arg0);
		JObject getHolder();
		JObject getHostToken();
		jint getImportantForAccessibility();
		android::view::SurfaceControl getSurfaceControl();
		void setAlpha(jfloat arg0);
		void setChildSurfacePackage(android::view::SurfaceControlViewHost_SurfacePackage arg0);
		void setClipBounds(android::graphics::Rect arg0);
		void setSecure(jboolean arg0);
		void setVisibility(jint arg0);
		void setZOrderMediaOverlay(jboolean arg0);
		void setZOrderOnTop(jboolean arg0);
	};
} // namespace android::view

