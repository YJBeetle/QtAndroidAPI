#include "./PatternSyntaxException.hpp"

namespace java::util::regex
{
	// Fields
	
	// QJniObject forward
	PatternSyntaxException::PatternSyntaxException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	PatternSyntaxException::PatternSyntaxException(jstring arg0, jstring arg1, jint arg2)
		: java::lang::IllegalArgumentException(
			"java.util.regex.PatternSyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jstring PatternSyntaxException::getDescription()
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PatternSyntaxException::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	jstring PatternSyntaxException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PatternSyntaxException::getPattern()
	{
		return callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::util::regex

