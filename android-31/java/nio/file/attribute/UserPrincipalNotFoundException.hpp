#pragma once

#include "../../../../JString.hpp"
#include "./UserPrincipalNotFoundException.def.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// Constructors
	inline UserPrincipalNotFoundException::UserPrincipalNotFoundException(JString arg0)
		: java::io::IOException(
			"java.nio.file.attribute.UserPrincipalNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline JString UserPrincipalNotFoundException::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file::attribute

// Base class headers
#include "../../../lang/Exception.hpp"
#include "../../../io/IOException.hpp"

