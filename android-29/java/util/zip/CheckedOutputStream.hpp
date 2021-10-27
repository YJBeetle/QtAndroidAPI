#pragma once

#ifndef JAVA_UTIL_ZIP_CHECKEDOUTPUTSTREAM
#define JAVA_UTIL_ZIP_CHECKEDOUTPUTSTREAM

#include "../../../__JniBaseClass.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::java::util::zip
{
	class CheckedOutputStream : public __jni_impl::java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		QAndroidJniObject getChecksum();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::util::zip

#include "../../io/OutputStream.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	
	// Constructors
	void CheckedOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.CheckedOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/zip/Checksum;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CheckedOutputStream::getChecksum()
	{
		return __thiz.callObjectMethod(
			"getChecksum",
			"()Ljava/util/zip/Checksum;"
		);
	}
	void CheckedOutputStream::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void CheckedOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class CheckedOutputStream : public __jni_impl::java::util::zip::CheckedOutputStream
	{
	public:
		CheckedOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		CheckedOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_CHECKEDOUTPUTSTREAM

