#pragma once

#include "./AccessibleObject.hpp"

class JByteArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
class JClass;
class JString;
namespace java::lang
{
	class StringBuilder;
}

namespace java::lang::reflect
{
	class Executable : public java::lang::reflect::AccessibleObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Executable(const char *className, const char *sig, Ts...agv) : java::lang::reflect::AccessibleObject(className, sig, std::forward<Ts>(agv)...) {}
		Executable(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JArray getAnnotatedExceptionTypes() const;
		JArray getAnnotatedParameterTypes() const;
		JObject getAnnotatedReceiverType() const;
		JObject getAnnotatedReturnType() const;
		JObject getAnnotation(JClass arg0) const;
		JArray getAnnotationsByType(JClass arg0) const;
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
		JArray getParameters() const;
		JArray getTypeParameters() const;
		jboolean isSynthetic() const;
		jboolean isVarArgs() const;
		JString toGenericString() const;
	};
} // namespace java::lang::reflect

