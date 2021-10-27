#include "../net/Uri.hpp"
#include "./MediaStore_Audio_Genres_Members.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Audio_Genres_Members::AUDIO_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"AUDIO_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Genres_Members::CONTENT_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Genres_Members::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Audio_Genres_Members::GENRE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"GENRE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	MediaStore_Audio_Genres_Members::MediaStore_Audio_Genres_Members(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaStore_Audio_Genres_Members::MediaStore_Audio_Genres_Members()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Audio$Genres$Members",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject MediaStore_Audio_Genres_Members::getContentUri(jstring arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Genres$Members",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject MediaStore_Audio_Genres_Members::getContentUri(const QString &arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Genres$Members",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace android::provider

