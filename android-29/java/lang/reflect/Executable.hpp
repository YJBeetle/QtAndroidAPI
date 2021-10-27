#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		Executable(QAndroidJniObject obj);
		// Constructors
		Executable() = default;
		
		// Methods
		jarray getAnnotatedExceptionTypes();
		jarray getAnnotatedParameterTypes();
		QAndroidJniObject getAnnotatedReceiverType();
		QAndroidJniObject getAnnotatedReturnType();
		QAndroidJniObject getAnnotation(jclass arg0);
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

