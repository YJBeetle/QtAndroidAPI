#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class IndexOutOfBoundsException;
}
namespace java::util
{
	class Optional;
}

namespace java::lang::invoke
{
	class MethodType : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MethodType(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MethodType(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::invoke::MethodType fromMethodDescriptorString(jstring arg0, java::lang::ClassLoader arg1);
		static java::lang::invoke::MethodType genericMethodType(jint arg0);
		static java::lang::invoke::MethodType genericMethodType(jint arg0, jboolean arg1);
		static java::lang::invoke::MethodType methodType(jclass arg0);
		static java::lang::invoke::MethodType methodType(jclass arg0, jarray arg1);
		static java::lang::invoke::MethodType methodType(jclass arg0, jclass arg1);
		static java::lang::invoke::MethodType methodType(jclass arg0, java::lang::invoke::MethodType arg1);
		static java::lang::invoke::MethodType methodType(jclass arg0, __JniBaseClass arg1);
		static java::lang::invoke::MethodType methodType(jclass arg0, jclass arg1, jarray arg2);
		java::lang::invoke::MethodType appendParameterTypes(jarray arg0);
		java::lang::invoke::MethodType appendParameterTypes(__JniBaseClass arg0);
		java::lang::invoke::MethodType changeParameterType(jint arg0, jclass arg1);
		__JniBaseClass changeParameterType(jint arg0, __JniBaseClass arg1);
		java::lang::invoke::MethodType changeReturnType(jclass arg0);
		__JniBaseClass changeReturnType(__JniBaseClass arg0);
		java::util::Optional describeConstable();
		jstring descriptorString();
		java::lang::invoke::MethodType dropParameterTypes(jint arg0, jint arg1);
		jboolean equals(jobject arg0);
		java::lang::invoke::MethodType erase();
		java::lang::invoke::MethodType generic();
		jboolean hasPrimitives();
		jboolean hasWrappers();
		jint hashCode();
		java::lang::invoke::MethodType insertParameterTypes(jint arg0, jarray arg1);
		java::lang::invoke::MethodType insertParameterTypes(jint arg0, __JniBaseClass arg1);
		jclass lastParameterType();
		jarray parameterArray();
		jint parameterCount();
		__JniBaseClass parameterList();
		jclass parameterType(jint arg0);
		jclass returnType();
		jstring toMethodDescriptorString();
		jstring toString();
		java::lang::invoke::MethodType unwrap();
		java::lang::invoke::MethodType wrap();
	};
} // namespace java::lang::invoke

