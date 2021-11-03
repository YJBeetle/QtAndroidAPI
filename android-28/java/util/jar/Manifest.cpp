#include "../../io/InputStream.hpp"
#include "../../io/OutputStream.hpp"
#include "../../lang/StringBuffer.hpp"
#include "./Attributes.hpp"
#include "./Manifest.hpp"

namespace java::util::jar
{
	// Fields
	
	// QAndroidJniObject forward
	Manifest::Manifest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Manifest::Manifest()
		: JObject(
			"java.util.jar.Manifest",
			"()V"
		) {}
	Manifest::Manifest(java::io::InputStream arg0)
		: JObject(
			"java.util.jar.Manifest",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	Manifest::Manifest(java::util::jar::Manifest &arg0)
		: JObject(
			"java.util.jar.Manifest",
			"(Ljava/util/jar/Manifest;)V",
			arg0.object()
		) {}
	
	// Methods
	void Manifest::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jobject Manifest::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean Manifest::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::util::jar::Attributes Manifest::getAttributes(jstring arg0)
	{
		return callObjectMethod(
			"getAttributes",
			"(Ljava/lang/String;)Ljava/util/jar/Attributes;",
			arg0
		);
	}
	JObject Manifest::getEntries()
	{
		return callObjectMethod(
			"getEntries",
			"()Ljava/util/Map;"
		);
	}
	java::util::jar::Attributes Manifest::getMainAttributes()
	{
		return callObjectMethod(
			"getMainAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	jint Manifest::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Manifest::read(java::io::InputStream arg0)
	{
		callMethod<void>(
			"read",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void Manifest::write(java::io::OutputStream arg0)
	{
		callMethod<void>(
			"write",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace java::util::jar

