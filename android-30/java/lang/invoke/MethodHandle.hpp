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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MethodHandle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MethodHandle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::lang::invoke::MethodHandle asCollector(JClass arg0, jint arg1) const;
		java::lang::invoke::MethodHandle asCollector(jint arg0, JClass arg1, jint arg2) const;
		java::lang::invoke::MethodHandle asFixedArity() const;
		java::lang::invoke::MethodHandle asSpreader(JClass arg0, jint arg1) const;
		java::lang::invoke::MethodHandle asSpreader(jint arg0, JClass arg1, jint arg2) const;
		java::lang::invoke::MethodHandle asType(java::lang::invoke::MethodType arg0) const;
		java::lang::invoke::MethodHandle asVarargsCollector(JClass arg0) const;
		java::lang::invoke::MethodHandle bindTo(JObject arg0) const;
		java::util::Optional describeConstable() const;
		JObject invoke(JObjectArray arg0) const;
		JObject invokeExact(JObjectArray arg0) const;
		JObject invokeWithArguments(JObjectArray arg0) const;
		JObject invokeWithArguments(JObject arg0) const;
		jboolean isVarargsCollector() const;
		JString toString() const;
		java::lang::invoke::MethodType type() const;
		java::lang::invoke::MethodHandle withVarargs(jboolean arg0) const;
	};
} // namespace java::lang::invoke

