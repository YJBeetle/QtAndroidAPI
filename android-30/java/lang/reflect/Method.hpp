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
	class Method : public java::lang::reflect::Executable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Method(const char *className, const char *sig, Ts...agv) : java::lang::reflect::Executable(className, sig, std::forward<Ts>(agv)...) {}
		Method(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0);
		JObject getAnnotatedReturnType();
		JObject getAnnotation(JClass arg0);
		JArray getDeclaredAnnotations();
		JClass getDeclaringClass();
		JObject getDefaultValue();
		JArray getExceptionTypes();
		JArray getGenericExceptionTypes();
		JArray getGenericParameterTypes();
		JObject getGenericReturnType();
		jint getModifiers();
		JString getName();
		JArray getParameterAnnotations();
		jint getParameterCount();
		JArray getParameterTypes();
		JClass getReturnType();
		JArray getTypeParameters();
		jint hashCode();
		JObject invoke(JObject arg0, JObjectArray arg1);
		jboolean isBridge();
		jboolean isDefault();
		jboolean isSynthetic();
		jboolean isVarArgs();
		void setAccessible(jboolean arg0);
		JString toGenericString();
		JString toString();
	};
} // namespace java::lang::reflect

