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
		
		MethodHandle(QAndroidJniObject obj);
		// Constructors
		MethodHandle() = default;
		
		// Methods
		QAndroidJniObject asCollector(jclass arg0, jint arg1);
		QAndroidJniObject asCollector(jint arg0, jclass arg1, jint arg2);
		QAndroidJniObject asFixedArity();
		QAndroidJniObject asSpreader(jclass arg0, jint arg1);
		QAndroidJniObject asSpreader(jint arg0, jclass arg1, jint arg2);
		QAndroidJniObject asType(java::lang::invoke::MethodType arg0);
		QAndroidJniObject asVarargsCollector(jclass arg0);
		QAndroidJniObject bindTo(jobject arg0);
		QAndroidJniObject describeConstable();
		jobject invoke(jobjectArray arg0);
		jobject invokeExact(jobjectArray arg0);
		jobject invokeWithArguments(jobjectArray arg0);
		jobject invokeWithArguments(__JniBaseClass arg0);
		jboolean isVarargsCollector();
		jstring toString();
		QAndroidJniObject type();
		QAndroidJniObject withVarargs(jboolean arg0);
	};
} // namespace java::lang::invoke

