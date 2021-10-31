#include "./AssertionError.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	AssertionError::AssertionError(QAndroidJniObject obj) : java::lang::Error(obj) {}
	
	// Constructors
	AssertionError::AssertionError()
		: java::lang::Error(
			"java.lang.AssertionError",
			"()V"
		) {}
	AssertionError::AssertionError(jboolean arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(Z)V",
			arg0
		) {}
	AssertionError::AssertionError(jchar arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(C)V",
			arg0
		) {}
	AssertionError::AssertionError(jdouble arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(D)V",
			arg0
		) {}
	AssertionError::AssertionError(jfloat arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(F)V",
			arg0
		) {}
	AssertionError::AssertionError(jint arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(I)V",
			arg0
		) {}
	AssertionError::AssertionError(jobject arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(Ljava/lang/Object;)V",
			arg0
		) {}
	AssertionError::AssertionError(jlong arg0)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(J)V",
			arg0
		) {}
	AssertionError::AssertionError(jstring arg0, jthrowable arg1)
		: java::lang::Error(
			"java.lang.AssertionError",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::lang

