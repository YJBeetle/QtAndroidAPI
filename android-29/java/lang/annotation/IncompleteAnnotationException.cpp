#include "../../../JClass.hpp"
#include "../../../JString.hpp"
#include "./IncompleteAnnotationException.hpp"

namespace java::lang::annotation
{
	// Fields
	
	// QAndroidJniObject forward
	IncompleteAnnotationException::IncompleteAnnotationException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IncompleteAnnotationException::IncompleteAnnotationException(JClass arg0, JString arg1)
		: java::lang::RuntimeException(
			"java.lang.annotation.IncompleteAnnotationException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0.object<jclass>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	JClass IncompleteAnnotationException::annotationType()
	{
		return callObjectMethod(
			"annotationType",
			"()Ljava/lang/Class;"
		);
	}
	JString IncompleteAnnotationException::elementName()
	{
		return callObjectMethod(
			"elementName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang::annotation

