#pragma once

#ifndef JAVA_UTIL_ZIP_CHECKEDINPUTSTREAM
#define JAVA_UTIL_ZIP_CHECKEDINPUTSTREAM

#include "../../../__JniBaseClass.hpp"
#include "../../io/InputStream.hpp"
#include "../../io/FilterInputStream.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::util::zip
{
	class CheckedInputStream : public __jni_impl::java::io::FilterInputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jint read(jbyteArray arg0, jint arg1, jint arg2);
		jint read();
		jlong skip(jlong arg0);
		QAndroidJniObject getChecksum();
	};
} // namespace __jni_impl::java::util::zip

#include "../../io/InputStream.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void CheckedInputStream::__constructor(__jni_impl::java::io::InputStream arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.CheckedInputStream",
			"(Ljava/io/InputStream;Ljava/util/zip/Checksum;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	jint CheckedInputStream::read(jbyteArray arg0, jint arg1, jint arg2)
	{
		return __thiz.callMethod<jint>(
			"read",
			"([BII)I",
			arg0,
			arg1,
			arg2);
	}
	jint CheckedInputStream::read()
	{
		return __thiz.callMethod<jint>(
			"read",
			"()I");
	}
	jlong CheckedInputStream::skip(jlong arg0)
	{
		return __thiz.callMethod<jlong>(
			"skip",
			"(J)J",
			arg0);
	}
	QAndroidJniObject CheckedInputStream::getChecksum()
	{
		return __thiz.callObjectMethod(
			"getChecksum",
			"()Ljava/util/zip/Checksum;");
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class CheckedInputStream : public __jni_impl::java::util::zip::CheckedInputStream
	{
	public:
		CheckedInputStream(QAndroidJniObject obj) { __thiz = obj; }
		CheckedInputStream(__jni_impl::java::io::InputStream arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_CHECKEDINPUTSTREAM

