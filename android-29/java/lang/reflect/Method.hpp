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
	class Method : public java::lang::reflect::Executable
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Method(const char *className, const char *sig, Ts...agv) : java::lang::reflect::Executable(className, sig, std::forward<Ts>(agv)...) {}
		Method(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getAnnotatedReturnType();
		QAndroidJniObject getAnnotation(jclass arg0);
		jarray getDeclaredAnnotations();
		jclass getDeclaringClass();
		jobject getDefaultValue();
		jarray getExceptionTypes();
		jarray getGenericExceptionTypes();
		jarray getGenericParameterTypes();
		QAndroidJniObject getGenericReturnType();
		jint getModifiers();
		jstring getName();
		jarray getParameterAnnotations();
		jint getParameterCount();
		jarray getParameterTypes();
		jclass getReturnType();
		jarray getTypeParameters();
		jint hashCode();
		jobject invoke(jobject arg0, jobjectArray arg1);
		jboolean isBridge();
		jboolean isDefault();
		jboolean isSynthetic();
		jboolean isVarArgs();
		void setAccessible(jboolean arg0);
		jstring toGenericString();
		jstring toString();
	};
} // namespace java::lang::reflect

