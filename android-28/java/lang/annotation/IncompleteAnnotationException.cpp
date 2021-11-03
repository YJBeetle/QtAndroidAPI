#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "./IncompleteAnnotationException.hpp"

namespace java::lang::annotation
{
	// Fields
	
	// QJniObject forward
	IncompleteAnnotationException::IncompleteAnnotationException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IncompleteAnnotationException::IncompleteAnnotationException(JClass arg0, JString arg1)
		: java::lang::RuntimeException(
			"java.lang.annotation.IncompleteAnnotationException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JClass IncompleteAnnotationException::annotationType() const
	{
		return callObjectMethod(
			"annotationType",
			"()Ljava/lang/Class;"
		);
	}
	JString IncompleteAnnotationException::elementName() const
	{
		return callObjectMethod(
			"elementName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::annotation

