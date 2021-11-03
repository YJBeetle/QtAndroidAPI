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
		JArray getAnnotatedExceptionTypes();
		JArray getAnnotatedParameterTypes();
		JObject getAnnotatedReceiverType();
		JObject getAnnotatedReturnType();
		JObject getAnnotation(JClass arg0);
		JArray getAnnotationsByType(JClass arg0);
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
		JArray getParameters();
		JArray getTypeParameters();
		jboolean isSynthetic();
		jboolean isVarArgs();
		JString toGenericString();
	};
} // namespace java::lang::reflect

