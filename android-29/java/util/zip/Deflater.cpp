#include "../../nio/ByteBuffer.hpp"
#include "./Deflater.hpp"

namespace java::util::zip
{
	// Fields
	jint Deflater::BEST_COMPRESSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"BEST_COMPRESSION"
		);
	}
	jint Deflater::BEST_SPEED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"BEST_SPEED"
		);
	}
	jint Deflater::DEFAULT_COMPRESSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"DEFAULT_COMPRESSION"
		);
	}
	jint Deflater::DEFAULT_STRATEGY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"DEFAULT_STRATEGY"
		);
	}
	jint Deflater::DEFLATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"DEFLATED"
		);
	}
	jint Deflater::FILTERED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"FILTERED"
		);
	}
	jint Deflater::FULL_FLUSH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"FULL_FLUSH"
		);
	}
	jint Deflater::HUFFMAN_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"HUFFMAN_ONLY"
		);
	}
	jint Deflater::NO_COMPRESSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"NO_COMPRESSION"
		);
	}
	jint Deflater::NO_FLUSH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"NO_FLUSH"
		);
	}
	jint Deflater::SYNC_FLUSH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.Deflater",
			"SYNC_FLUSH"
		);
	}
	
	Deflater::Deflater(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Deflater::Deflater()
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.Deflater",
			"()V"
		);
	}
	Deflater::Deflater(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.Deflater",
			"(I)V",
			arg0
		);
	}
	Deflater::Deflater(jint arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.Deflater",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint Deflater::deflate(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"deflate",
			"([B)I",
			arg0
		);
	}
	jint Deflater::deflate(java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"deflate",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint Deflater::deflate(java::nio::ByteBuffer arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"deflate",
			"(Ljava/nio/ByteBuffer;I)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Deflater::deflate(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"deflate",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Deflater::deflate(jbyteArray arg0, jint arg1, jint arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"deflate",
			"([BIII)I",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Deflater::end()
	{
		__thiz.callMethod<void>(
			"end",
			"()V"
		);
	}
	void Deflater::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	jboolean Deflater::finished()
	{
		return __thiz.callMethod<jboolean>(
			"finished",
			"()Z"
		);
	}
	jint Deflater::getAdler()
	{
		return __thiz.callMethod<jint>(
			"getAdler",
			"()I"
		);
	}
	jlong Deflater::getBytesRead()
	{
		return __thiz.callMethod<jlong>(
			"getBytesRead",
			"()J"
		);
	}
	jlong Deflater::getBytesWritten()
	{
		return __thiz.callMethod<jlong>(
			"getBytesWritten",
			"()J"
		);
	}
	jint Deflater::getTotalIn()
	{
		return __thiz.callMethod<jint>(
			"getTotalIn",
			"()I"
		);
	}
	jint Deflater::getTotalOut()
	{
		return __thiz.callMethod<jint>(
			"getTotalOut",
			"()I"
		);
	}
	jboolean Deflater::needsInput()
	{
		return __thiz.callMethod<jboolean>(
			"needsInput",
			"()Z"
		);
	}
	void Deflater::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Deflater::setDictionary(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setDictionary",
			"([B)V",
			arg0
		);
	}
	void Deflater::setDictionary(java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"setDictionary",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void Deflater::setDictionary(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setDictionary",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Deflater::setInput(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"([B)V",
			arg0
		);
	}
	void Deflater::setInput(java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void Deflater::setInput(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setInput",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Deflater::setLevel(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLevel",
			"(I)V",
			arg0
		);
	}
	void Deflater::setStrategy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setStrategy",
			"(I)V",
			arg0
		);
	}
} // namespace java::util::zip

