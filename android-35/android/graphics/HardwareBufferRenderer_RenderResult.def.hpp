#pragma once

#include "../../JObject.hpp"

namespace android::hardware
{
	class SyncFence;
}

namespace android::graphics
{
	class HardwareBufferRenderer_RenderResult : public JObject
	{
	public:
		// Fields
		static jint ERROR_UNKNOWN();
		static jint SUCCESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit HardwareBufferRenderer_RenderResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HardwareBufferRenderer_RenderResult(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::hardware::SyncFence getFence() const;
		jint getStatus() const;
	};
} // namespace android::graphics

