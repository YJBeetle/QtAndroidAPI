#pragma once

#include "../../../JObject.hpp"

class JObjectArray;
class JClass;
class JObject;
class JString;
namespace java::lang::invoke
{
	class MethodType;
}
namespace java::util
{
	class Optional;
}

namespace java::lang::invoke
{
	class MethodHandle : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MethodHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MethodHandle(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::lang::invoke::MethodHandle asCollector(JClass arg0, jint arg1);
		java::lang::invoke::MethodHandle asCollector(jint arg0, JClass arg1, jint arg2);
		java::lang::invoke::MethodHandle asFixedArity();
		java::lang::invoke::MethodHandle asSpreader(JClass arg0, jint arg1);
		java::lang::invoke::MethodHandle asSpreader(jint arg0, JClass arg1, jint arg2);
		java::lang::invoke::MethodHandle asType(java::lang::invoke::MethodType arg0);
		java::lang::invoke::MethodHandle asVarargsCollector(JClass arg0);
		java::lang::invoke::MethodHandle bindTo(JObject arg0);
		java::util::Optional describeConstable();
		JObject invoke(JObjectArray arg0);
		JObject invokeExact(JObjectArray arg0);
		JObject invokeWithArguments(JObjectArray arg0);
		JObject invokeWithArguments(JObject arg0);
		jboolean isVarargsCollector();
		JString toString();
		java::lang::invoke::MethodType type();
		java::lang::invoke::MethodHandle withVarargs(jboolean arg0);
	};
} // namespace java::lang::invoke

