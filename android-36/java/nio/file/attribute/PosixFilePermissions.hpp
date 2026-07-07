#pragma once

#include "../../../../JString.hpp"
#include "../../../lang/StringBuilder.def.hpp"
#include "./PosixFilePermissions.def.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject PosixFilePermissions::asFileAttribute(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"asFileAttribute",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/FileAttribute;",
			arg0.object()
		);
	}
	inline JObject PosixFilePermissions::fromString(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"fromString",
			"(Ljava/lang/String;)Ljava/util/Set;",
			arg0.object<jstring>()
		);
	}
	inline JString PosixFilePermissions::toString(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermissions",
			"toString",
			"(Ljava/util/Set;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace java::nio::file::attribute

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file::attribute;
#endif
