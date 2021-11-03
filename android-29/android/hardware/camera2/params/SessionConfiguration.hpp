#pragma once

#include "../../../../JObject.hpp"

namespace android::hardware::camera2
{
	class CameraCaptureSession_StateCallback;
}
namespace android::hardware::camera2
{
	class CaptureRequest;
}
namespace android::hardware::camera2::params
{
	class InputConfiguration;
}
namespace android::os
{
	class Parcel;
}

namespace android::hardware::camera2::params
{
	class SessionConfiguration : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SESSION_HIGH_SPEED();
		static jint SESSION_REGULAR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SessionConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SessionConfiguration(QAndroidJniObject obj);
		
		// Constructors
		SessionConfiguration(jint arg0, JObject arg1, JObject arg2, android::hardware::camera2::CameraCaptureSession_StateCallback arg3);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		JObject getExecutor();
		android::hardware::camera2::params::InputConfiguration getInputConfiguration();
		JObject getOutputConfigurations();
		android::hardware::camera2::CaptureRequest getSessionParameters();
		jint getSessionType();
		android::hardware::camera2::CameraCaptureSession_StateCallback getStateCallback();
		jint hashCode();
		void setInputConfiguration(android::hardware::camera2::params::InputConfiguration arg0);
		void setSessionParameters(android::hardware::camera2::CaptureRequest arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::hardware::camera2::params

