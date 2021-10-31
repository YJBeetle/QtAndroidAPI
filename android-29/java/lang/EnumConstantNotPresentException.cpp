#include "./EnumConstantNotPresentException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	EnumConstantNotPresentException::EnumConstantNotPresentException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	EnumConstantNotPresentException::EnumConstantNotPresentException(jclass arg0, jstring arg1)
		: java::lang::RuntimeException(
			"java.lang.EnumConstantNotPresentException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jstring EnumConstantNotPresentException::constantName()
	{
		return callObjectMethod(
			"constantName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jclass EnumConstantNotPresentException::enumType()
	{
		return callObjectMethod(
			"enumType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
} // namespace java::lang

