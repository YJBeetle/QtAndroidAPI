#pragma once

#include "./CloudMediaProviderContract_Capabilities.def.hpp"
#include "./CloudMediaProviderContract_Capabilities_Builder.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline CloudMediaProviderContract_Capabilities_Builder::CloudMediaProviderContract_Capabilities_Builder()
		: JObject(
			"android.provider.CloudMediaProviderContract$Capabilities$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::provider::CloudMediaProviderContract_Capabilities CloudMediaProviderContract_Capabilities_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/provider/CloudMediaProviderContract$Capabilities;"
		);
	}
	inline android::provider::CloudMediaProviderContract_Capabilities_Builder CloudMediaProviderContract_Capabilities_Builder::setMediaCategoriesEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setMediaCategoriesEnabled",
			"(Z)Landroid/provider/CloudMediaProviderContract$Capabilities$Builder;",
			arg0
		);
	}
	inline android::provider::CloudMediaProviderContract_Capabilities_Builder CloudMediaProviderContract_Capabilities_Builder::setSearchEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setSearchEnabled",
			"(Z)Landroid/provider/CloudMediaProviderContract$Capabilities$Builder;",
			arg0
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
