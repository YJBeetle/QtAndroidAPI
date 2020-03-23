#pragma once

#ifndef JAVA_LANG_NUMBER
#define JAVA_LANG_NUMBER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::lang
{
	class Number : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jbyte byteValue();
		jshort shortValue();
		jint intValue();
		jlong longValue();
		jfloat floatValue();
		jdouble doubleValue();
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void Number::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.Number",
			"()V");
	}
	
	// Methods
	jbyte Number::byteValue()
	{
		return __thiz.callMethod<jbyte>(
			"byteValue",
			"()B");
	}
	jshort Number::shortValue()
	{
		return __thiz.callMethod<jshort>(
			"shortValue",
			"()S");
	}
	jint Number::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I");
	}
	jlong Number::longValue()
	{
		return __thiz.callMethod<jlong>(
			"longValue",
			"()J");
	}
	jfloat Number::floatValue()
	{
		return __thiz.callMethod<jfloat>(
			"floatValue",
			"()F");
	}
	jdouble Number::doubleValue()
	{
		return __thiz.callMethod<jdouble>(
			"doubleValue",
			"()D");
	}
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class Number : public __jni_impl::java::lang::Number
	{
	public:
		Number(QAndroidJniObject obj) { __thiz = obj; }
		Number()
		{
			__constructor();
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_NUMBER

