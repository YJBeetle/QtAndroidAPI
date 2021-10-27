#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Error.hpp"
#include "./LinkageError.hpp"


namespace __jni_impl::java::lang
{
	class ClassCircularityError : public __jni_impl::java::lang::LinkageError
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
	void ClassCircularityError::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCircularityError",
			"()V"
		);
	}
	void ClassCircularityError::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCircularityError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ClassCircularityError::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.lang.ClassCircularityError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::lang

namespace java::lang
{
	class ClassCircularityError : public __jni_impl::java::lang::ClassCircularityError
	{
	public:
		ClassCircularityError(QAndroidJniObject obj) { __thiz = obj; }
		ClassCircularityError()
		{
			__constructor();
		}
		ClassCircularityError(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::lang

