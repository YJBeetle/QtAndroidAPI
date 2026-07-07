#pragma once

#include "../../JObject.hpp"

namespace android::provider
{
	class CloudMediaProviderContract_Capabilities;
}

namespace android::provider
{
	class CloudMediaProviderContract_Capabilities_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CloudMediaProviderContract_Capabilities_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProviderContract_Capabilities_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		CloudMediaProviderContract_Capabilities_Builder();
		
		// Methods
		android::provider::CloudMediaProviderContract_Capabilities build() const;
		android::provider::CloudMediaProviderContract_Capabilities_Builder setMediaCategoriesEnabled(jboolean arg0) const;
		android::provider::CloudMediaProviderContract_Capabilities_Builder setSearchEnabled(jboolean arg0) const;
	};
} // namespace android::provider

