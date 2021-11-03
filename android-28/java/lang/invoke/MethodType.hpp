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
		
		// QJniObject forward
		template<typename ...Ts> explicit MethodType(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MethodType(QJniObject obj);
		
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
		java::lang::invoke::MethodType appendParameterTypes(JArray arg0);
		java::lang::invoke::MethodType appendParameterTypes(JObject arg0);
		java::lang::invoke::MethodType changeParameterType(jint arg0, JClass arg1);
		JObject changeParameterType(jint arg0, JObject arg1);
		java::lang::invoke::MethodType changeReturnType(JClass arg0);
		JObject changeReturnType(JObject arg0);
		java::util::Optional describeConstable();
		JString descriptorString();
		java::lang::invoke::MethodType dropParameterTypes(jint arg0, jint arg1);
		jboolean equals(JObject arg0);
		java::lang::invoke::MethodType erase();
		java::lang::invoke::MethodType generic();
		jboolean hasPrimitives();
		jboolean hasWrappers();
		jint hashCode();
		java::lang::invoke::MethodType insertParameterTypes(jint arg0, JArray arg1);
		java::lang::invoke::MethodType insertParameterTypes(jint arg0, JObject arg1);
		JClass lastParameterType();
		JArray parameterArray();
		jint parameterCount();
		JObject parameterList();
		JClass parameterType(jint arg0);
		JClass returnType();
		JString toMethodDescriptorString();
		JString toString();
		java::lang::invoke::MethodType unwrap();
		java::lang::invoke::MethodType wrap();
	};
} // namespace java::lang::invoke

