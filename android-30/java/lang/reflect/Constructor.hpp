#pragma once

#include "./Executable.hpp"

class JByteArray;
class JArray;
class JObjectArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JClass;
class JObject;
class JString;
namespace java::lang
{
	class StringBuilder;
}
namespace java::lang::reflect
{
	class AccessibleObject;
}

namespace java::lang::reflect
{
	class Constructor : public java::lang::reflect::Executable
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Constructor(const char *className, const char *sig, Ts...agv) : java::lang::reflect::Executable(className, sig, std::forward<Ts>(agv)...) {}
		Constructor(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getAnnotatedReceiverType();
		JObject getAnnotatedReturnType();
		JObject getAnnotation(JClass arg0);
		JArray getDeclaredAnnotations();
		JClass getDeclaringClass();
		JArray getExceptionTypes();
		JArray getGenericExceptionTypes();
		JArray getGenericParameterTypes();
		jint getModifiers();
		JString getName();
		JArray getParameterAnnotations();
		jint getParameterCount();
		JArray getParameterTypes();
		JArray getTypeParameters();
		jint hashCode();
		jboolean isSynthetic();
		jboolean isVarArgs();
		JObject newInstance(JObjectArray arg0);
		void setAccessible(jboolean arg0);
		JString toGenericString();
		JString toString();
	};
} // namespace java::lang::reflect

