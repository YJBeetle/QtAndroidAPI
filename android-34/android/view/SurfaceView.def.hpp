#pragma once

#include "./View.def.hpp"

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
	class SurfaceControl_Transaction;
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
		static jint SURFACE_LIFECYCLE_DEFAULT();
		static jint SURFACE_LIFECYCLE_FOLLOWS_ATTACHMENT();
		static jint SURFACE_LIFECYCLE_FOLLOWS_VISIBILITY();
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceView(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceView(QJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		SurfaceView(android::content::Context arg0);
		SurfaceView(android::content::Context arg0, JObject arg1);
		SurfaceView(android::content::Context arg0, JObject arg1, jint arg2);
		SurfaceView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void applyTransactionToFrame(android::view::SurfaceControl_Transaction arg0) const;
		void draw(android::graphics::Canvas arg0) const;
		jboolean gatherTransparentRegion(android::graphics::Region arg0) const;
		JObject getHolder() const;
		JObject getHostToken() const;
		jint getImportantForAccessibility() const;
		android::view::SurfaceControl getSurfaceControl() const;
		jboolean hasOverlappingRendering() const;
		void setAlpha(jfloat arg0) const;
		void setChildSurfacePackage(android::view::SurfaceControlViewHost_SurfacePackage arg0) const;
		void setClipBounds(android::graphics::Rect arg0) const;
		void setSecure(jboolean arg0) const;
		void setSurfaceLifecycle(jint arg0) const;
		void setVisibility(jint arg0) const;
		void setZOrderMediaOverlay(jboolean arg0) const;
		void setZOrderOnTop(jboolean arg0) const;
	};
} // namespace android::view

