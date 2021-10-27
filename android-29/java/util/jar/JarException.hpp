#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../../io/IOException.hpp"
#include "../zip/ZipException.hpp"


namespace __jni_impl::java::util::jar
{
	class JarException : public __jni_impl::java::util::zip::ZipException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::java::util::jar


namespace __jni_impl::java::util::jar
{
	// Fields
	
	// Constructors
	void JarException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarException",
			"()V"
		);
	}
	void JarException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void JarException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::java::util::jar

namespace java::util::jar
{
	class JarException : public __jni_impl::java::util::jar::JarException
	{
	public:
		JarException(QAndroidJniObject obj) { __thiz = obj; }
		JarException()
		{
			__constructor();
		}
		JarException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::jar

