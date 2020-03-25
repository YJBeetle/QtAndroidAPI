#pragma once

#ifndef JAVA_NIO_BYTEBUFFER
#define JAVA_NIO_BYTEBUFFER

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
	class CharBuffer;
}
namespace __jni_impl::java::nio
{
	class ShortBuffer;
}
namespace __jni_impl::java::nio
{
	class IntBuffer;
}
namespace __jni_impl::java::nio
{
	class LongBuffer;
}
namespace __jni_impl::java::nio
{
	class FloatBuffer;
}
namespace __jni_impl::java::nio
{
	class DoubleBuffer;
}

namespace __jni_impl::java::nio
{
	class ByteBuffer : public __jni_impl::java::nio::Buffer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject get(jbyteArray arg0);
		QAndroidJniObject get(jbyteArray arg0, jint arg1, jint arg2);
		jbyte get(jint arg0);
		jbyte get();
		QAndroidJniObject get(jint arg0, jbyteArray arg1, jint arg2, jint arg3);
		QAndroidJniObject get(jint arg0, jbyteArray arg1);
		QAndroidJniObject put(jbyteArray arg0, jint arg1, jint arg2);
		QAndroidJniObject put(jbyte arg0);
		QAndroidJniObject put(__jni_impl::java::nio::ByteBuffer arg0);
		QAndroidJniObject put(jint arg0, jbyte arg1);
		QAndroidJniObject put(jint arg0, jbyteArray arg1);
		QAndroidJniObject put(jint arg0, jbyteArray arg1, jint arg2, jint arg3);
		QAndroidJniObject put(jbyteArray arg0);
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint compareTo(__jni_impl::java::nio::ByteBuffer arg0);
		jint compareTo(jobject arg0);
		jshort getShort();
		jshort getShort(jint arg0);
		QAndroidJniObject putShort(jint arg0, jshort arg1);
		QAndroidJniObject putShort(jshort arg0);
		jchar getChar(jint arg0);
		jchar getChar();
		QAndroidJniObject putChar(jchar arg0);
		QAndroidJniObject putChar(jint arg0, jchar arg1);
		jint getInt(jint arg0);
		jint getInt();
		QAndroidJniObject putInt(jint arg0, jint arg1);
		QAndroidJniObject putInt(jint arg0);
		jlong getLong();
		jlong getLong(jint arg0);
		QAndroidJniObject putLong(jint arg0, jlong arg1);
		QAndroidJniObject putLong(jlong arg0);
		jfloat getFloat();
		jfloat getFloat(jint arg0);
		QAndroidJniObject putFloat(jint arg0, jfloat arg1);
		QAndroidJniObject putFloat(jfloat arg0);
		jdouble getDouble();
		jdouble getDouble(jint arg0);
		QAndroidJniObject putDouble(jdouble arg0);
		QAndroidJniObject putDouble(jint arg0, jdouble arg1);
		QAndroidJniObject clear();
		QAndroidJniObject limit(jint arg0);
		jboolean isDirect();
		jboolean hasArray();
		QAndroidJniObject array();
		QAndroidJniObject position(jint arg0);
		jint arrayOffset();
		static QAndroidJniObject wrap(jbyteArray arg0, jint arg1, jint arg2);
		static QAndroidJniObject wrap(jbyteArray arg0);
		QAndroidJniObject mark();
		QAndroidJniObject reset();
		QAndroidJniObject flip();
		QAndroidJniObject rewind();
		QAndroidJniObject slice();
		QAndroidJniObject slice(jint arg0, jint arg1);
		QAndroidJniObject duplicate();
		static QAndroidJniObject allocate(jint arg0);
		jint mismatch(__jni_impl::java::nio::ByteBuffer arg0);
		jint alignmentOffset(jint arg0, jint arg1);
		static QAndroidJniObject allocateDirect(jint arg0);
		QAndroidJniObject asReadOnlyBuffer();
		QAndroidJniObject compact();
		QAndroidJniObject order(__jni_impl::java::nio::ByteOrder arg0);
		QAndroidJniObject order();
		QAndroidJniObject alignedSlice(jint arg0);
		QAndroidJniObject asCharBuffer();
		QAndroidJniObject asShortBuffer();
		QAndroidJniObject asIntBuffer();
		QAndroidJniObject asLongBuffer();
		QAndroidJniObject asFloatBuffer();
		QAndroidJniObject asDoubleBuffer();
	};
} // namespace __jni_impl::java::nio

#include "Buffer.hpp"
#include "ByteOrder.hpp"
#include "CharBuffer.hpp"
#include "ShortBuffer.hpp"
#include "IntBuffer.hpp"
#include "LongBuffer.hpp"
#include "FloatBuffer.hpp"
#include "DoubleBuffer.hpp"

namespace __jni_impl::java::nio
{
	// Fields
	
	// Constructors
	void ByteBuffer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.ByteBuffer",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ByteBuffer::get(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"([B)Ljava/nio/ByteBuffer;",
			arg0);
	}
	QAndroidJniObject ByteBuffer::get(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"get",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2);
	}
	jbyte ByteBuffer::get(jint arg0)
	{
		return __thiz.callMethod<jbyte>(
			"get",
			"(I)B",
			arg0);
	}
	jbyte ByteBuffer::get()
	{
		return __thiz.callMethod<jbyte>(
			"get",
			"()B");
	}
	QAndroidJniObject ByteBuffer::get(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject ByteBuffer::get(jint arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"get",
			"(I[B)Ljava/nio/ByteBuffer;",
			arg0,
			arg1);
	}
	QAndroidJniObject ByteBuffer::put(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"put",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ByteBuffer::put(jbyte arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(B)Ljava/nio/ByteBuffer;",
			arg0);
	}
	QAndroidJniObject ByteBuffer::put(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ByteBuffer::put(jint arg0, jbyte arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(IB)Ljava/nio/ByteBuffer;",
			arg0,
			arg1);
	}
	QAndroidJniObject ByteBuffer::put(jint arg0, jbyteArray arg1)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[B)Ljava/nio/ByteBuffer;",
			arg0,
			arg1);
	}
	QAndroidJniObject ByteBuffer::put(jint arg0, jbyteArray arg1, jint arg2, jint arg3)
	{
		return __thiz.callObjectMethod(
			"put",
			"(I[BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject ByteBuffer::put(jbyteArray arg0)
	{
		return __thiz.callObjectMethod(
			"put",
			"([B)Ljava/nio/ByteBuffer;",
			arg0);
	}
	jboolean ByteBuffer::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject ByteBuffer::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint ByteBuffer::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint ByteBuffer::compareTo(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object());
	}
	jint ByteBuffer::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0);
	}
	jshort ByteBuffer::getShort()
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"()S");
	}
	jshort ByteBuffer::getShort(jint arg0)
	{
		return __thiz.callMethod<jshort>(
			"getShort",
			"(I)S",
			arg0);
	}
	QAndroidJniObject ByteBuffer::putShort(jint arg0, jshort arg1)
	{
		return __thiz.callObjectMethod(
			"putShort",
			"(IS)Ljava/nio/ByteBuffer;",
			arg0,
			arg1);
	}
	QAndroidJniObject ByteBuffer::putShort(jshort arg0)
	{
		return __thiz.callObjectMethod(
			"putShort",
			"(S)Ljava/nio/ByteBuffer;",
			arg0);
	}
	jchar ByteBuffer::getChar(jint arg0)
	{
		return __thiz.callMethod<jchar>(
			"getChar",
			"(I)C",
			arg0);
	}
	jchar ByteBuffer::getChar()
	{
		return __thiz.callMethod<jchar>(
			"getChar",
			"()C");
	}
	QAndroidJniObject ByteBuffer::putChar(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"putChar",
			"(C)Ljava/nio/ByteBuffer;",
			arg0);
	}
	QAndroidJniObject ByteBuffer::putChar(jint arg0, jchar arg1)
	{
		return __thiz.callObjectMethod(
			"putChar",
			"(IC)Ljava/nio/ByteBuffer;",
			arg0,
			arg1);
	}
	jint ByteBuffer::getInt(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"(I)I",
			arg0);
	}
	jint ByteBuffer::getInt()
	{
		return __thiz.callMethod<jint>(
			"getInt",
			"()I");
	}
	QAndroidJniObject ByteBuffer::putInt(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"putInt",
			"(II)Ljava/nio/ByteBuffer;",
			arg0,
			arg1);
	}
	QAndroidJniObject ByteBuffer::putInt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"putInt",
			"(I)Ljava/nio/ByteBuffer;",
			arg0);
	}
	jlong ByteBuffer::getLong()
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"()J");
	}
	jlong ByteBuffer::getLong(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getLong",
			"(I)J",
			arg0);
	}
	QAndroidJniObject ByteBuffer::putLong(jint arg0, jlong arg1)
	{
		return __thiz.callObjectMethod(
			"putLong",
			"(IJ)Ljava/nio/ByteBuffer;",
			arg0,
			arg1);
	}
	QAndroidJniObject ByteBuffer::putLong(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"putLong",
			"(J)Ljava/nio/ByteBuffer;",
			arg0);
	}
	jfloat ByteBuffer::getFloat()
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"()F");
	}
	jfloat ByteBuffer::getFloat(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getFloat",
			"(I)F",
			arg0);
	}
	QAndroidJniObject ByteBuffer::putFloat(jint arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"putFloat",
			"(IF)Ljava/nio/ByteBuffer;",
			arg0,
			arg1);
	}
	QAndroidJniObject ByteBuffer::putFloat(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"putFloat",
			"(F)Ljava/nio/ByteBuffer;",
			arg0);
	}
	jdouble ByteBuffer::getDouble()
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"()D");
	}
	jdouble ByteBuffer::getDouble(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getDouble",
			"(I)D",
			arg0);
	}
	QAndroidJniObject ByteBuffer::putDouble(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"putDouble",
			"(D)Ljava/nio/ByteBuffer;",
			arg0);
	}
	QAndroidJniObject ByteBuffer::putDouble(jint arg0, jdouble arg1)
	{
		return __thiz.callObjectMethod(
			"putDouble",
			"(ID)Ljava/nio/ByteBuffer;",
			arg0,
			arg1);
	}
	QAndroidJniObject ByteBuffer::clear()
	{
		return __thiz.callObjectMethod(
			"clear",
			"()Ljava/nio/ByteBuffer;");
	}
	QAndroidJniObject ByteBuffer::limit(jint arg0)
	{
		return __thiz.callObjectMethod(
			"limit",
			"(I)Ljava/nio/ByteBuffer;",
			arg0);
	}
	jboolean ByteBuffer::isDirect()
	{
		return __thiz.callMethod<jboolean>(
			"isDirect",
			"()Z");
	}
	jboolean ByteBuffer::hasArray()
	{
		return __thiz.callMethod<jboolean>(
			"hasArray",
			"()Z");
	}
	QAndroidJniObject ByteBuffer::array()
	{
		return __thiz.callObjectMethod(
			"array",
			"()[B");
	}
	QAndroidJniObject ByteBuffer::position(jint arg0)
	{
		return __thiz.callObjectMethod(
			"position",
			"(I)Ljava/nio/ByteBuffer;",
			arg0);
	}
	jint ByteBuffer::arrayOffset()
	{
		return __thiz.callMethod<jint>(
			"arrayOffset",
			"()I");
	}
	QAndroidJniObject ByteBuffer::wrap(jbyteArray arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"wrap",
			"([BII)Ljava/nio/ByteBuffer;",
			arg0,
			arg1,
			arg2);
	}
	QAndroidJniObject ByteBuffer::wrap(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"wrap",
			"([B)Ljava/nio/ByteBuffer;",
			arg0);
	}
	QAndroidJniObject ByteBuffer::mark()
	{
		return __thiz.callObjectMethod(
			"mark",
			"()Ljava/nio/ByteBuffer;");
	}
	QAndroidJniObject ByteBuffer::reset()
	{
		return __thiz.callObjectMethod(
			"reset",
			"()Ljava/nio/ByteBuffer;");
	}
	QAndroidJniObject ByteBuffer::flip()
	{
		return __thiz.callObjectMethod(
			"flip",
			"()Ljava/nio/ByteBuffer;");
	}
	QAndroidJniObject ByteBuffer::rewind()
	{
		return __thiz.callObjectMethod(
			"rewind",
			"()Ljava/nio/ByteBuffer;");
	}
	QAndroidJniObject ByteBuffer::slice()
	{
		return __thiz.callObjectMethod(
			"slice",
			"()Ljava/nio/ByteBuffer;");
	}
	QAndroidJniObject ByteBuffer::slice(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"slice",
			"(II)Ljava/nio/ByteBuffer;",
			arg0,
			arg1);
	}
	QAndroidJniObject ByteBuffer::duplicate()
	{
		return __thiz.callObjectMethod(
			"duplicate",
			"()Ljava/nio/ByteBuffer;");
	}
	QAndroidJniObject ByteBuffer::allocate(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"allocate",
			"(I)Ljava/nio/ByteBuffer;",
			arg0);
	}
	jint ByteBuffer::mismatch(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"mismatch",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object());
	}
	jint ByteBuffer::alignmentOffset(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"alignmentOffset",
			"(II)I",
			arg0,
			arg1);
	}
	QAndroidJniObject ByteBuffer::allocateDirect(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.ByteBuffer",
			"allocateDirect",
			"(I)Ljava/nio/ByteBuffer;",
			arg0);
	}
	QAndroidJniObject ByteBuffer::asReadOnlyBuffer()
	{
		return __thiz.callObjectMethod(
			"asReadOnlyBuffer",
			"()Ljava/nio/ByteBuffer;");
	}
	QAndroidJniObject ByteBuffer::compact()
	{
		return __thiz.callObjectMethod(
			"compact",
			"()Ljava/nio/ByteBuffer;");
	}
	QAndroidJniObject ByteBuffer::order(__jni_impl::java::nio::ByteOrder arg0)
	{
		return __thiz.callObjectMethod(
			"order",
			"(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;",
			arg0.__jniObject().object());
	}
	QAndroidJniObject ByteBuffer::order()
	{
		return __thiz.callObjectMethod(
			"order",
			"()Ljava/nio/ByteOrder;");
	}
	QAndroidJniObject ByteBuffer::alignedSlice(jint arg0)
	{
		return __thiz.callObjectMethod(
			"alignedSlice",
			"(I)Ljava/nio/ByteBuffer;",
			arg0);
	}
	QAndroidJniObject ByteBuffer::asCharBuffer()
	{
		return __thiz.callObjectMethod(
			"asCharBuffer",
			"()Ljava/nio/CharBuffer;");
	}
	QAndroidJniObject ByteBuffer::asShortBuffer()
	{
		return __thiz.callObjectMethod(
			"asShortBuffer",
			"()Ljava/nio/ShortBuffer;");
	}
	QAndroidJniObject ByteBuffer::asIntBuffer()
	{
		return __thiz.callObjectMethod(
			"asIntBuffer",
			"()Ljava/nio/IntBuffer;");
	}
	QAndroidJniObject ByteBuffer::asLongBuffer()
	{
		return __thiz.callObjectMethod(
			"asLongBuffer",
			"()Ljava/nio/LongBuffer;");
	}
	QAndroidJniObject ByteBuffer::asFloatBuffer()
	{
		return __thiz.callObjectMethod(
			"asFloatBuffer",
			"()Ljava/nio/FloatBuffer;");
	}
	QAndroidJniObject ByteBuffer::asDoubleBuffer()
	{
		return __thiz.callObjectMethod(
			"asDoubleBuffer",
			"()Ljava/nio/DoubleBuffer;");
	}
} // namespace __jni_impl::java::nio

namespace java::nio
{
	class ByteBuffer : public __jni_impl::java::nio::ByteBuffer
	{
	public:
		ByteBuffer(QAndroidJniObject obj) { __thiz = obj; }
		ByteBuffer()
		{
			__constructor();
		}
	};
} // namespace java::nio

#endif // JAVA_NIO_BYTEBUFFER

