#pragma once

#include "../../../JObject.hpp"
#include "./AccessibleObject.hpp"

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
		jarray getAnnotatedExceptionTypes();
		jarray getAnnotatedParameterTypes();
		JObject getAnnotatedReceiverType();
		JObject getAnnotatedReturnType();
		JObject getAnnotation(jclass arg0);
		jarray getAnnotationsByType(jclass arg0);
		jarray getDeclaredAnnotations();
		jclass getDeclaringClass();
		jarray getExceptionTypes();
		jarray getGenericExceptionTypes();
		jarray getGenericParameterTypes();
		jint getModifiers();
		jstring getName();
		jarray getParameterAnnotations();
		jint getParameterCount();
		jarray getParameterTypes();
		jarray getParameters();
		jarray getTypeParameters();
		jboolean isSynthetic();
		jboolean isVarArgs();
		jstring toGenericString();
	};
} // namespace java::lang::reflect

