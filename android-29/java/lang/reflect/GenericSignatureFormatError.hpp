#pragma once

#ifndef JAVA_LANG_REFLECT_GENERICSIGNATUREFORMATERROR
#define JAVA_LANG_REFLECT_GENERICSIGNATUREFORMATERROR

#include "../ClassFormatError.hpp"


namespace __jni_impl::java::lang::reflect
{
	class GenericSignatureFormatError : public __jni_impl::java::lang::ClassFormatError
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang::reflect


namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void GenericSignatureFormatError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.GenericSignatureFormatError",
			"()V");
	}
	void GenericSignatureFormatError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.GenericSignatureFormatError",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class GenericSignatureFormatError : public __jni_impl::java::lang::reflect::GenericSignatureFormatError
	{
	public:
		GenericSignatureFormatError(QAndroidJniObject obj) { __thiz = obj; }
		GenericSignatureFormatError()
		{
			__constructor();
		}
		GenericSignatureFormatError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang::reflect

#endif // JAVA_LANG_REFLECT_GENERICSIGNATUREFORMATERROR

