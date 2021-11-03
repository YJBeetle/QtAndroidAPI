#pragma once

#include "../../../JObject.hpp"

class JClass;
class JObject;
class JString;

namespace android::hardware::camera2
{
	class CaptureRequest_Key : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CaptureRequest_Key(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptureRequest_Key(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JString getName();
		jint hashCode();
		JString toString();
	};
} // namespace android::hardware::camera2

