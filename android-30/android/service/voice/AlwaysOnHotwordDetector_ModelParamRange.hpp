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
		
		// QJniObject forward
		template<typename ...Ts> explicit AlwaysOnHotwordDetector_ModelParamRange(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlwaysOnHotwordDetector_ModelParamRange(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getEnd() const;
		jint getStart() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::service::voice

