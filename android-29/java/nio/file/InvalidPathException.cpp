#include "../../../JString.hpp"
#include "./InvalidPathException.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	InvalidPathException::InvalidPathException(JString arg0, JString arg1)
		: java::lang::IllegalArgumentException(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	InvalidPathException::InvalidPathException(JString arg0, JString arg1, jint arg2)
		: java::lang::IllegalArgumentException(
			"java.nio.file.InvalidPathException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	jint InvalidPathException::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	JString InvalidPathException::getInput() const
	{
		return callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		);
	}
	JString InvalidPathException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	JString InvalidPathException::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file

