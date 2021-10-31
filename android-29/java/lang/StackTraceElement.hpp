#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class StackTraceElement : public __JniBaseClass
	{
	public:
		// Fields
		
		StackTraceElement(QAndroidJniObject obj);
		// Constructors
		StackTraceElement(jstring arg0, jstring arg1, jstring arg2, jint arg3);
		StackTraceElement(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5, jint arg6);
		StackTraceElement() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jstring getClassLoaderName();
		jstring getClassName();
		jstring getFileName();
		jint getLineNumber();
		jstring getMethodName();
		jstring getModuleName();
		jstring getModuleVersion();
		jint hashCode();
		jboolean isNativeMethod();
		jstring toString();
	};
} // namespace java::lang

