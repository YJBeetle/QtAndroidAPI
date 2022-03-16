#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./LinkOption.hpp"

namespace java::nio::file
{
	// Fields
	java::nio::file::LinkOption LinkOption::NOFOLLOW_LINKS()
	{
		return getStaticObjectField(
			"java.nio.file.LinkOption",
			"NOFOLLOW_LINKS",
			"Ljava/nio/file/LinkOption;"
		);
	}
	
	// Constructors
	
	// Methods
	java::nio::file::LinkOption LinkOption::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.LinkOption",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/LinkOption;",
			arg0.object<jstring>()
		);
	}
	JArray LinkOption::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.LinkOption",
			"values",
			"()[Ljava/nio/file/LinkOption;"
		);
	}
} // namespace java::nio::file

