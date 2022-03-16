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
		Method(QAndroidJniObject obj) : java::lang::reflect::Executable(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getAnnotatedReturnType() const;
		JObject getAnnotation(JClass arg0) const;
		JArray getDeclaredAnnotations() const;
		JClass getDeclaringClass() const;
		JObject getDefaultValue() const;
		JArray getExceptionTypes() const;
		JArray getGenericExceptionTypes() const;
		JArray getGenericParameterTypes() const;
		JObject getGenericReturnType() const;
		jint getModifiers() const;
		JString getName() const;
		JArray getParameterAnnotations() const;
		jint getParameterCount() const;
		JArray getParameterTypes() const;
		JClass getReturnType() const;
		JArray getTypeParameters() const;
		jint hashCode() const;
		JObject invoke(JObject arg0, JObjectArray arg1) const;
		jboolean isBridge() const;
		jboolean isDefault() const;
		jboolean isSynthetic() const;
		jboolean isVarArgs() const;
		void setAccessible(jboolean arg0) const;
		JString toGenericString() const;
		JString toString() const;
	};
} // namespace java::lang::reflect

