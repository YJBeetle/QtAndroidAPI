#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::hardware::camera2
{
	class CameraExtensionSession_StateCallback;
}

namespace android::hardware::camera2::params
{
	class ExtensionSessionConfiguration : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExtensionSessionConfiguration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ExtensionSessionConfiguration(QJniObject obj);
		
		// Constructors
		ExtensionSessionConfiguration(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::hardware::camera2::CameraExtensionSession_StateCallback arg3);
		
		// Methods
		__JniBaseClass getExecutor();
		jint getExtension();
		__JniBaseClass getOutputConfigurations();
		android::hardware::camera2::CameraExtensionSession_StateCallback getStateCallback();
	};
} // namespace android::hardware::camera2::params

