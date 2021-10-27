#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"


namespace java::lang
{
	class AssertionError : public java::lang::Error
	{
	public:
		// Fields
		
		AssertionError(QAndroidJniObject obj);
		// Constructors
		AssertionError();
		AssertionError(jboolean &arg0);
		AssertionError(jchar &arg0);
		AssertionError(jdouble &arg0);
		AssertionError(jfloat &arg0);
		AssertionError(jint &arg0);
		AssertionError(jobject &arg0);
		AssertionError(jlong &arg0);
		AssertionError(jstring &arg0, jthrowable &arg1);
		AssertionError(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::lang

