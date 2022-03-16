#include "../../../JString.hpp"
#include "./PatternSyntaxException.hpp"

namespace java::util::regex
{
	// Fields
	
	// Constructors
	PatternSyntaxException::PatternSyntaxException(JString arg0, JString arg1, jint arg2)
		: java::lang::IllegalArgumentException(
			"java.util.regex.PatternSyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	JString PatternSyntaxException::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	jint PatternSyntaxException::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	JString PatternSyntaxException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	JString PatternSyntaxException::getPattern() const
	{
		return callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::util::regex

