#pragma once

#include "../io/ObjectOutputStream.def.hpp"
#include "../../JObject.hpp"
#include "./GuardedObject.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline GuardedObject::GuardedObject(JObject arg0, JObject arg1)
		: JObject(
			"java.security.GuardedObject",
			"(Ljava/lang/Object;Ljava/security/Guard;)V",
			arg0.object<jobject>(),
			arg1.object()
		) {}
	
	// Methods
	inline JObject GuardedObject::getObject() const
	{
		return callObjectMethod(
			"getObject",
			"()Ljava/lang/Object;"
		);
	}
} // namespace java::security

// Base class headers

