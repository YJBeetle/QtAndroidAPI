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
		
		// QJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapAkaOption(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapAkaOption(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JByteArray getReauthId() const;
		jint hashCode() const;
	};
} // namespace android::net::eap

