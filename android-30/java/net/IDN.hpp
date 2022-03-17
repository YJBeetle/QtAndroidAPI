#pragma once

#include "../../JString.hpp"
#include "../lang/StringBuffer.def.hpp"
#include "./IDN.def.hpp"

namespace java::net
{
	// Fields
	inline jint IDN::ALLOW_UNASSIGNED()
	{
		return getStaticField<jint>(
			"java.net.IDN",
			"ALLOW_UNASSIGNED"
		);
	}
	inline jint IDN::USE_STD3_ASCII_RULES()
	{
		return getStaticField<jint>(
			"java.net.IDN",
			"USE_STD3_ASCII_RULES"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString IDN::toASCII(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.IDN",
			"toASCII",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString IDN::toASCII(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.net.IDN",
			"toASCII",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString IDN::toUnicode(JString arg0)
	{
		return callStaticObjectMethod(
			"java.net.IDN",
			"toUnicode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline JString IDN::toUnicode(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.net.IDN",
			"toUnicode",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace java::net

// Base class headers

