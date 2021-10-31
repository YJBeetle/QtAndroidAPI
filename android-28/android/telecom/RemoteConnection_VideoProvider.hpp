#pragma once

#include "../../__JniBaseClass.hpp"

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

namespace android::telecom
{
	class RemoteConnection_VideoProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RemoteConnection_VideoProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RemoteConnection_VideoProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		void registerCallback(android::telecom::RemoteConnection_VideoProvider_Callback arg0);
		void requestCallDataUsage();
		void requestCameraCapabilities();
		void sendSessionModifyRequest(android::telecom::VideoProfile arg0, android::telecom::VideoProfile arg1);
		void sendSessionModifyResponse(android::telecom::VideoProfile arg0);
		void setCamera(jstring arg0);
		void setDeviceOrientation(jint arg0);
		void setDisplaySurface(android::view::Surface arg0);
		void setPauseImage(android::net::Uri arg0);
		void setPreviewSurface(android::view::Surface arg0);
		void setZoom(jfloat arg0);
		void unregisterCallback(android::telecom::RemoteConnection_VideoProvider_Callback arg0);
	};
} // namespace android::telecom

