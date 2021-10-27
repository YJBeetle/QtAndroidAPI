#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Error.hpp"
#include "../LinkageError.hpp"
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
		void __constructor(const QString &arg0);
		
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
			"()V"
		);
	}
	void GenericSignatureFormatError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.GenericSignatureFormatError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void GenericSignatureFormatError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.GenericSignatureFormatError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
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

