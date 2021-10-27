#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./AccessibleObject.hpp"
#include "./Executable.hpp"

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
		
		Constructor(QAndroidJniObject obj);
		// Constructors
		Constructor() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getAnnotatedReceiverType();
		QAndroidJniObject getAnnotatedReturnType();
		QAndroidJniObject getAnnotation(jclass arg0);
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
		jarray getTypeParameters();
		jint hashCode();
		jboolean isSynthetic();
		jboolean isVarArgs();
		jobject newInstance(jobjectArray arg0);
		void setAccessible(jboolean arg0);
		jstring toGenericString();
		jstring toString();
	};
} // namespace java::lang::reflect

