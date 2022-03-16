#pragma once

#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "./EnumConstantNotPresentException.def.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	inline EnumConstantNotPresentException::EnumConstantNotPresentException(JClass arg0, JString arg1)
		: java::lang::RuntimeException(
			"java.lang.EnumConstantNotPresentException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JString EnumConstantNotPresentException::constantName() const
	{
		return callObjectMethod(
			"constantName",
			"()Ljava/lang/String;"
		);
	}
	inline JClass EnumConstantNotPresentException::enumType() const
	{
		return callObjectMethod(
			"enumType",
			"()Ljava/lang/Class;"
		);
	}
} // namespace java::lang

// Base class headers
#include "./Exception.hpp"
#include "./RuntimeException.hpp"

