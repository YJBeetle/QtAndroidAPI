#pragma once

#ifndef JAVA_LANG_CLONENOTSUPPORTEDEXCEPTION
#define JAVA_LANG_CLONENOTSUPPORTEDEXCEPTION

#include "../../__JniBaseClass.hpp"
#include "Exception.hpp"


namespace __jni_impl::java::lang
{
	class CloneNotSupportedException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void CloneNotSupportedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.CloneNotSupportedException",
			"()V");
	}
	void CloneNotSupportedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.CloneNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class CloneNotSupportedException : public __jni_impl::java::lang::CloneNotSupportedException
	{
	public:
		CloneNotSupportedException(QAndroidJniObject obj) { __thiz = obj; }
		CloneNotSupportedException()
		{
			__constructor();
		}
		CloneNotSupportedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

#endif // JAVA_LANG_CLONENOTSUPPORTEDEXCEPTION

