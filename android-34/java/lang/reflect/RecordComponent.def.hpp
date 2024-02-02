#pragma once

#include "../../../JObject.hpp"

class JByteArray;
class JArray;
class JClass;
class JString;
namespace java::lang::reflect
{
	class Method;
}

namespace java::lang::reflect
{
	class RecordComponent : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RecordComponent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RecordComponent(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		java::lang::reflect::Method getAccessor() const;
		JObject getAnnotatedType() const;
		JObject getAnnotation(JClass arg0) const;
		JArray getAnnotations() const;
		JArray getDeclaredAnnotations() const;
		JClass getDeclaringRecord() const;
		JString getGenericSignature() const;
		JObject getGenericType() const;
		JString getName() const;
		JClass getType() const;
		JString toString() const;
	};
} // namespace java::lang::reflect

