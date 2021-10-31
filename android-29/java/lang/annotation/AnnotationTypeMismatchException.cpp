#include "../reflect/Method.hpp"
#include "./AnnotationTypeMismatchException.hpp"

namespace java::lang::annotation
{
	// Fields
	
	AnnotationTypeMismatchException::AnnotationTypeMismatchException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AnnotationTypeMismatchException::AnnotationTypeMismatchException(java::lang::reflect::Method arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.annotation.AnnotationTypeMismatchException",
			"(Ljava/lang/reflect/Method;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject AnnotationTypeMismatchException::element()
	{
		return __thiz.callObjectMethod(
			"element",
			"()Ljava/lang/reflect/Method;"
		);
	}
	jstring AnnotationTypeMismatchException::foundType()
	{
		return __thiz.callObjectMethod(
			"foundType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::lang::annotation

