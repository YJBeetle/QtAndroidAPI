#pragma once

#include "../../../JString.hpp"
#include "./InvalidPathException.def.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	inline InvalidPathException::InvalidPathException(JString arg0, JString arg1)
		: java::lang::IllegalArgumentException(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline InvalidPathException::InvalidPathException(JString arg0, JString arg1, jint arg2)
		: java::lang::IllegalArgumentException(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline jint InvalidPathException::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline JString InvalidPathException::getInput() const
	{
		return callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		);
	}
	inline JString InvalidPathException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline JString InvalidPathException::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file

// Base class headers
#include "../../lang/Exception.hpp"
#include "../../lang/RuntimeException.hpp"
#include "../../lang/IllegalArgumentException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
