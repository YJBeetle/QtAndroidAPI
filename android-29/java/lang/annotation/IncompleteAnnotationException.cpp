#include "./IncompleteAnnotationException.hpp"

namespace java::lang::annotation
{
	// Fields
	
	IncompleteAnnotationException::IncompleteAnnotationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IncompleteAnnotationException::IncompleteAnnotationException(jclass &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.IncompleteAnnotationException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	IncompleteAnnotationException::IncompleteAnnotationException(jclass &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.IncompleteAnnotationException",
			"(Ljava/lang/Class;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jclass IncompleteAnnotationException::annotationType()
	{
		return __thiz.callObjectMethod(
			"annotationType",
			"()Ljava/lang/Class;"
		).object<jclass>();
	}
	jstring IncompleteAnnotationException::elementName()
	{
		return __thiz.callObjectMethod(
			"elementName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang::annotation

