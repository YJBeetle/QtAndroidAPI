#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Audio_Genres.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Audio_Genres::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Genres::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Genres::ENTRY_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri MediaStore_Audio_Genres::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri MediaStore_Audio_Genres::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	MediaStore_Audio_Genres::MediaStore_Audio_Genres()
		: JObject(
			"android.provider.MediaStore$Audio$Genres",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Audio_Genres::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Genres",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	android::net::Uri MediaStore_Audio_Genres::getContentUriForAudioId(JString arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Genres",
			"getContentUriForAudioId",
			"(Ljava/lang/String;I)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::provider

