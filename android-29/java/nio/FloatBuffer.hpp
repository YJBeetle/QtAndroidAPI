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
	class FloatBuffer : public __jni_impl::java::nio::Buffer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject allocate(jint arg0);
		static QAndroidJniObject wrap(jfloatArray arg0);
		static QAndroidJniObject wrap(jfloatArray arg0, jint arg1, jint arg2);
		jfloatArray array();
		jint arrayOffset();
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject clear();
		QAndroidJniObject compact();
		jint compareTo(jobject arg0);
		jint compareTo(__jni_impl::java::nio::FloatBuffer arg0);
		QAndroidJniObject duplicate();
		jboolean equals(jobject arg0);
		QAndroidJniObject flip();
		jfloat get();
		jfloat get(jint arg0);
		QAndroidJniObject get(jfloatArray arg0);
		QAndroidJniObject get(jint arg0, jfloatArray arg1);
		QAndroidJniObject get(jfloatArray arg0, jint arg1, jint arg2);
		QAndroidJniObject get(jint arg0, jfloatArray arg1, jint arg2, jint arg3);
		jboolean hasArray();
		jint hashCode();
		jboolean isDirect();
		QAndroidJniObject limit(jint arg0);
		QAndroidJniObject mark();
		jint mismatch(__jni_impl::java::nio::FloatBuffer arg0);
		QAndroidJniObject order();
		QAndroidJniObject position(jint arg0);
		QAndroidJniObject put(jfloatArray arg0);
		QAndroidJniObject put(jfloat arg0);
		QAndroidJniObject put(__jni_impl::java::nio::FloatBuffer arg0);
		QAndroidJniObject put(jint arg0, jfloatArray arg1);
		QAndroidJniObject put(jint arg0, jfloat arg1);
		QAndroidJniObject put(jfloatArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jint arg0, jfloatArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jint arg0, __jni_impl::java::nio::FloatBuffer arg1, jint arg2, jint arg3);
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
	void FloatBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.FloatBuffer",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FloatBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"allocate",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::wrap(jfloatArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"wrap",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::wrap(jfloatArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.FloatBuffer",
			"wrap",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	jfloatArray FloatBuffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()[F"
		).object<jfloatArray>();
	}
	jint FloatBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I"
		);
	}
	QAndroidJniObject FloatBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::compact()
	{
		return __thiz.callObjectMethod(
			"compact",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jint FloatBuffer::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
	jint FloatBuffer::compareTo(__jni_impl::java::nio::FloatBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/FloatBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FloatBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jboolean FloatBuffer::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jfloat FloatBuffer::get()
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"()F"
		);
	}
	jfloat FloatBuffer::get(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"get",
			"(I)F",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::get(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::get(jint arg0, jfloatArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FloatBuffer::get(jfloatArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject FloatBuffer::get(jint arg0, jfloatArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	jboolean FloatBuffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z"
		);
	}
	jint FloatBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean FloatBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z"
		);
	}
	QAndroidJniObject FloatBuffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	jint FloatBuffer::mismatch(__jni_impl::java::nio::FloatBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"mismatch",
			"(Ljava/nio/FloatBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FloatBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;"
		);
	}
	QAndroidJniObject FloatBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::put(jfloatArray arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"([F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::put(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(F)Ljava/nio/FloatBuffer;",
			arg0
		);
	}
	QAndroidJniObject FloatBuffer::put(__jni_impl::java::nio::FloatBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FloatBuffer::put(jint arg0, jfloatArray arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[F)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FloatBuffer::put(jint arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(IF)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject FloatBuffer::put(jfloatArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"put",
			"([FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject FloatBuffer::put(jint arg0, jfloatArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[FII)Ljava/nio/FloatBuffer;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject FloatBuffer::put(jint arg0, __jni_impl::java::nio::FloatBuffer arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(ILjava/nio/FloatBuffer;II)Ljava/nio/FloatBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject FloatBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/FloatBuffer;"
		);
	}
	QAndroidJniObject FloatBuffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/FloatBuffer;",
			arg0,
			arg1
		);
	}
	jstring FloatBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class FloatBuffer : public __jni_impl::java::nio::FloatBuffer
	{
	public:
		FloatBuffer(QAndroidJniObject obj) { __thiz = obj; }
		FloatBuffer()
		{
			__constructor();
		}
	};
} // namespace java::nio

