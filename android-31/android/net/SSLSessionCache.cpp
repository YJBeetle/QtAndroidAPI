#include "../content/Context.hpp"
#include "../../java/io/File.hpp"
#include "./SSLSessionCache.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	SSLSessionCache::SSLSessionCache(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SSLSessionCache::SSLSessionCache(android::content::Context arg0)
		: JObject(
			"android.net.SSLSessionCache",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	SSLSessionCache::SSLSessionCache(java::io::File arg0)
		: JObject(
			"android.net.SSLSessionCache",
			"(Ljava/io/File;)V",
			arg0.object()
		) {}
	
	// Methods
} // namespace android::net

