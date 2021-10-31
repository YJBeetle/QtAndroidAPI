#include "../net/Uri.hpp"
#include "./MediaStore_Audio_Genres_Members.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Audio_Genres_Members::AUDIO_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"AUDIO_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Genres_Members::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Genres_Members::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Genres_Members::GENRE_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"GENRE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	MediaStore_Audio_Genres_Members::MediaStore_Audio_Genres_Members(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore_Audio_Genres_Members::MediaStore_Audio_Genres_Members()
		: __JniBaseClass(
			"android.provider.MediaStore$Audio$Genres$Members",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Audio_Genres_Members::getContentUri(jstring arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Genres$Members",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
} // namespace android::provider

