#pragma once

#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "./PasswordAuthentication.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline PasswordAuthentication::PasswordAuthentication(JString arg0, JCharArray arg1)
		: JObject(
			"java.net.PasswordAuthentication",
			"(Ljava/lang/String;[C)V",
			arg0.object<jstring>(),
			arg1.object<jcharArray>()
		) {}
	
	// Methods
	inline JCharArray PasswordAuthentication::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		);
	}
	inline JString PasswordAuthentication::getUserName() const
	{
		return callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

// Base class headers

