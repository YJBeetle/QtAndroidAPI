#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JObject;

namespace android::net::eap
{
	class EapSessionConfig_EapAkaOption : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapAkaOption(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapAkaOption(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getReauthId() const;
		jint hashCode() const;
	};
} // namespace android::net::eap

