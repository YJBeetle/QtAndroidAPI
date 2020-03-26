#pragma once

#ifndef JAVA_NIO_SHORTBUFFER
#define JAVA_NIO_SHORTBUFFER

#include "../../__JniBaseClass.hpp"
#include "Buffer.hpp"

namespace __jni_impl::java::nio
{
	class Buffer;
}
namespace __jni_impl::java::nio
{
	class ByteOrder;
}

namespace __jni_impl::java::nio
{
	class ShortBuffer : public __jni_impl::java::nio::Buffer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject get(jshortArray arg0, jint arg1, jint arg2);
		jshort get(jint arg0);
		jshort get();
		QAndroidJniObject get(jshortArray arg0);
		QAndroidJniObject get(jint arg0, jshortArray arg1, jint arg2, jint arg3);
		QAndroidJniObject get(jint arg0, jshortArray arg1);
		QAndroidJniObject put(jint arg0, jshort arg1);
		QAndroidJniObject put(jshortArray arg0);
		QAndroidJniObject put(__jni_impl::java::nio::ShortBuffer arg0);
		QAndroidJniObject put(jshortArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jshort arg0);
		QAndroidJniObject put(jint arg0, jshortArray arg1);
		QAndroidJniObject put(jint arg0, jshortArray arg1, jint arg2, jint arg3);
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::ShortBuffer arg0);
		QAndroidJniObject clear();
		QAndroidJniObject limit(jint arg0);
		jboolean isDirect();
		jboolean hasArray();
		jshortArray array();
		QAndroidJniObject position(jint arg0);
		jint arrayOffset();
		static QAndroidJniObject wrap(jshortArray arg0);
		static QAndroidJniObject wrap(jshortArray arg0, jint arg1, jint arg2);
		QAndroidJniObject mark();
		QAndroidJniObject reset();
		QAndroidJniObject flip();
		QAndroidJniObject rewind();
		QAndroidJniObject slice(jint arg0, jint arg1);
		QAndroidJniObject slice();
		QAndroidJniObject duplicate();
		static QAndroidJniObject allocate(jint arg0);
		jint mismatch(__jni_impl::java::nio::ShortBuffer arg0);
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject compact();
		QAndroidJniObject order();
	};
} // namespace __jni_impl::java::nio

#include "Buffer.hpp"
#include "ByteOrder.hpp"

namespace __jni_impl::java::nio
{
	// Fields
	
	// Constructors
	void ShortBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.ShortBuffer",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ShortBuffer::get(jshortArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"([SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jshort ShortBuffer::get(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"get",
			"(I)S",
			arg0
		);
	}
	jshort ShortBuffer::get()
	{
		return __thiz.callMethod<jshort>(
			"get",
			"()S"
		);
	}
	QAndroidJniObject ShortBuffer::get(jshortArray arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"([S)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::get(jint arg0, jshortArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject ShortBuffer::get(jint arg0, jshortArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[S)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ShortBuffer::put(jint arg0, jshort arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(IS)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ShortBuffer::put(jshortArray arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"([S)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::put(__jni_impl::java::nio::ShortBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/nio/ShortBuffer;)Ljava/nio/ShortBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortBuffer::put(jshortArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"put",
			"([SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ShortBuffer::put(jshort arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(S)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::put(jint arg0, jshortArray arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[S)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ShortBuffer::put(jint arg0, jshortArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean ShortBuffer::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring ShortBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ShortBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint ShortBuffer::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint ShortBuffer::compareTo(__jni_impl::java::nio::ShortBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/ShortBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	jboolean ShortBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	jboolean ShortBuffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jshortArray ShortBuffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()[S"
		).object<jshortArray>();
	}
	QAndroidJniObject ShortBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	jint ShortBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject ShortBuffer::wrap(jshortArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ShortBuffer",
			"wrap",
			"([S)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	QAndroidJniObject ShortBuffer::wrap(jshortArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ShortBuffer",
			"wrap",
			"([SII)Ljava/nio/ShortBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject ShortBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject ShortBuffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ShortBuffer",
			"allocate",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
		);
	}
	jint ShortBuffer::mismatch(__jni_impl::java::nio::ShortBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"mismatch",
			"(Ljava/nio/ShortBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShortBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::compact()
	{
		return __thiz.callObjectMethod(
			"compact",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class ShortBuffer : public __jni_impl::java::nio::ShortBuffer
	{
	public:
		ShortBuffer(QAndroidJniObject obj) { __thiz = obj; }
		ShortBuffer()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_SHORTBUFFER

