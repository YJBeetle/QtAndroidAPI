#pragma once

#ifndef JAVA_UTIL_JAR_JAREXCEPTION
#define JAVA_UTIL_JAR_JAREXCEPTION

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
			"()V");
	}
	void JarException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarException",
			"(Ljava/lang/String;)V",
			arg0);
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

#endif // JAVA_UTIL_JAR_JAREXCEPTION

