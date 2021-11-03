#pragma once

#include "../../../JObject.hpp"

class JObject;

namespace android::net::eap
{
	class EapSessionConfig_EapMethodConfig : public JObject
	{
	public:
		// Fields
		static jint EAP_TYPE_AKA();
		static jint EAP_TYPE_AKA_PRIME();
		static jint EAP_TYPE_MSCHAP_V2();
		static jint EAP_TYPE_SIM();
		static jint EAP_TYPE_TTLS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapMethodConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapMethodConfig(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		jint getMethodType();
		jint hashCode();
	};
} // namespace android::net::eap

