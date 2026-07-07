#pragma once

#include "../../../../JString.hpp"
#include "../../../lang/Void.def.hpp"
#include "./FileTypeDetector.def.hpp"

namespace java::nio::file::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString FileTypeDetector::probeContentType(JObject arg0) const
	{
		return callObjectMethod(
			"probeContentType",
			"(Ljava/nio/file/Path;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace java::nio::file::spi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file::spi;
#endif
