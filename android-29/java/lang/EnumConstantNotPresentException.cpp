#include "../../JClass.hpp"
#include "../../JString.hpp"
#include "./EnumConstantNotPresentException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	EnumConstantNotPresentException::EnumConstantNotPresentException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	EnumConstantNotPresentException::EnumConstantNotPresentException(JClass arg0, JString arg1)
		: java::lang::RuntimeException(
			"java.lang.EnumConstantNotPresentException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JString EnumConstantNotPresentException::constantName()
	{
		return callObjectMethod(
			"constantName",
			"()Ljava/lang/String;"
		);
	}
	JClass EnumConstantNotPresentException::enumType()
	{
		return callObjectMethod(
			"enumType",
			"()Ljava/lang/Class;"
		);
	}
} // namespace java::lang

