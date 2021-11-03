#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Audio_Genres_Members.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Audio_Genres_Members::AUDIO_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"AUDIO_ID",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Genres_Members::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Genres_Members::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Genres_Members::GENRE_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"GENRE_ID",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	MediaStore_Audio_Genres_Members::MediaStore_Audio_Genres_Members(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Audio_Genres_Members::MediaStore_Audio_Genres_Members()
		: JObject(
			"android.provider.MediaStore$Audio$Genres$Members",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Audio_Genres_Members::getContentUri(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Genres$Members",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::provider

