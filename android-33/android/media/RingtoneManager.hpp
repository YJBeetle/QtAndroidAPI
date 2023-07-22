#pragma once

#include "../app/Activity.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/AssetFileDescriptor.def.hpp"
#include "./Ringtone.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./RingtoneManager.def.hpp"

namespace android::media
{
	// Fields
	inline JString RingtoneManager::ACTION_RINGTONE_PICKER()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"ACTION_RINGTONE_PICKER",
			"Ljava/lang/String;"
		);
	}
	inline JString RingtoneManager::EXTRA_RINGTONE_DEFAULT_URI()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_DEFAULT_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString RingtoneManager::EXTRA_RINGTONE_EXISTING_URI()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_EXISTING_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString RingtoneManager::EXTRA_RINGTONE_INCLUDE_DRM()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_INCLUDE_DRM",
			"Ljava/lang/String;"
		);
	}
	inline JString RingtoneManager::EXTRA_RINGTONE_PICKED_URI()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_PICKED_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString RingtoneManager::EXTRA_RINGTONE_SHOW_DEFAULT()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_SHOW_DEFAULT",
			"Ljava/lang/String;"
		);
	}
	inline JString RingtoneManager::EXTRA_RINGTONE_SHOW_SILENT()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_SHOW_SILENT",
			"Ljava/lang/String;"
		);
	}
	inline JString RingtoneManager::EXTRA_RINGTONE_TITLE()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_TITLE",
			"Ljava/lang/String;"
		);
	}
	inline JString RingtoneManager::EXTRA_RINGTONE_TYPE()
	{
		return getStaticObjectField(
			"android.media.RingtoneManager",
			"EXTRA_RINGTONE_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline jint RingtoneManager::ID_COLUMN_INDEX()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"ID_COLUMN_INDEX"
		);
	}
	inline jint RingtoneManager::TITLE_COLUMN_INDEX()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"TITLE_COLUMN_INDEX"
		);
	}
	inline jint RingtoneManager::TYPE_ALARM()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_ALARM"
		);
	}
	inline jint RingtoneManager::TYPE_ALL()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_ALL"
		);
	}
	inline jint RingtoneManager::TYPE_NOTIFICATION()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_NOTIFICATION"
		);
	}
	inline jint RingtoneManager::TYPE_RINGTONE()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"TYPE_RINGTONE"
		);
	}
	inline jint RingtoneManager::URI_COLUMN_INDEX()
	{
		return getStaticField<jint>(
			"android.media.RingtoneManager",
			"URI_COLUMN_INDEX"
		);
	}
	
	// Constructors
	inline RingtoneManager::RingtoneManager(android::app::Activity arg0)
		: JObject(
			"android.media.RingtoneManager",
			"(Landroid/app/Activity;)V",
			arg0.object()
		) {}
	inline RingtoneManager::RingtoneManager(android::content::Context arg0)
		: JObject(
			"android.media.RingtoneManager",
			"(Landroid/content/Context;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::net::Uri RingtoneManager::getActualDefaultRingtoneUri(android::content::Context arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getActualDefaultRingtoneUri",
			"(Landroid/content/Context;I)Landroid/net/Uri;",
			arg0.object(),
			arg1
		);
	}
	inline jint RingtoneManager::getDefaultType(android::net::Uri arg0)
	{
		return callStaticMethod<jint>(
			"android.media.RingtoneManager",
			"getDefaultType",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	inline android::net::Uri RingtoneManager::getDefaultUri(jint arg0)
	{
		return callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getDefaultUri",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	inline android::media::Ringtone RingtoneManager::getRingtone(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getRingtone",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/media/Ringtone;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::net::Uri RingtoneManager::getValidRingtoneUri(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.media.RingtoneManager",
			"getValidRingtoneUri",
			"(Landroid/content/Context;)Landroid/net/Uri;",
			arg0.object()
		);
	}
	inline jboolean RingtoneManager::hasHapticChannels(android::net::Uri arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.RingtoneManager",
			"hasHapticChannels",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	inline jboolean RingtoneManager::hasHapticChannels(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticMethod<jboolean>(
			"android.media.RingtoneManager",
			"hasHapticChannels",
			"(Landroid/content/Context;Landroid/net/Uri;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean RingtoneManager::isDefault(android::net::Uri arg0)
	{
		return callStaticMethod<jboolean>(
			"android.media.RingtoneManager",
			"isDefault",
			"(Landroid/net/Uri;)Z",
			arg0.object()
		);
	}
	inline android::content::res::AssetFileDescriptor RingtoneManager::openDefaultRingtoneUri(android::content::Context arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.media.RingtoneManager",
			"openDefaultRingtoneUri",
			"(Landroid/content/Context;Landroid/net/Uri;)Landroid/content/res/AssetFileDescriptor;",
			arg0.object(),
			arg1.object()
		);
	}
	inline void RingtoneManager::setActualDefaultRingtoneUri(android::content::Context arg0, jint arg1, android::net::Uri arg2)
	{
		callStaticMethod<void>(
			"android.media.RingtoneManager",
			"setActualDefaultRingtoneUri",
			"(Landroid/content/Context;ILandroid/net/Uri;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline JObject RingtoneManager::getCursor() const
	{
		return callObjectMethod(
			"getCursor",
			"()Landroid/database/Cursor;"
		);
	}
	inline jboolean RingtoneManager::getIncludeDrm() const
	{
		return callMethod<jboolean>(
			"getIncludeDrm",
			"()Z"
		);
	}
	inline android::media::Ringtone RingtoneManager::getRingtone(jint arg0) const
	{
		return callObjectMethod(
			"getRingtone",
			"(I)Landroid/media/Ringtone;",
			arg0
		);
	}
	inline jint RingtoneManager::getRingtonePosition(android::net::Uri arg0) const
	{
		return callMethod<jint>(
			"getRingtonePosition",
			"(Landroid/net/Uri;)I",
			arg0.object()
		);
	}
	inline android::net::Uri RingtoneManager::getRingtoneUri(jint arg0) const
	{
		return callObjectMethod(
			"getRingtoneUri",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	inline jboolean RingtoneManager::getStopPreviousRingtone() const
	{
		return callMethod<jboolean>(
			"getStopPreviousRingtone",
			"()Z"
		);
	}
	inline jboolean RingtoneManager::hasHapticChannels(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasHapticChannels",
			"(I)Z",
			arg0
		);
	}
	inline jint RingtoneManager::inferStreamType() const
	{
		return callMethod<jint>(
			"inferStreamType",
			"()I"
		);
	}
	inline void RingtoneManager::setIncludeDrm(jboolean arg0) const
	{
		callMethod<void>(
			"setIncludeDrm",
			"(Z)V",
			arg0
		);
	}
	inline void RingtoneManager::setStopPreviousRingtone(jboolean arg0) const
	{
		callMethod<void>(
			"setStopPreviousRingtone",
			"(Z)V",
			arg0
		);
	}
	inline void RingtoneManager::setType(jint arg0) const
	{
		callMethod<void>(
			"setType",
			"(I)V",
			arg0
		);
	}
	inline void RingtoneManager::stopPreviousRingtone() const
	{
		callMethod<void>(
			"stopPreviousRingtone",
			"()V"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
