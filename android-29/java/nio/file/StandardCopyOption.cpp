#include "./StandardCopyOption.hpp"

namespace java::nio::file
{
	// Fields
	java::nio::file::StandardCopyOption StandardCopyOption::ATOMIC_MOVE()
	{
		return getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"ATOMIC_MOVE",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	java::nio::file::StandardCopyOption StandardCopyOption::COPY_ATTRIBUTES()
	{
		return getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"COPY_ATTRIBUTES",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	java::nio::file::StandardCopyOption StandardCopyOption::REPLACE_EXISTING()
	{
		return getStaticObjectField(
			"java.nio.file.StandardCopyOption",
			"REPLACE_EXISTING",
			"Ljava/nio/file/StandardCopyOption;"
		);
	}
	
	// QJniObject forward
	StandardCopyOption::StandardCopyOption(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::StandardCopyOption StandardCopyOption::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.StandardCopyOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/StandardCopyOption;",
			arg0
		);
	}
	jarray StandardCopyOption::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.StandardCopyOption",
			"values",
			"()[Ljava/nio/file/StandardCopyOption;"
		).object<jarray>();
	}
} // namespace java::nio::file

