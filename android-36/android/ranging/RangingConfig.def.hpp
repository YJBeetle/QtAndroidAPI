#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::ranging
{
	class RangingConfig : public JObject
	{
	public:
		// Fields
		static jint RANGING_SESSION_OOB();
		static jint RANGING_SESSION_RAW();
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getRangingSessionType() const;
		JString toString() const;
	};
} // namespace android::ranging

