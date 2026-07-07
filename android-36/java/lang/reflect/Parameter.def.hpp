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
		
		// QJniObject forward
		template<typename ...Ts> explicit Parameter(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Parameter(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject accessFlags() const;
		jboolean equals(JObject arg0) const;
		JObject getAnnotatedType() const;
		JObject getAnnotation(JClass arg0) const;
		JArray getAnnotations() const;
		JArray getAnnotationsByType(JClass arg0) const;
		JObject getDeclaredAnnotation(JClass arg0) const;
		JArray getDeclaredAnnotations() const;
		JArray getDeclaredAnnotationsByType(JClass arg0) const;
		java::lang::reflect::Executable getDeclaringExecutable() const;
		jint getModifiers() const;
		JString getName() const;
		JObject getParameterizedType() const;
		JClass getType() const;
		jint hashCode() const;
		jboolean isImplicit() const;
		jboolean isNamePresent() const;
		jboolean isSynthetic() const;
		jboolean isVarArgs() const;
		JString toString() const;
	};
} // namespace java::lang::reflect

