#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../lang/StringBuffer.hpp"
#include "./Attributes.hpp"
#include "./Manifest.hpp"

namespace java::util::jar
{
	// Fields
	
	Manifest::Manifest(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Manifest::Manifest()
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.Manifest",
			"()V"
		);
	}
	Manifest::Manifest(java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.jar.Manifest",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	Manifest::Manifest(java::util::jar::Manifest &arg0)
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
	void Manifest::read(java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"read",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Manifest::write(java::io::OutputStream arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace java::util::jar

