#include "../CameraExtensionSession_StateCallback.hpp"
#include "./ExtensionSessionConfiguration.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	ExtensionSessionConfiguration::ExtensionSessionConfiguration(jint arg0, JObject arg1, JObject arg2, android::hardware::camera2::CameraExtensionSession_StateCallback arg3)
		: JObject(
			"android.hardware.camera2.params.ExtensionSessionConfiguration",
			"(ILjava/util/List;Ljava/util/concurrent/Executor;Landroid/hardware/camera2/CameraExtensionSession$StateCallback;)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	JObject ExtensionSessionConfiguration::getExecutor() const
	{
		return callObjectMethod(
			"getExecutor",
			"()Ljava/util/concurrent/Executor;"
		);
	}
	jint ExtensionSessionConfiguration::getExtension() const
	{
		return callMethod<jint>(
			"getExtension",
			"()I"
		);
	}
	JObject ExtensionSessionConfiguration::getOutputConfigurations() const
	{
		return callObjectMethod(
			"getOutputConfigurations",
			"()Ljava/util/List;"
		);
	}
	android::hardware::camera2::CameraExtensionSession_StateCallback ExtensionSessionConfiguration::getStateCallback() const
	{
		return callObjectMethod(
			"getStateCallback",
			"()Landroid/hardware/camera2/CameraExtensionSession$StateCallback;"
		);
	}
} // namespace android::hardware::camera2::params

