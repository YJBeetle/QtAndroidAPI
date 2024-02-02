#pragma once

#include "../../../../JObject.hpp"

namespace android::graphics
{
	class ColorSpace;
}
namespace android::graphics
{
	class ColorSpace_Named;
}
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
class JObject;

namespace android::hardware::camera2::params
{
	class SessionConfiguration : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint SESSION_HIGH_SPEED();
		static jint SESSION_REGULAR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SessionConfiguration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SessionConfiguration(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SessionConfiguration(jint arg0, JObject arg1, JObject arg2, android::hardware::camera2::CameraCaptureSession_StateCallback arg3);
		
		// Methods
		void clearColorSpace() const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::ColorSpace getColorSpace() const;
		JObject getExecutor() const;
		android::hardware::camera2::params::InputConfiguration getInputConfiguration() const;
		JObject getOutputConfigurations() const;
		android::hardware::camera2::CaptureRequest getSessionParameters() const;
		jint getSessionType() const;
		android::hardware::camera2::CameraCaptureSession_StateCallback getStateCallback() const;
		jint hashCode() const;
		void setColorSpace(android::graphics::ColorSpace_Named arg0) const;
		void setInputConfiguration(android::hardware::camera2::params::InputConfiguration arg0) const;
		void setSessionParameters(android::hardware::camera2::CaptureRequest arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::camera2::params

