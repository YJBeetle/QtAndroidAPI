#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class HardwareBufferRenderer_RenderRequest;
}
namespace android::graphics
{
	class RenderNode;
}
namespace android::hardware
{
	class HardwareBuffer;
}

namespace android::graphics
{
	class HardwareBufferRenderer : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HardwareBufferRenderer(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HardwareBufferRenderer(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		HardwareBufferRenderer(android::hardware::HardwareBuffer arg0);
		
		// Methods
		void close() const;
		jboolean isClosed() const;
		android::graphics::HardwareBufferRenderer_RenderRequest obtainRenderRequest() const;
		void setContentRoot(android::graphics::RenderNode arg0) const;
		void setLightSourceAlpha(jfloat arg0, jfloat arg1) const;
		void setLightSourceGeometry(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const;
	};
} // namespace android::graphics

