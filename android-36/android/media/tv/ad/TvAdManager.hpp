#pragma once

#include "./TvAdManager_TvAdServiceCallback.def.hpp"
#include "../../../os/Bundle.def.hpp"
#include "../../../../JString.hpp"
#include "./TvAdManager.def.hpp"

namespace android::media::tv::ad
{
	// Fields
	inline JString TvAdManager::ACTION_APP_LINK_COMMAND()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"ACTION_APP_LINK_COMMAND",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::APP_LINK_KEY_BACK_URI()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"APP_LINK_KEY_BACK_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::APP_LINK_KEY_CLASS_NAME()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"APP_LINK_KEY_CLASS_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::APP_LINK_KEY_COMMAND_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"APP_LINK_KEY_COMMAND_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::APP_LINK_KEY_PACKAGE_NAME()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"APP_LINK_KEY_PACKAGE_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::APP_LINK_KEY_SERVICE_ID()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"APP_LINK_KEY_SERVICE_ID",
			"Ljava/lang/String;"
		);
	}
	inline jint TvAdManager::ERROR_BLOCKED()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"ERROR_BLOCKED"
		);
	}
	inline jint TvAdManager::ERROR_ENCRYPTED()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"ERROR_ENCRYPTED"
		);
	}
	inline jint TvAdManager::ERROR_NONE()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"ERROR_NONE"
		);
	}
	inline jint TvAdManager::ERROR_NOT_SUPPORTED()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"ERROR_NOT_SUPPORTED"
		);
	}
	inline jint TvAdManager::ERROR_RESOURCE_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"ERROR_RESOURCE_UNAVAILABLE"
		);
	}
	inline jint TvAdManager::ERROR_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"ERROR_UNKNOWN"
		);
	}
	inline jint TvAdManager::ERROR_UNKNOWN_CHANNEL()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"ERROR_UNKNOWN_CHANNEL"
		);
	}
	inline jint TvAdManager::ERROR_WEAK_SIGNAL()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"ERROR_WEAK_SIGNAL"
		);
	}
	inline JString TvAdManager::INTENT_KEY_AD_SERVICE_ID()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"INTENT_KEY_AD_SERVICE_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::INTENT_KEY_CHANNEL_URI()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"INTENT_KEY_CHANNEL_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::INTENT_KEY_COMMAND_TYPE()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"INTENT_KEY_COMMAND_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::INTENT_KEY_TV_INPUT_ID()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"INTENT_KEY_TV_INPUT_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::SESSION_DATA_KEY_AD_BUFFER()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"SESSION_DATA_KEY_AD_BUFFER",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::SESSION_DATA_KEY_AD_REQUEST()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"SESSION_DATA_KEY_AD_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::SESSION_DATA_KEY_BROADCAST_INFO_REQUEST()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"SESSION_DATA_KEY_BROADCAST_INFO_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::SESSION_DATA_KEY_REQUEST_ID()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"SESSION_DATA_KEY_REQUEST_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::SESSION_DATA_TYPE_AD_BUFFER_READY()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"SESSION_DATA_TYPE_AD_BUFFER_READY",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::SESSION_DATA_TYPE_AD_REQUEST()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"SESSION_DATA_TYPE_AD_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::SESSION_DATA_TYPE_BROADCAST_INFO_REQUEST()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"SESSION_DATA_TYPE_BROADCAST_INFO_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline JString TvAdManager::SESSION_DATA_TYPE_REMOVE_BROADCAST_INFO_REQUEST()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdManager",
			"SESSION_DATA_TYPE_REMOVE_BROADCAST_INFO_REQUEST",
			"Ljava/lang/String;"
		);
	}
	inline jint TvAdManager::SESSION_STATE_ERROR()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"SESSION_STATE_ERROR"
		);
	}
	inline jint TvAdManager::SESSION_STATE_RUNNING()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"SESSION_STATE_RUNNING"
		);
	}
	inline jint TvAdManager::SESSION_STATE_STOPPED()
	{
		return getStaticField<jint>(
			"android.media.tv.ad.TvAdManager",
			"SESSION_STATE_STOPPED"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject TvAdManager::getTvAdServiceList() const
	{
		return callObjectMethod(
			"getTvAdServiceList",
			"()Ljava/util/List;"
		);
	}
	inline void TvAdManager::registerCallback(JObject arg0, android::media::tv::ad::TvAdManager_TvAdServiceCallback arg1) const
	{
		callMethod<void>(
			"registerCallback",
			"(Ljava/util/concurrent/Executor;Landroid/media/tv/ad/TvAdManager$TvAdServiceCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TvAdManager::sendAppLinkCommand(JString arg0, android::os::Bundle arg1) const
	{
		callMethod<void>(
			"sendAppLinkCommand",
			"(Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void TvAdManager::unregisterCallback(android::media::tv::ad::TvAdManager_TvAdServiceCallback arg0) const
	{
		callMethod<void>(
			"unregisterCallback",
			"(Landroid/media/tv/ad/TvAdManager$TvAdServiceCallback;)V",
			arg0.object()
		);
	}
} // namespace android::media::tv::ad

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::ad;
#endif
