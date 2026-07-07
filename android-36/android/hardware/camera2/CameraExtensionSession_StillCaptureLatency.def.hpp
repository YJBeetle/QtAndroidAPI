#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::hardware::camera2
{
	class CameraExtensionSession_StillCaptureLatency : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CameraExtensionSession_StillCaptureLatency(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CameraExtensionSession_StillCaptureLatency(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CameraExtensionSession_StillCaptureLatency(jlong arg0, jlong arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jlong getCaptureLatency() const;
		jlong getProcessingLatency() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2

