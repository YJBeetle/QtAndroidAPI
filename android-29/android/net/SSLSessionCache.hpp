#pragma once

#include "../content/Context.def.hpp"
#include "../../java/io/File.def.hpp"
#include "./SSLSessionCache.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline SSLSessionCache::SSLSessionCache(android::content::Context arg0)
		: JObject(
			"android.net.SSLSessionCache",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	inline SSLSessionCache::SSLSessionCache(java::io::File arg0)
		: JObject(
			"android.net.SSLSessionCache",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::net

// Base class headers

