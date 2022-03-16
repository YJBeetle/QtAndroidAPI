#pragma once

#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./BlockedNumberContract.def.hpp"

namespace android::provider
{
	// Fields
	inline JString BlockedNumberContract::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri BlockedNumberContract::AUTHORITY_URI()
	{
		return getStaticObjectField(
			"android.provider.BlockedNumberContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean BlockedNumberContract::canCurrentUserBlockNumbers(android::content::Context arg0)
	{
		return callStaticMethod<jboolean>(
			"android.provider.BlockedNumberContract",
			"canCurrentUserBlockNumbers",
			"(Landroid/content/Context;)Z",
			arg0.object()
		);
	}
	inline jboolean BlockedNumberContract::isBlocked(android::content::Context arg0, JString arg1)
	{
		return callStaticMethod<jboolean>(
			"android.provider.BlockedNumberContract",
			"isBlocked",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jint BlockedNumberContract::unblock(android::content::Context arg0, JString arg1)
	{
		return callStaticMethod<jint>(
			"android.provider.BlockedNumberContract",
			"unblock",
			"(Landroid/content/Context;Ljava/lang/String;)I",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

