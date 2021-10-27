#include "../content/Context.hpp"
#include "../../java/io/File.hpp"
#include "./SSLSessionCache.hpp"

namespace android::net
{
	// Fields
	
	SSLSessionCache::SSLSessionCache(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SSLSessionCache::SSLSessionCache(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.SSLSessionCache",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	SSLSessionCache::SSLSessionCache(java::io::File &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.SSLSessionCache",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::net

