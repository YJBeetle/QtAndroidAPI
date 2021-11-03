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
		static jint CAPABILITY_TYPE_SMS();
		static jint CAPABILITY_TYPE_UT();
		static jint CAPABILITY_TYPE_VIDEO();
		static jint CAPABILITY_TYPE_VOICE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MmTelFeature_MmTelCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MmTelFeature_MmTelCapabilities(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		jint hashCode();
		JString toString();
	};
} // namespace android::telephony::ims::feature

