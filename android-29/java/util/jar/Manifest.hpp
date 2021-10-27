#pragma once

#ifndef JAVA_UTIL_JAR_MANIFEST
#define JAVA_UTIL_JAR_MANIFEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::util::jar
{
	class Attributes;
}

namespace __jni_impl::java::util::jar
{
	class Manifest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::io::InputStream arg0);
		void __constructor(__jni_impl::java::util::jar::Manifest arg0);
		
		// Methods
		void clear();
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject getAttributes(jstring arg0);
		QAndroidJniObject getAttributes(const QString &arg0);
		QAndroidJniObject getEntries();
		QAndroidJniObject getMainAttributes();
		jint hashCode();
		void read(__jni_impl::java::io::InputStream arg0);
		void write(__jni_impl::java::io::OutputStream arg0);
	};
} // namespace __jni_impl::java::util::jar

#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../lang/StringBuffer.hpp"
#include "Attributes.hpp"

namespace __jni_impl::java::util::jar
{
	// Fields
	
	// Constructors
	void Manifest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.Manifest",
			"()V"
		);
	}
	void Manifest::__constructor(__jni_impl::java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.Manifest",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Manifest::__constructor(__jni_impl::java::util::jar::Manifest arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.Manifest",
			"(Ljava/util/jar/Manifest;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void Manifest::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject Manifest::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Manifest::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject Manifest::getAttributes(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"(Ljava/lang/String;)Ljava/util/jar/Attributes;",
			arg0
		);
	}
	QAndroidJniObject Manifest::getAttributes(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"(Ljava/lang/String;)Ljava/util/jar/Attributes;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Manifest::getEntries()
	{
		return __thiz.callObjectMethod(
			"getEntries",
			"()Ljava/util/Map;"
		);
	}
	QAndroidJniObject Manifest::getMainAttributes()
	{
		return __thiz.callObjectMethod(
			"getMainAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	jint Manifest::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Manifest::read(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"read",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Manifest::write(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::util::jar

namespace java::util::jar
{
	class Manifest : public __jni_impl::java::util::jar::Manifest
	{
	public:
		Manifest(QAndroidJniObject obj) { __thiz = obj; }
		Manifest()
		{
			__constructor();
		}
		Manifest(__jni_impl::java::io::InputStream arg0)
		{
			__constructor(
				arg0);
		}
		Manifest(__jni_impl::java::util::jar::Manifest arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::util::jar

#endif // JAVA_UTIL_JAR_MANIFEST

