#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::graphics
{
	class HardwareRenderer : public JObject
	{
	public:
		// Fields
		static jint SYNC_CONTEXT_IS_STOPPED();
		static jint SYNC_FRAME_DROPPED();
		static jint SYNC_LOST_SURFACE_REWARD_IF_FOUND();
		static jint SYNC_OK();
		static jint SYNC_REDRAW_REQUESTED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit HardwareRenderer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HardwareRenderer(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		HardwareRenderer();
		
		// Methods
		void clearContent() const;
		android::graphics::HardwareRenderer_FrameRenderRequest createRenderRequest() const;
		void destroy() const;
		jboolean isOpaque() const;
		void notifyFramePending() const;
		void setContentRoot(android::graphics::RenderNode arg0) const;
		void setLightSourceAlpha(jfloat arg0, jfloat arg1) const;
		void setLightSourceGeometry(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
		void setName(JString arg0) const;
		void setOpaque(jboolean arg0) const;
		void setSurface(android::view::Surface arg0) const;
		void start() const;
		void stop() const;
	};
} // namespace android::graphics

