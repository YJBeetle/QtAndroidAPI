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
	class Region;
}

namespace android::view
{
	class SurfaceView : public android::view::View
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SurfaceView(const char *className, const char *sig, Ts...agv) : android::view::View(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceView(QJniObject obj) : android::view::View(obj) {}
		
		// Constructors
		SurfaceView(android::content::Context arg0);
		SurfaceView(android::content::Context arg0, JObject arg1);
		SurfaceView(android::content::Context arg0, JObject arg1, jint arg2);
		SurfaceView(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void draw(android::graphics::Canvas arg0) const;
		jboolean gatherTransparentRegion(android::graphics::Region arg0) const;
		JObject getHolder() const;
		void setSecure(jboolean arg0) const;
		void setVisibility(jint arg0) const;
		void setZOrderMediaOverlay(jboolean arg0) const;
		void setZOrderOnTop(jboolean arg0) const;
	};
} // namespace android::view

