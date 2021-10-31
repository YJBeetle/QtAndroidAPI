#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class MethodHandle : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MethodHandle(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MethodHandle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		java::lang::invoke::MethodHandle asCollector(jclass arg0, jint arg1);
		java::lang::invoke::MethodHandle asCollector(jint arg0, jclass arg1, jint arg2);
		java::lang::invoke::MethodHandle asFixedArity();
		java::lang::invoke::MethodHandle asSpreader(jclass arg0, jint arg1);
		java::lang::invoke::MethodHandle asSpreader(jint arg0, jclass arg1, jint arg2);
		java::lang::invoke::MethodHandle asType(java::lang::invoke::MethodType arg0);
		java::lang::invoke::MethodHandle asVarargsCollector(jclass arg0);
		java::lang::invoke::MethodHandle bindTo(jobject arg0);
		java::util::Optional describeConstable();
		jobject invoke(jobjectArray arg0);
		jobject invokeExact(jobjectArray arg0);
		jobject invokeWithArguments(jobjectArray arg0);
		jobject invokeWithArguments(__JniBaseClass arg0);
		jboolean isVarargsCollector();
		jstring toString();
		java::lang::invoke::MethodType type();
		java::lang::invoke::MethodHandle withVarargs(jboolean arg0);
	};
} // namespace java::lang::invoke

