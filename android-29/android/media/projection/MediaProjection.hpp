#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::display
{
	class VirtualDisplay;
}
namespace android::hardware::display
{
	class VirtualDisplay_Callback;
}
namespace android::media::projection
{
	class MediaProjection_Callback;
}
namespace android::os
{
	class Handler;
}
namespace android::view
{
	class Surface;
}
class JString;

namespace android::media::projection
{
	class MediaProjection : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaProjection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaProjection(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::hardware::display::VirtualDisplay createVirtualDisplay(JString arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::view::Surface arg5, android::hardware::display::VirtualDisplay_Callback arg6, android::os::Handler arg7) const;
		void registerCallback(android::media::projection::MediaProjection_Callback arg0, android::os::Handler arg1) const;
		void stop() const;
		void unregisterCallback(android::media::projection::MediaProjection_Callback arg0) const;
	};
} // namespace android::media::projection

