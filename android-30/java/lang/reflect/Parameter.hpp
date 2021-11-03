#pragma once

#include "../../../JObject.hpp"

class JArray;
class JClass;
class JObject;
class JString;
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
		jboolean equals(JObject arg0);
		JObject getAnnotatedType();
		JObject getAnnotation(JClass arg0);
		JArray getAnnotations();
		JArray getAnnotationsByType(JClass arg0);
		JObject getDeclaredAnnotation(JClass arg0);
		JArray getDeclaredAnnotations();
		JArray getDeclaredAnnotationsByType(JClass arg0);
		java::lang::reflect::Executable getDeclaringExecutable();
		jint getModifiers();
		JString getName();
		JObject getParameterizedType();
		JClass getType();
		jint hashCode();
		jboolean isImplicit();
		jboolean isNamePresent();
		jboolean isSynthetic();
		jboolean isVarArgs();
		JString toString();
	};
} // namespace java::lang::reflect

