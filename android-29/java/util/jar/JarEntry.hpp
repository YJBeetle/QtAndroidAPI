#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../zip/ZipEntry.hpp"

namespace __jni_impl::java::util::jar
{
	class Attributes;
}
namespace __jni_impl::java::util::zip
{
	class ZipEntry;
}

namespace __jni_impl::java::util::jar
{
	class JarEntry : public __jni_impl::java::util::zip::ZipEntry
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::util::jar::JarEntry arg0);
		void __constructor(__jni_impl::java::util::zip::ZipEntry arg0);
		
		// Methods
		QAndroidJniObject getAttributes();
		jarray getCertificates();
		jarray getCodeSigners();
		jstring getRealName();
	};
} // namespace __jni_impl::java::util::jar

#include "./Attributes.hpp"
#include "../zip/ZipEntry.hpp"

namespace __jni_impl::java::util::jar
{
	// Fields
	
	// Constructors
	void JarEntry::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarEntry",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void JarEntry::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarEntry",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void JarEntry::__constructor(__jni_impl::java::util::jar::JarEntry arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarEntry",
			"(Ljava/util/jar/JarEntry;)V",
			arg0.__jniObject().object()
		);
	}
	void JarEntry::__constructor(__jni_impl::java::util::zip::ZipEntry arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.JarEntry",
			"(Ljava/util/zip/ZipEntry;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject JarEntry::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	jarray JarEntry::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jarray JarEntry::getCodeSigners()
	{
		return __thiz.callObjectMethod(
			"getCodeSigners",
			"()[Ljava/security/CodeSigner;"
		).object<jarray>();
	}
	jstring JarEntry::getRealName()
	{
		return __thiz.callObjectMethod(
			"getRealName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::jar

namespace java::util::jar
{
	class JarEntry : public __jni_impl::java::util::jar::JarEntry
	{
	public:
		JarEntry(QAndroidJniObject obj) { __thiz = obj; }
		JarEntry(jstring arg0)
		{
			__constructor(
				arg0);
		}
		JarEntry(__jni_impl::java::util::jar::JarEntry arg0)
		{
			__constructor(
				arg0);
		}
		JarEntry(__jni_impl::java::util::zip::ZipEntry arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::jar

