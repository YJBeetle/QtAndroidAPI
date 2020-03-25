#pragma once

#ifndef JAVA_UTIL_JAR_JAROUTPUTSTREAM
#define JAVA_UTIL_JAR_JAROUTPUTSTREAM

#include "../../../__JniBaseClass.hpp"
#include "../../io/OutputStream.hpp"
#include "../../io/FilterOutputStream.hpp"
#include "../zip/DeflaterOutputStream.hpp"
#include "../zip/ZipOutputStream.hpp"

namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::util::jar
{
	class Manifest;
}
namespace __jni_impl::java::util::zip
{
	class ZipEntry;
}

namespace __jni_impl::java::util::jar
{
	class JarOutputStream : public __jni_impl::java::util::zip::ZipOutputStream
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::jar::Manifest arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		
		// Methods
		void putNextEntry(__jni_impl::java::util::zip::ZipEntry arg0);
	};
} // namespace __jni_impl::java::util::jar

#include "../../io/OutputStream.hpp"
#include "Manifest.hpp"
#include "../zip/ZipEntry.hpp"

namespace __jni_impl::java::util::jar
{
	// Fields
	
	// Constructors
	void JarOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::jar::Manifest arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarOutputStream",
			"(Ljava/io/OutputStream;Ljava/util/jar/Manifest;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void JarOutputStream::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarOutputStream",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	void JarOutputStream::putNextEntry(__jni_impl::java::util::zip::ZipEntry arg0)
	{
		__thiz.callMethod<void>(
			"putNextEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::util::jar

namespace java::util::jar
{
	class JarOutputStream : public __jni_impl::java::util::jar::JarOutputStream
	{
	public:
		JarOutputStream(QAndroidJniObject obj) { __thiz = obj; }
		JarOutputStream(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::util::jar::Manifest arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		JarOutputStream(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::jar

#endif // JAVA_UTIL_JAR_JAROUTPUTSTREAM

