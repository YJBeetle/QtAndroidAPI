#pragma once

#ifndef JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM
#define JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM

#include "../../../__JniBaseClass.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"
#include "DeflaterOutputStream.hpp"

namespace __jni_impl::java::util
{
	class Vector;
}
namespace __jni_impl::java::util
{
	class HashSet;
}
namespace __jni_impl::java::util::zip
{
	class CRC32;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::util::zip
{
	class ZipEntry;
}

namespace __jni_impl::java::util::zip
{
	class ZipOutputStream : public __jni_impl::java::util::zip::DeflaterOutputStream
	{
	public:
		// Fields
		static jint STORED();
		static jint DEFLATED();
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::Charset arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		
		// Methods
		void write(jbyteArray arg0, jint arg1, jint arg2);
		void close();
		void setMethod(jint arg0);
		void setComment(jstring arg0);
		void setComment(const QString &arg0);
		void setLevel(jint arg0);
		void finish();
		void closeEntry();
		void putNextEntry(__jni_impl::java::util::zip::ZipEntry arg0);
	};
} // namespace __jni_impl::java::util::zip

#include "../Vector.hpp"
#include "../HashSet.hpp"
#include "CRC32.hpp"
#include "../../io/OutputStream.hpp"
#include "../../nio/charset/Charset.hpp"
#include "ZipEntry.hpp"

namespace __jni_impl::java::util::zip
{
	// Fields
	jint ZipOutputStream::STORED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipOutputStream",
			"STORED"
		);
	}
	jint ZipOutputStream::DEFLATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.util.zip.ZipOutputStream",
			"DEFLATED"
		);
	}
	
	// Constructors
	void ZipOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::Charset arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipOutputStream",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ZipOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.zip.ZipOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ZipOutputStream::write(jbyteArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([BII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void ZipOutputStream::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ZipOutputStream::setMethod(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMethod",
			"(I)V",
			arg0
		);
	}
	void ZipOutputStream::setComment(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ZipOutputStream::setComment(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setComment",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void ZipOutputStream::setLevel(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLevel",
			"(I)V",
			arg0
		);
	}
	void ZipOutputStream::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	void ZipOutputStream::closeEntry()
	{
		__thiz.callMethod<void>(
			"closeEntry",
			"()V"
		);
	}
	void ZipOutputStream::putNextEntry(__jni_impl::java::util::zip::ZipEntry arg0)
	{
		__thiz.callMethod<void>(
			"putNextEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::zip

namespace java::util::zip
{
	class ZipOutputStream : public __jni_impl::java::util::zip::ZipOutputStream
	{
	public:
		ZipOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		ZipOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::Charset arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ZipOutputStream(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::zip

#endif // JAVA_UTIL_ZIP_ZIPOUTPUTSTREAM

