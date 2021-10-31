#include "./IndexOutOfBoundsException.hpp"

namespace java::lang
{
	// Fields
	
	IndexOutOfBoundsException::IndexOutOfBoundsException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	IndexOutOfBoundsException::IndexOutOfBoundsException()
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"()V"
		);
	}
	IndexOutOfBoundsException::IndexOutOfBoundsException(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"(I)V",
			arg0
		);
	}
	IndexOutOfBoundsException::IndexOutOfBoundsException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	IndexOutOfBoundsException::IndexOutOfBoundsException(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.IndexOutOfBoundsException",
			"(J)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::lang

