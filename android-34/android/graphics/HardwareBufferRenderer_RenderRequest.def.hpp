#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class ColorSpace;
}
namespace android::graphics
{
	class HardwareBufferRenderer;
}

namespace android::graphics
{
	class HardwareBufferRenderer_RenderRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HardwareBufferRenderer_RenderRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HardwareBufferRenderer_RenderRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void draw(JObject arg0, JObject arg1) const;
		android::graphics::HardwareBufferRenderer_RenderRequest setBufferTransform(jint arg0) const;
		android::graphics::HardwareBufferRenderer_RenderRequest setColorSpace(android::graphics::ColorSpace arg0) const;
	};
} // namespace android::graphics

