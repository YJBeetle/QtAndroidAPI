#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../../net/URI.hpp"
#include "./Paths.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject Paths::get(java::net::URI arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.Paths",
			"get",
			"(Ljava/net/URI;)Ljava/nio/file/Path;",
			arg0.object()
		);
	}
	JObject Paths::get(JString arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.nio.file.Paths",
			"get",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			arg0.object<jstring>(),
			arg1.object<jarray>()
		);
	}
} // namespace java::nio::file

