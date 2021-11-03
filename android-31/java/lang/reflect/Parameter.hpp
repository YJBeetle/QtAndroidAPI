#pragma once

#include "../../../JObject.hpp"

namespace java::lang::reflect
{
	class Executable;
}

namespace java::lang::reflect
{
	class Parameter : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Parameter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Parameter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		JObject getAnnotatedType();
		JObject getAnnotation(jclass arg0);
		jarray getAnnotations();
		jarray getAnnotationsByType(jclass arg0);
		JObject getDeclaredAnnotation(jclass arg0);
		jarray getDeclaredAnnotations();
		jarray getDeclaredAnnotationsByType(jclass arg0);
		java::lang::reflect::Executable getDeclaringExecutable();
		jint getModifiers();
		jstring getName();
		JObject getParameterizedType();
		jclass getType();
		jint hashCode();
		jboolean isImplicit();
		jboolean isNamePresent();
		jboolean isSynthetic();
		jboolean isVarArgs();
		jstring toString();
	};
} // namespace java::lang::reflect

