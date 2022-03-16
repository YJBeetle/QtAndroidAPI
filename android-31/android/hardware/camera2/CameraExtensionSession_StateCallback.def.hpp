#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraExtensionSession;
}

namespace android::hardware::camera2
{
	class CameraExtensionSession_StateCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraExtensionSession_StateCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraExtensionSession_StateCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CameraExtensionSession_StateCallback();
		
		// Methods
		void onClosed(android::hardware::camera2::CameraExtensionSession arg0) const;
		void onConfigureFailed(android::hardware::camera2::CameraExtensionSession arg0) const;
		void onConfigured(android::hardware::camera2::CameraExtensionSession arg0) const;
	};
} // namespace android::hardware::camera2

