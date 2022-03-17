#pragma once

#include "./Executable.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Constructor(const char *className, const char *sig, Ts...agv) : java::lang::reflect::Executable(className, sig, std::forward<Ts>(agv)...) {}
		Constructor(QAndroidJniObject obj) : java::lang::reflect::Executable(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getAnnotatedReceiverType() const;
		JObject getAnnotatedReturnType() const;
		JObject getAnnotation(JClass arg0) const;
		JArray getDeclaredAnnotations() const;
		JClass getDeclaringClass() const;
		JArray getExceptionTypes() const;
		JArray getGenericExceptionTypes() const;
		JArray getGenericParameterTypes() const;
		jint getModifiers() const;
		JString getName() const;
		JArray getParameterAnnotations() const;
		jint getParameterCount() const;
		JArray getParameterTypes() const;
		JArray getTypeParameters() const;
		jint hashCode() const;
		jboolean isSynthetic() const;
		jboolean isVarArgs() const;
		JObject newInstance(JObjectArray arg0) const;
		void setAccessible(jboolean arg0) const;
		JString toGenericString() const;
		JString toString() const;
	};
} // namespace java::lang::reflect

