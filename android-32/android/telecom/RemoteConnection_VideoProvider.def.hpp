#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::telecom
{
	class RemoteConnection_VideoProvider_Callback;
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
	class RemoteConnection_VideoProvider : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RemoteConnection_VideoProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RemoteConnection_VideoProvider(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void registerCallback(android::telecom::RemoteConnection_VideoProvider_Callback arg0) const;
		void requestCallDataUsage() const;
		void requestCameraCapabilities() const;
		void sendSessionModifyRequest(android::telecom::VideoProfile arg0, android::telecom::VideoProfile arg1) const;
		void sendSessionModifyResponse(android::telecom::VideoProfile arg0) const;
		void setCamera(JString arg0) const;
		void setDeviceOrientation(jint arg0) const;
		void setDisplaySurface(android::view::Surface arg0) const;
		void setPauseImage(android::net::Uri arg0) const;
		void setPreviewSurface(android::view::Surface arg0) const;
		void setZoom(jfloat arg0) const;
		void unregisterCallback(android::telecom::RemoteConnection_VideoProvider_Callback arg0) const;
	};
} // namespace android::telecom

