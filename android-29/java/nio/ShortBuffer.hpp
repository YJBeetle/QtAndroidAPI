#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Buffer.hpp"

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
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jshortArray arg0);
		static QAndroidJniObject wrap(jshortArray arg0, jint arg1, jint arg2);
		jshortArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::ShortBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		QAndroidJniObject get(jshortArray arg0);
		QAndroidJniObject get(jint arg0, jshortArray arg1);
		QAndroidJniObject get(jshortArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jshortArray arg1, jint arg2, jint arg3);
		jshort get();
		jshort get(jint arg0);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(__jni_impl::java::nio::ShortBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jshortArray arg0);
		QAndroidJniObject put(__jni_impl::java::nio::ShortBuffer arg0);
		QAndroidJniObject put(jshort arg0);
		QAndroidJniObject put(jint arg0, jshortArray arg1);
		QAndroidJniObject put(jint arg0, jshort arg1);
		QAndroidJniObject put(jshortArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jshortArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, __jni_impl::java::nio::ShortBuffer arg1, jint arg2, jint arg3);
		QAndroidJniObject reset();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		jstring toString();
	};
} // namespace __jni_impl::java::nio

#include "./Buffer.hpp"
#include "./ByteOrder.hpp"

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
	QAndroidJniObject ShortBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ShortBuffer",
			"allocate",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
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
	jshortArray ShortBuffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()[S"
		).object<jshortArray>();
	}
	jint ShortBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject ShortBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/ShortBuffer;"
		);
	}
	QAndroidJniObject ShortBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
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
	QAndroidJniObject ShortBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/ShortBuffer;"
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
	QAndroidJniObject ShortBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/ShortBuffer;"
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
	QAndroidJniObject ShortBuffer::get(jint arg0, jshortArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[S)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
		);
	}
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
	jshort ShortBuffer::get()
	{
		return __thiz.callMethod<jshort>(
			"get",
			"()S"
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
	jboolean ShortBuffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint ShortBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean ShortBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
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
	QAndroidJniObject ShortBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/ShortBuffer;"
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
	QAndroidJniObject ShortBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject ShortBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/ShortBuffer;",
			arg0
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
	QAndroidJniObject ShortBuffer::put(jint arg0, jshort arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(IS)Ljava/nio/ShortBuffer;",
			arg0,
			arg1
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
	QAndroidJniObject ShortBuffer::put(jint arg0, __jni_impl::java::nio::ShortBuffer arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(ILjava/nio/ShortBuffer;II)Ljava/nio/ShortBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject ShortBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
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
	QAndroidJniObject ShortBuffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
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
	jstring ShortBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

