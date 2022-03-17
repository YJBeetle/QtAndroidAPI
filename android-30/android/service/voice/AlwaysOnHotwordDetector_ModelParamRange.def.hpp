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
		AlwaysOnHotwordDetector_ModelParamRange(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getEnd() const;
		jint getStart() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::service::voice

