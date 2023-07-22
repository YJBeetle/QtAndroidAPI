#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class Surface;
}
class JString;

namespace android::provider
{
	class CloudMediaProvider_CloudMediaSurfaceController : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CloudMediaProvider_CloudMediaSurfaceController(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProvider_CloudMediaSurfaceController(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		CloudMediaProvider_CloudMediaSurfaceController();
		
		// Methods
		void onConfigChange(android::os::Bundle arg0) const;
		void onDestroy() const;
		void onMediaPause(jint arg0) const;
		void onMediaPlay(jint arg0) const;
		void onMediaSeekTo(jint arg0, jlong arg1) const;
		void onPlayerCreate() const;
		void onPlayerRelease() const;
		void onSurfaceChanged(jint arg0, jint arg1, jint arg2, jint arg3) const;
		void onSurfaceCreated(jint arg0, android::view::Surface arg1, JString arg2) const;
		void onSurfaceDestroyed(jint arg0) const;
	};
} // namespace android::provider

