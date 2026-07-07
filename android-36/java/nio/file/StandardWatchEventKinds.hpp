#pragma once

#include "./StandardWatchEventKinds.def.hpp"

namespace java::nio::file
{
	// Fields
	inline JObject StandardWatchEventKinds::ENTRY_CREATE()
	{
		return getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"ENTRY_CREATE",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	inline JObject StandardWatchEventKinds::ENTRY_DELETE()
	{
		return getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"ENTRY_DELETE",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	inline JObject StandardWatchEventKinds::ENTRY_MODIFY()
	{
		return getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"ENTRY_MODIFY",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	inline JObject StandardWatchEventKinds::OVERFLOW()
	{
		return getStaticObjectField(
			"java.nio.file.StandardWatchEventKinds",
			"OVERFLOW",
			"Ljava/nio/file/WatchEvent$Kind;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace java::nio::file

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file;
#endif
