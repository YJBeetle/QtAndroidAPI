#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Handler;
}
namespace android::telecom
{
	class InCallService_VideoCall_Callback;
}
namespace android::telecom
{
	class VideoProfile;
}
namespace android::view
{
	class Surface;
}
class JString;

namespace android::telecom
{
	class InCallService_VideoCall : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InCallService_VideoCall(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InCallService_VideoCall(QJniObject obj);
		
		// Constructors
		InCallService_VideoCall();
		
		// Methods
		void registerCallback(android::telecom::InCallService_VideoCall_Callback arg0) const;
		void registerCallback(android::telecom::InCallService_VideoCall_Callback arg0, android::os::Handler arg1) const;
		void requestCallDataUsage() const;
		void requestCameraCapabilities() const;
		void sendSessionModifyRequest(android::telecom::VideoProfile arg0) const;
		void sendSessionModifyResponse(android::telecom::VideoProfile arg0) const;
		void setCamera(JString arg0) const;
		void setDeviceOrientation(jint arg0) const;
		void setDisplaySurface(android::view::Surface arg0) const;
		void setPauseImage(android::net::Uri arg0) const;
		void setPreviewSurface(android::view::Surface arg0) const;
		void setZoom(jfloat arg0) const;
		void unregisterCallback(android::telecom::InCallService_VideoCall_Callback arg0) const;
	};
} // namespace android::telecom

