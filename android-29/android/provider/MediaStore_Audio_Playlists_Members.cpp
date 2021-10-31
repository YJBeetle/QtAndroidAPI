#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "./MediaStore_Audio_Playlists_Members.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Audio_Playlists_Members::AUDIO_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"AUDIO_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists_Members::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists_Members::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists_Members::PLAYLIST_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"PLAYLIST_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists_Members::PLAY_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"PLAY_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Playlists_Members::_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	MediaStore_Audio_Playlists_Members::MediaStore_Audio_Playlists_Members(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaStore_Audio_Playlists_Members::MediaStore_Audio_Playlists_Members()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Playlists_Members::getContentUri(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	jboolean MediaStore_Audio_Playlists_Members::moveItem(android::content::ContentResolver arg0, jlong arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.MediaStore$Audio$Playlists$Members",
			"moveItem",
			"(Landroid/content/ContentResolver;JII)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::provider

