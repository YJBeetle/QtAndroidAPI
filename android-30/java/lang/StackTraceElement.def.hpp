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
		StackTraceElement(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		StackTraceElement(JString arg0, JString arg1, JString arg2, jint arg3);
		StackTraceElement(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5, jint arg6);
		
		// Methods
		jboolean equals(JObject arg0) const;
		JString getClassLoaderName() const;
		JString getClassName() const;
		JString getFileName() const;
		jint getLineNumber() const;
		JString getMethodName() const;
		JString getModuleName() const;
		JString getModuleVersion() const;
		jint hashCode() const;
		jboolean isNativeMethod() const;
		JString toString() const;
	};
} // namespace java::lang

