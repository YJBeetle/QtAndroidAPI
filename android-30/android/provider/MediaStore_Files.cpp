#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Files.hpp"

namespace android::provider
{
	// Fields
	
	// QJniObject forward
	MediaStore_Files::MediaStore_Files(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Files::MediaStore_Files()
		: JObject(
			"android.provider.MediaStore$Files",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Files::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	android::net::Uri MediaStore_Files::getContentUri(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::provider

