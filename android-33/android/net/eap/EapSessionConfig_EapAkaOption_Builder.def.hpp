#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::net::eap
{
	class EapSessionConfig_EapAkaOption;
}

namespace android::net::eap
{
	class EapSessionConfig_EapAkaOption_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EapSessionConfig_EapAkaOption_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EapSessionConfig_EapAkaOption_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		EapSessionConfig_EapAkaOption_Builder();
		
		// Methods
		android::net::eap::EapSessionConfig_EapAkaOption build() const;
		android::net::eap::EapSessionConfig_EapAkaOption_Builder setReauthId(JByteArray arg0) const;
	};
} // namespace android::net::eap

