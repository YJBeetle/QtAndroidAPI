#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;

namespace android::service::voice
{
	class AlwaysOnHotwordDetector_ModelParamRange : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlwaysOnHotwordDetector_ModelParamRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlwaysOnHotwordDetector_ModelParamRange(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		jint getEnd();
		jint getStart();
		jint hashCode();
		JString toString();
	};
} // namespace android::service::voice

