#pragma once

#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./LocalSocketAddress_Namespace.def.hpp"

namespace android::net
{
	// Fields
	inline android::net::LocalSocketAddress_Namespace LocalSocketAddress_Namespace::ABSTRACT()
	{
		return getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"ABSTRACT",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	inline android::net::LocalSocketAddress_Namespace LocalSocketAddress_Namespace::FILESYSTEM()
	{
		return getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"FILESYSTEM",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	inline android::net::LocalSocketAddress_Namespace LocalSocketAddress_Namespace::RESERVED()
	{
		return getStaticObjectField(
			"android.net.LocalSocketAddress$Namespace",
			"RESERVED",
			"Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::LocalSocketAddress_Namespace LocalSocketAddress_Namespace::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.net.LocalSocketAddress$Namespace",
			"valueOf",
			"(Ljava/lang/String;)Landroid/net/LocalSocketAddress$Namespace;",
			arg0.object<jstring>()
		);
	}
	inline JArray LocalSocketAddress_Namespace::values()
	{
		return callStaticObjectMethod(
			"android.net.LocalSocketAddress$Namespace",
			"values",
			"()[Landroid/net/LocalSocketAddress$Namespace;"
		);
	}
} // namespace android::net

// Base class headers
#include "../../java/lang/Enum.hpp"

