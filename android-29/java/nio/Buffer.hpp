#pragma once

#ifndef JAVA_NIO_BUFFER
#define JAVA_NIO_BUFFER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class IllegalArgumentException;
}

namespace __jni_impl::java::nio
{
	class Buffer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject clear();
		jint limit();
		QAndroidJniObject limit(jint arg0);
		jint remaining();
		jboolean isDirect();
		jboolean hasArray();
		QAndroidJniObject array();
		QAndroidJniObject position(jint arg0);
		jint position();
		jint arrayOffset();
		jint capacity();
		QAndroidJniObject mark();
		QAndroidJniObject reset();
		QAndroidJniObject flip();
		QAndroidJniObject rewind();
		jboolean hasRemaining();
		jboolean isReadOnly();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		QAndroidJniObject duplicate();
	};
} // namespace __jni_impl::java::nio

#include "../lang/IllegalArgumentException.hpp"

namespace __jni_impl::java::nio
{
	// Fields
	
	// Constructors
	void Buffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.Buffer",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Buffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/Buffer;");
	}
	jint Buffer::limit()
	{
		return __thiz.callMethod<jint>(
			"limit",
			"()I");
	}
	QAndroidJniObject Buffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/Buffer;",
			arg0);
	}
	jint Buffer::remaining()
	{
		return __thiz.callMethod<jint>(
			"remaining",
			"()I");
	}
	jboolean Buffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z");
	}
	jboolean Buffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z");
	}
	QAndroidJniObject Buffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()Ljava/lang/Object;");
	}
	QAndroidJniObject Buffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/Buffer;",
			arg0);
	}
	jint Buffer::position()
	{
		return __thiz.callMethod<jint>(
			"position",
			"()I");
	}
	jint Buffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I");
	}
	jint Buffer::capacity()
	{
		return __thiz.callMethod<jint>(
			"capacity",
			"()I");
	}
	QAndroidJniObject Buffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/Buffer;");
	}
	QAndroidJniObject Buffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/Buffer;");
	}
	QAndroidJniObject Buffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/Buffer;");
	}
	QAndroidJniObject Buffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/Buffer;");
	}
	jboolean Buffer::hasRemaining()
	{
		return __thiz.callMethod<jboolean>(
			"hasRemaining",
			"()Z");
	}
	jboolean Buffer::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z");
	}
	QAndroidJniObject Buffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/Buffer;");
	}
	QAndroidJniObject Buffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/Buffer;",
			arg0,
			arg1);
	}
	QAndroidJniObject Buffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/Buffer;");
	}
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class Buffer : public __jni_impl::java::nio::Buffer
	{
	public:
		Buffer(QAndroidJniObject obj) { __thiz = obj; }
		Buffer()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_BUFFER

