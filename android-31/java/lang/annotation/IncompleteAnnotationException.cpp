#include "./IncompleteAnnotationException.hpp"

namespace java::lang::annotation
{
	// Fields
	
	// QAndroidJniObject forward
	IncompleteAnnotationException::IncompleteAnnotationException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	IncompleteAnnotationException::IncompleteAnnotationException(jclass arg0, jstring arg1)
		: java::lang::RuntimeException(
			"java.lang.annotation.IncompleteAnnotationException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jclass IncompleteAnnotationException::annotationType()
	{
		return callObjectMethod(
			"annotationType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jstring IncompleteAnnotationException::elementName()
	{
		return callObjectMethod(
			"elementName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang::annotation

