#include "../CameraExtensionSession_StateCallback.hpp"
#include "./ExtensionSessionConfiguration.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// QJniObject forward
	ExtensionSessionConfiguration::ExtensionSessionConfiguration(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ExtensionSessionConfiguration::ExtensionSessionConfiguration(jint arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::hardware::camera2::CameraExtensionSession_StateCallback arg3)
		: __JniBaseClass(
			"android.hardware.camera2.params.ExtensionSessionConfiguration",
			"(ILjava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraExtensionSession$StateCallback;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	__JniBaseClass ExtensionSessionConfiguration::getExecutor()
	{
		return callObjectMethod(
			"getExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	jint ExtensionSessionConfiguration::getExtension()
	{
		return callMethod<jint>(
			"getExtension",
			"()I"
		);
	}
	__JniBaseClass ExtensionSessionConfiguration::getOutputConfigurations()
	{
		return callObjectMethod(
			"getOutputConfigurations",
			"()Ljava/util/List;"
		);
	}
	android::hardware::camera2::CameraExtensionSession_StateCallback ExtensionSessionConfiguration::getStateCallback()
	{
		return callObjectMethod(
			"getStateCallback",
			"()Landroid/hardware/camera2/CameraExtensionSession$StateCallback;"
		);
	}
} // namespace android::hardware::camera2::params

