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
		
		MethodType(QAndroidJniObject obj);
		// Constructors
		MethodType() = default;
		
		// Methods
		static QAndroidJniObject fromMethodDescriptorString(jstring arg0, java::lang::ClassLoader arg1);
		static QAndroidJniObject genericMethodType(jint arg0);
		static QAndroidJniObject genericMethodType(jint arg0, jboolean arg1);
		static QAndroidJniObject methodType(jclass arg0);
		static QAndroidJniObject methodType(jclass arg0, jarray arg1);
		static QAndroidJniObject methodType(jclass arg0, jclass arg1);
		static QAndroidJniObject methodType(jclass arg0, java::lang::invoke::MethodType arg1);
		static QAndroidJniObject methodType(jclass arg0, __JniBaseClass arg1);
		static QAndroidJniObject methodType(jclass arg0, jclass arg1, jarray arg2);
		QAndroidJniObject appendParameterTypes(jarray arg0);
		QAndroidJniObject appendParameterTypes(__JniBaseClass arg0);
		QAndroidJniObject changeParameterType(jint arg0, jclass arg1);
		QAndroidJniObject changeParameterType(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject changeReturnType(jclass arg0);
		QAndroidJniObject changeReturnType(__JniBaseClass arg0);
		QAndroidJniObject describeConstable();
		jstring descriptorString();
		QAndroidJniObject dropParameterTypes(jint arg0, jint arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject erase();
		QAndroidJniObject generic();
		jboolean hasPrimitives();
		jboolean hasWrappers();
		jint hashCode();
		QAndroidJniObject insertParameterTypes(jint arg0, jarray arg1);
		QAndroidJniObject insertParameterTypes(jint arg0, __JniBaseClass arg1);
		jclass lastParameterType();
		jarray parameterArray();
		jint parameterCount();
		QAndroidJniObject parameterList();
		jclass parameterType(jint arg0);
		jclass returnType();
		jstring toMethodDescriptorString();
		jstring toString();
		QAndroidJniObject unwrap();
		QAndroidJniObject wrap();
	};
} // namespace java::lang::invoke

