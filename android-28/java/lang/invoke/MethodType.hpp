#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
class JArray;
class JArray;
class JArray;
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
class JClass;
namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class IndexOutOfBoundsException;
}
class JObject;
class JString;
namespace java::util
{
	class Optional;
}

namespace java::lang::invoke
{
	class MethodType : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MethodType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MethodType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::invoke::MethodType fromMethodDescriptorString(JString arg0, java::lang::ClassLoader arg1);
		static java::lang::invoke::MethodType genericMethodType(jint arg0);
		static java::lang::invoke::MethodType genericMethodType(jint arg0, jboolean arg1);
		static java::lang::invoke::MethodType methodType(JClass arg0);
		static java::lang::invoke::MethodType methodType(JClass arg0, JArray arg1);
		static java::lang::invoke::MethodType methodType(JClass arg0, JClass arg1);
		static java::lang::invoke::MethodType methodType(JClass arg0, java::lang::invoke::MethodType arg1);
		static java::lang::invoke::MethodType methodType(JClass arg0, JObject arg1);
		static java::lang::invoke::MethodType methodType(JClass arg0, JClass arg1, JArray arg2);
		java::lang::invoke::MethodType appendParameterTypes(JArray arg0) const;
		java::lang::invoke::MethodType appendParameterTypes(JObject arg0) const;
		java::lang::invoke::MethodType changeParameterType(jint arg0, JClass arg1) const;
		JObject changeParameterType(jint arg0, JObject arg1) const;
		java::lang::invoke::MethodType changeReturnType(JClass arg0) const;
		JObject changeReturnType(JObject arg0) const;
		java::util::Optional describeConstable() const;
		JString descriptorString() const;
		java::lang::invoke::MethodType dropParameterTypes(jint arg0, jint arg1) const;
		jboolean equals(JObject arg0) const;
		java::lang::invoke::MethodType erase() const;
		java::lang::invoke::MethodType generic() const;
		jboolean hasPrimitives() const;
		jboolean hasWrappers() const;
		jint hashCode() const;
		java::lang::invoke::MethodType insertParameterTypes(jint arg0, JArray arg1) const;
		java::lang::invoke::MethodType insertParameterTypes(jint arg0, JObject arg1) const;
		JClass lastParameterType() const;
		JArray parameterArray() const;
		jint parameterCount() const;
		JObject parameterList() const;
		JClass parameterType(jint arg0) const;
		JClass returnType() const;
		JString toMethodDescriptorString() const;
		JString toString() const;
		java::lang::invoke::MethodType unwrap() const;
		java::lang::invoke::MethodType wrap() const;
	};
} // namespace java::lang::invoke

