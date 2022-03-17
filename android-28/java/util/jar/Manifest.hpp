#pragma once

#include "../../../JByteArray.hpp"
#include "../../io/InputStream.def.hpp"
#include "../../io/OutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../lang/StringBuffer.def.hpp"
#include "./Attributes.def.hpp"
#include "./Manifest.def.hpp"

namespace java::util::jar
{
	// Fields
	
	// Constructors
	inline Manifest::Manifest()
		: JObject(
			"java.util.jar.Manifest",
			"()V"
		) {}
	inline Manifest::Manifest(java::io::InputStream arg0)
		: JObject(
			"java.util.jar.Manifest",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline Manifest::Manifest(java::util::jar::Manifest &arg0)
		: JObject(
			"java.util.jar.Manifest",
			"(Ljava/util/jar/Manifest;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void Manifest::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline JObject Manifest::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean Manifest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::util::jar::Attributes Manifest::getAttributes(JString arg0) const
	{
		return callObjectMethod(
			"getAttributes",
			"(Ljava/lang/String;)Ljava/util/jar/Attributes;",
			arg0.object<jstring>()
		);
	}
	inline JObject Manifest::getEntries() const
	{
		return callObjectMethod(
			"getEntries",
			"()Ljava/util/Map;"
		);
	}
	inline java::util::jar::Attributes Manifest::getMainAttributes() const
	{
		return callObjectMethod(
			"getMainAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	inline jint Manifest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Manifest::read(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"read",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	inline void Manifest::write(java::io::OutputStream arg0) const
	{
		callMethod<void>(
			"write",
			"(Ljava/io/OutputStream;)V",
			arg0.object()
		);
	}
} // namespace java::util::jar

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::util::jar;
#endif
