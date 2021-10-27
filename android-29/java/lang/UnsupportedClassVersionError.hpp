#pragma once

#include "../../__JniBaseClass.hpp"
#include "Error.hpp"
#include "LinkageError.hpp"
#include "ClassFormatError.hpp"


namespace __jni_impl::java::lang
{
	class UnsupportedClassVersionError : public __jni_impl::java::lang::ClassFormatError
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::lang


namespace __jni_impl::java::lang
{
	// Fields
	
	// Constructors
	void UnsupportedClassVersionError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedClassVersionError",
			"()V"
		);
	}
	void UnsupportedClassVersionError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedClassVersionError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UnsupportedClassVersionError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.UnsupportedClassVersionError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class UnsupportedClassVersionError : public __jni_impl::java::lang::UnsupportedClassVersionError
	{
	public:
		UnsupportedClassVersionError(QAndroidJniObject obj) { __thiz = obj; }
		UnsupportedClassVersionError()
		{
			__constructor();
		}
		UnsupportedClassVersionError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

