#pragma once

#ifndef JAVA_UTIL_ZIP_INFLATER
#define JAVA_UTIL_ZIP_INFLATER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::java::util::zip
{
	class Inflater : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jboolean arg0);
		void __constructor();
		
		// Methods
		jint inflate(__jni_impl::java::nio::ByteBuffer arg0);
		jint inflate(jbyteArray arg0, jint arg1, jint arg2);
		jint inflate(jbyteArray arg0);
		void end();
		void reset();
		void setInput(jbyteArray arg0, jint arg1, jint arg2);
		void setInput(jbyteArray arg0);
		void setInput(__jni_impl::java::nio::ByteBuffer arg0);
		jlong getBytesWritten();
		jboolean finished();
		jboolean needsDictionary();
		jboolean needsInput();
		void setDictionary(jbyteArray arg0);
		void setDictionary(__jni_impl::java::nio::ByteBuffer arg0);
		void setDictionary(jbyteArray arg0, jint arg1, jint arg2);
		jint getAdler();
		jlong getBytesRead();
		jint getRemaining();
		jint getTotalIn();
		jint getTotalOut();
	};
} // namespace __jni_impl::java::util::zip

#include "../../nio/ByteBuffer.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void Inflater::__constructor(jboolean arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.Inflater",
			"(Z)V",
			arg0);
	}
	void Inflater::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.Inflater",
			"()V");
	}
	
	// Methods
	jint Inflater::inflate(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return __thiz.callMethod<jint>(
			"inflate",
			"(Ljava/nio/ByteBuffer;)I",
			arg0.__jniObject().object()
		);
	}
	jint Inflater::inflate(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"inflate",
			"([BII)I",
			arg0,
			arg1,
			arg2
		);
	}
	jint Inflater::inflate(jbyteArray arg0)
	{
		return __thiz.callMethod<jint>(
			"inflate",
			"([B)I",
			arg0
		);
	}
	void Inflater::end()
	{
		__thiz.callMethod<void>(
			"end",
			"()V"
		);
	}
	void Inflater::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Inflater::setInput(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setInput",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Inflater::setInput(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"([B)V",
			arg0
		);
	}
	void Inflater::setInput(__jni_impl::java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"setInput",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	jlong Inflater::getBytesWritten()
	{
		return __thiz.callMethod<jlong>(
			"getBytesWritten",
			"()J"
		);
	}
	jboolean Inflater::finished()
	{
		return __thiz.callMethod<jboolean>(
			"finished",
			"()Z"
		);
	}
	jboolean Inflater::needsDictionary()
	{
		return __thiz.callMethod<jboolean>(
			"needsDictionary",
			"()Z"
		);
	}
	jboolean Inflater::needsInput()
	{
		return __thiz.callMethod<jboolean>(
			"needsInput",
			"()Z"
		);
	}
	void Inflater::setDictionary(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"setDictionary",
			"([B)V",
			arg0
		);
	}
	void Inflater::setDictionary(__jni_impl::java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"setDictionary",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object()
		);
	}
	void Inflater::setDictionary(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setDictionary",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	jint Inflater::getAdler()
	{
		return __thiz.callMethod<jint>(
			"getAdler",
			"()I"
		);
	}
	jlong Inflater::getBytesRead()
	{
		return __thiz.callMethod<jlong>(
			"getBytesRead",
			"()J"
		);
	}
	jint Inflater::getRemaining()
	{
		return __thiz.callMethod<jint>(
			"getRemaining",
			"()I"
		);
	}
	jint Inflater::getTotalIn()
	{
		return __thiz.callMethod<jint>(
			"getTotalIn",
			"()I"
		);
	}
	jint Inflater::getTotalOut()
	{
		return __thiz.callMethod<jint>(
			"getTotalOut",
			"()I"
		);
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class Inflater : public __jni_impl::java::util::zip::Inflater
	{
	public:
		Inflater(QAndroidJniObject obj) { __thiz = obj; }
		Inflater(jboolean arg0)
		{
			__constructor(
				arg0);
		}
		Inflater()
		{
			__constructor();
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_INFLATER

