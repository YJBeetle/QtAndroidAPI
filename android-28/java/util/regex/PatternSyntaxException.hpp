#pragma once

#include "../../../JString.hpp"
#include "./PatternSyntaxException.def.hpp"

namespace java::util::regex
{
	// Fields
	
	// Constructors
	inline PatternSyntaxException::PatternSyntaxException(JString arg0, JString arg1, jint arg2)
		: java::lang::IllegalArgumentException(
			"java.util.regex.PatternSyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline JString PatternSyntaxException::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline jint PatternSyntaxException::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline JString PatternSyntaxException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline JString PatternSyntaxException::getPattern() const
	{
		return callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::regex

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"

