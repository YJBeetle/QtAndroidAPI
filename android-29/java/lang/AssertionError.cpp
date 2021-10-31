#include "./AssertionError.hpp"

namespace java::lang
{
	// Fields
	
	AssertionError::AssertionError(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AssertionError::AssertionError()
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"()V"
		);
	}
	AssertionError::AssertionError(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(Z)V",
			arg0
		);
	}
	AssertionError::AssertionError(jchar arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(C)V",
			arg0
		);
	}
	AssertionError::AssertionError(jdouble arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(D)V",
			arg0
		);
	}
	AssertionError::AssertionError(jfloat arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(F)V",
			arg0
		);
	}
	AssertionError::AssertionError(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(I)V",
			arg0
		);
	}
	AssertionError::AssertionError(jobject arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	AssertionError::AssertionError(jlong arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(J)V",
			arg0
		);
	}
	AssertionError::AssertionError(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"java.lang.AssertionError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace java::lang

