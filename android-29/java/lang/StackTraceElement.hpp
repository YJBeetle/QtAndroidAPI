#pragma once

#include "../../JObject.hpp"


namespace java::lang
{
	class StackTraceElement : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StackTraceElement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StackTraceElement(QAndroidJniObject obj);
		
		// Constructors
		StackTraceElement(jstring arg0, jstring arg1, jstring arg2, jint arg3);
		StackTraceElement(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5, jint arg6);
		
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

