#pragma once

#include "../../../../JObject.hpp"

class JObject;
class JString;

namespace android::telephony::ims::feature
{
	class MmTelFeature_MmTelCapabilities : public JObject
	{
	public:
		// Fields
		static jint CAPABILITY_TYPE_CALL_COMPOSER();
		static jint CAPABILITY_TYPE_SMS();
		static jint CAPABILITY_TYPE_UT();
		static jint CAPABILITY_TYPE_VIDEO();
		static jint CAPABILITY_TYPE_VOICE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MmTelFeature_MmTelCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MmTelFeature_MmTelCapabilities(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		jboolean isCapable(jint arg0) const;
		JString toString() const;
	};
} // namespace android::telephony::ims::feature

