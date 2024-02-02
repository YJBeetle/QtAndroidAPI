#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::credentials
{
	class CredentialOption;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::credentials
{
	class CredentialOption_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CredentialOption_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CredentialOption_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CredentialOption_Builder(JString arg0, android::os::Bundle arg1, android::os::Bundle arg2);
		
		// Methods
		android::credentials::CredentialOption_Builder addAllowedProvider(android::content::ComponentName arg0) const;
		android::credentials::CredentialOption build() const;
		android::credentials::CredentialOption_Builder setAllowedProviders(JObject arg0) const;
		android::credentials::CredentialOption_Builder setIsSystemProviderRequired(jboolean arg0) const;
	};
} // namespace android::credentials

