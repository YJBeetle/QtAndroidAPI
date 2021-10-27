#include "../app/Activity.hpp"
#include "../content/Context.hpp"
#include "../content/res/AssetFileDescriptor.hpp"
#include "./Ringtone.hpp"
#include "../net/Uri.hpp"
#include "./RingtoneManager.hpp"

namespace android::media
{
	// Fields
	jstring RingtoneManager::ACTION_RINGTONE_PICKER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"ACTION_RINGTONE_PICKER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_DEFAULT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_DEFAULT_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_EXISTING_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_EXISTING_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_INCLUDE_DRM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_INCLUDE_DRM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_PICKED_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_PICKED_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_SHOW_DEFAULT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_SHOW_DEFAULT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_SHOW_SILENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_SHOW_SILENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_TITLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_TITLE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring RingtoneManager::EXTRA_RINGTONE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint RingtoneManager::ID_COLUMN_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"ID_COLUMN_INDEX"
		);
	}
	jint RingtoneManager::TITLE_COLUMN_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"TITLE_COLUMN_INDEX"
		);
	}
	jint RingtoneManager::TYPE_ALARM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_ALARM"
		);
	}
	jint RingtoneManager::TYPE_ALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_ALL"
		);
	}
	jint RingtoneManager::TYPE_NOTIFICATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_NOTIFICATION"
		);
	}
	jint RingtoneManager::TYPE_RINGTONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_RINGTONE"
		);
	}
	jint RingtoneManager::URI_COLUMN_INDEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.RingtoneManager",
			"URI_COLUMN_INDEX"
		);
	}
	
	RingtoneManager::RingtoneManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RingtoneManager::RingtoneManager(android::app::Activity &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.RingtoneManager",
			"(Landroid/app/Activity;)V",
			arg0.__jniObject().object()
		);
	}
	RingtoneManager::RingtoneManager(android::content::Context &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.media.RingtoneManager",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject RingtoneManager::getActualDefaultRingtoneUri(android::content::Context arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getActualDefaultRingtoneUri",
			"(Landroid/content/Context;I)Landroid/net/Uri;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint RingtoneManager::getDefaultType(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.media.RingtoneManager",
			"getDefaultType",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RingtoneManager::getDefaultUri(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getDefaultUri",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject RingtoneManager::getRingtone(android::content::Context arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getRingtone",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/Ringtone;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject RingtoneManager::getValidRingtoneUri(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getValidRingtoneUri",
			"(Landroid/content/Context;)Landroid/net/Uri;",
			arg0.__jniObject().object()
		);
	}
	jboolean RingtoneManager::hasHapticChannels(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.RingtoneManager",
			"hasHapticChannels",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean RingtoneManager::isDefault(android::net::Uri arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.media.RingtoneManager",
			"isDefault",
			"(Landroid/net/Uri;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RingtoneManager::openDefaultRingtoneUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.RingtoneManager",
			"openDefaultRingtoneUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/content/res/AssetFileDescriptor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void RingtoneManager::setActualDefaultRingtoneUri(android::content::Context arg0, jint arg1, android::net::Uri arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.media.RingtoneManager",
			"setActualDefaultRingtoneUri",
			"(Landroid/content/Context;ILandroid/net/Uri;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject RingtoneManager::getCursor()
	{
		return __thiz.callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	jboolean RingtoneManager::getIncludeDrm()
	{
		return __thiz.callMethod<jboolean>(
			"getIncludeDrm",
			"()Z"
		);
	}
	QAndroidJniObject RingtoneManager::getRingtone(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRingtone",
			"(I)Landroid/media/Ringtone;",
			arg0
		);
	}
	jint RingtoneManager::getRingtonePosition(android::net::Uri arg0)
	{
		return __thiz.callMethod<jint>(
			"getRingtonePosition",
			"(Landroid/net/Uri;)I",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RingtoneManager::getRingtoneUri(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getRingtoneUri",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	jboolean RingtoneManager::getStopPreviousRingtone()
	{
		return __thiz.callMethod<jboolean>(
			"getStopPreviousRingtone",
			"()Z"
		);
	}
	jboolean RingtoneManager::hasHapticChannels(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasHapticChannels",
			"(I)Z",
			arg0
		);
	}
	jint RingtoneManager::inferStreamType()
	{
		return __thiz.callMethod<jint>(
			"inferStreamType",
			"()I"
		);
	}
	void RingtoneManager::setIncludeDrm(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setIncludeDrm",
			"(Z)V",
			arg0
		);
	}
	void RingtoneManager::setStopPreviousRingtone(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setStopPreviousRingtone",
			"(Z)V",
			arg0
		);
	}
	void RingtoneManager::setType(jint arg0)
	{
		__thiz.callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	void RingtoneManager::stopPreviousRingtone()
	{
		__thiz.callMethod<void>(
			"stopPreviousRingtone",
			"()V"
		);
	}
} // namespace android::media

