#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Audio_Playlists_Members.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Audio_Playlists_Members::AUDIO_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"AUDIO_ID",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Playlists_Members::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Playlists_Members::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Playlists_Members::PLAYLIST_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"PLAYLIST_ID",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Playlists_Members::PLAY_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"PLAY_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Audio_Playlists_Members::_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"_ID",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	MediaStore_Audio_Playlists_Members::MediaStore_Audio_Playlists_Members(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Audio_Playlists_Members::MediaStore_Audio_Playlists_Members()
		: JObject(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"()V"
		) {}
	
	// Methods
	android::net::Uri MediaStore_Audio_Playlists_Members::getContentUri(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1
		);
	}
	jboolean MediaStore_Audio_Playlists_Members::moveItem(android::content::ContentResolver arg0, jlong arg1, jint arg2, jint arg3)
	{
		return callStaticMethod<jboolean>(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"moveItem",
			"(Landroid/content/ContentResolver;JII)Z",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::provider

