#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics
{
	class HardwareRenderer_FrameRenderRequest;
}
namespace android::graphics
{
	class RenderNode;
}
namespace android::view
{
	class Surface;
}

namespace android::graphics
{
	class HardwareRenderer : public __JniBaseClass
	{
	public:
		// Fields
		static jint SYNC_CONTEXT_IS_STOPPED();
		static jint SYNC_FRAME_DROPPED();
		static jint SYNC_LOST_SURFACE_REWARD_IF_FOUND();
		static jint SYNC_OK();
		static jint SYNC_REDRAW_REQUESTED();
		
		// QJniObject forward
		template<typename ...Ts> explicit HardwareRenderer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		HardwareRenderer(QJniObject obj);
		
		// Constructors
		HardwareRenderer();
		
		// Methods
		void clearContent();
		android::graphics::HardwareRenderer_FrameRenderRequest createRenderRequest();
		void destroy();
		jboolean isOpaque();
		void notifyFramePending();
		void setContentRoot(android::graphics::RenderNode arg0);
		void setLightSourceAlpha(jfloat arg0, jfloat arg1);
		void setLightSourceGeometry(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setName(jstring arg0);
		void setOpaque(jboolean arg0);
		void setSurface(android::view::Surface arg0);
		void start();
		void stop();
	};
} // namespace android::graphics

