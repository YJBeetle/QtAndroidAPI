#pragma once

#include "../content/Context.def.hpp"
#include "./KeyStoreParameter.def.hpp"
#include "./KeyStoreParameter_Builder.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	inline KeyStoreParameter_Builder::KeyStoreParameter_Builder(android::content::Context arg0)
		: JObject(
			"android.security.KeyStoreParameter$Builder",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::security::KeyStoreParameter KeyStoreParameter_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/security/KeyStoreParameter;"
		);
	}
	inline android::security::KeyStoreParameter_Builder KeyStoreParameter_Builder::setEncryptionRequired(jboolean arg0) const
	{
		return callObjectMethod(
			"setEncryptionRequired",
			"(Z)Landroid/security/KeyStoreParameter$Builder;",
			arg0
		);
	}
} // namespace android::security

// Base class headers

