#pragma once

#include "../../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraExtensionSession_StateCallback;
}

namespace android::hardware::camera2::params
{
	class ExtensionSessionConfiguration : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExtensionSessionConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExtensionSessionConfiguration(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ExtensionSessionConfiguration(jint arg0, JObject arg1, JObject arg2, android::hardware::camera2::CameraExtensionSession_StateCallback arg3);
		
		// Methods
		JObject getExecutor() const;
		jint getExtension() const;
		JObject getOutputConfigurations() const;
		android::hardware::camera2::CameraExtensionSession_StateCallback getStateCallback() const;
	};
} // namespace android::hardware::camera2::params

