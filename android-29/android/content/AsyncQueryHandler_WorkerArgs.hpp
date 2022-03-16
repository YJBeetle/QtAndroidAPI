#pragma once

#include "../../JArray.hpp"
#include "./ContentValues.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Handler.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AsyncQueryHandler_WorkerArgs.def.hpp"

namespace android::content
{
	// Fields
	inline JObject AsyncQueryHandler_WorkerArgs::cookie()
	{
		return getObjectField(
			"cookie",
			"Ljava/lang/Object;"
		);
	}
	inline android::os::Handler AsyncQueryHandler_WorkerArgs::handler()
	{
		return getObjectField(
			"handler",
			"Landroid/os/Handler;"
		);
	}
	inline JString AsyncQueryHandler_WorkerArgs::orderBy()
	{
		return getObjectField(
			"orderBy",
			"Ljava/lang/String;"
		);
	}
	inline JArray AsyncQueryHandler_WorkerArgs::projection()
	{
		return getObjectField(
			"projection",
			"[Ljava/lang/String;"
		);
	}
	inline JObject AsyncQueryHandler_WorkerArgs::result()
	{
		return getObjectField(
			"result",
			"Ljava/lang/Object;"
		);
	}
	inline JString AsyncQueryHandler_WorkerArgs::selection()
	{
		return getObjectField(
			"selection",
			"Ljava/lang/String;"
		);
	}
	inline JArray AsyncQueryHandler_WorkerArgs::selectionArgs()
	{
		return getObjectField(
			"selectionArgs",
			"[Ljava/lang/String;"
		);
	}
	inline android::net::Uri AsyncQueryHandler_WorkerArgs::uri()
	{
		return getObjectField(
			"uri",
			"Landroid/net/Uri;"
		);
	}
	inline android::content::ContentValues AsyncQueryHandler_WorkerArgs::values()
	{
		return getObjectField(
			"values",
			"Landroid/content/ContentValues;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::content

// Base class headers

