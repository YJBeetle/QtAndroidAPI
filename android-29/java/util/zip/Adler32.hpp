#pragma once

#ifndef JAVA_UTIL_ZIP_ADLER32
#define JAVA_UTIL_ZIP_ADLER32

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::java::util::zip
{
	class Adler32 : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void update(jint arg0);
		void update(jbyteArray arg0, jint arg1, jint arg2);
		void update(__jni_impl::java::nio::ByteBuffer arg0);
		jlong getValue();
		void reset();
	};
} // namespace __jni_impl::java::util::zip

#include "../../nio/ByteBuffer.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void Adler32::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.Adler32",
			"()V");
	}
	
	// Methods
	void Adler32::update(jint arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(I)V",
			arg0);
	}
	void Adler32::update(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"update",
			"([BII)V",
			arg0,
			arg1,
			arg2);
	}
	void Adler32::update(__jni_impl::java::nio::ByteBuffer arg0)
	{
		__thiz.callMethod<void>(
			"update",
			"(Ljava/nio/ByteBuffer;)V",
			arg0.__jniObject().object());
	}
	jlong Adler32::getValue()
	{
		return __thiz.callMethod<jlong>(
			"getValue",
			"()J");
	}
	void Adler32::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class Adler32 : public __jni_impl::java::util::zip::Adler32
	{
	public:
		Adler32(QAndroidJniObject obj) { __thiz = obj; }
		Adler32()
		{
			__constructor();
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_ADLER32

