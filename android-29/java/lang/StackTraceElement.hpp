#pragma once

#include "../../JObject.hpp"

class JArray;
class JClass;
class JObject;
class JString;
class JThrowable;

namespace java::lang
{
	class StackTraceElement : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StackTraceElement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StackTraceElement(QJniObject obj);
		
		// Constructors
		StackTraceElement(JString arg0, JString arg1, JString arg2, jint arg3);
		StackTraceElement(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5, jint arg6);
		
		// Methods
		jboolean equals(JObject arg0);
		JString getClassLoaderName();
		JString getClassName();
		JString getFileName();
		jint getLineNumber();
		JString getMethodName();
		JString getModuleName();
		JString getModuleVersion();
		jint hashCode();
		jboolean isNativeMethod();
		JString toString();
	};
} // namespace java::lang

