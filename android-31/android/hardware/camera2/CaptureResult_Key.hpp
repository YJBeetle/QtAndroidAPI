#pragma once

#include "../../../JObject.hpp"

class JClass;
class JObject;
class JString;

namespace android::hardware::camera2
{
	class CaptureResult_Key : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptureResult_Key(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaptureResult_Key(QJniObject obj);
		
		// Constructors
		CaptureResult_Key(JString arg0, JClass arg1);
		
		// Methods
		jboolean equals(JObject arg0);
		JString getName();
		jint hashCode();
		JString toString();
	};
} // namespace android::hardware::camera2

