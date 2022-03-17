#pragma once

#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./StandardOpenOption.def.hpp"

namespace java::nio::file
{
	// Fields
	inline java::nio::file::StandardOpenOption StandardOpenOption::APPEND()
	{
		return getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"APPEND",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	inline java::nio::file::StandardOpenOption StandardOpenOption::CREATE()
	{
		return getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"CREATE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	inline java::nio::file::StandardOpenOption StandardOpenOption::CREATE_NEW()
	{
		return getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"CREATE_NEW",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	inline java::nio::file::StandardOpenOption StandardOpenOption::DELETE_ON_CLOSE()
	{
		return getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"DELETE_ON_CLOSE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	inline java::nio::file::StandardOpenOption StandardOpenOption::DSYNC()
	{
		return getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"DSYNC",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	inline java::nio::file::StandardOpenOption StandardOpenOption::READ()
	{
		return getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"READ",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	inline java::nio::file::StandardOpenOption StandardOpenOption::SPARSE()
	{
		return getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"SPARSE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	inline java::nio::file::StandardOpenOption StandardOpenOption::SYNC()
	{
		return getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"SYNC",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	inline java::nio::file::StandardOpenOption StandardOpenOption::TRUNCATE_EXISTING()
	{
		return getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"TRUNCATE_EXISTING",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	inline java::nio::file::StandardOpenOption StandardOpenOption::WRITE()
	{
		return getStaticObjectField(
			"java.nio.file.StandardOpenOption",
			"WRITE",
			"Ljava/nio/file/StandardOpenOption;"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::nio::file::StandardOpenOption StandardOpenOption::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.StandardOpenOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/StandardOpenOption;",
			arg0.object<jstring>()
		);
	}
	inline JArray StandardOpenOption::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.StandardOpenOption",
			"values",
			"()[Ljava/nio/file/StandardOpenOption;"
		);
	}
} // namespace java::nio::file

// Base class headers
#include "../../lang/Enum.hpp"

