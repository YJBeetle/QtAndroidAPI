#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang::reflect
{
	class Executable;
}

namespace java::lang::reflect
{
	class Parameter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Parameter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Parameter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		__JniBaseClass getAnnotatedType();
		__JniBaseClass getAnnotation(jclass arg0);
		jarray getAnnotations();
		jarray getAnnotationsByType(jclass arg0);
		__JniBaseClass getDeclaredAnnotation(jclass arg0);
		jarray getDeclaredAnnotations();
		jarray getDeclaredAnnotationsByType(jclass arg0);
		java::lang::reflect::Executable getDeclaringExecutable();
		jint getModifiers();
		jstring getName();
		__JniBaseClass getParameterizedType();
		jclass getType();
		jint hashCode();
		jboolean isImplicit();
		jboolean isNamePresent();
		jboolean isSynthetic();
		jboolean isVarArgs();
		jstring toString();
	};
} // namespace java::lang::reflect

