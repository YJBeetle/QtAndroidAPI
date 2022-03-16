#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Downloads.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Downloads::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Downloads",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri MediaStore_Downloads::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Downloads",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri MediaStore_Downloads::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Downloads",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	android::net::Uri MediaStore_Downloads::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Downloads",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	android::net::Uri MediaStore_Downloads::getContentUri(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Downloads",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::provider

