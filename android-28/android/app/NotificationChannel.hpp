#pragma once

#include "../../JLongArray.hpp"
#include "../media/AudioAttributes.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./NotificationChannel.def.hpp"

namespace android::app
{
	// Fields
	inline JObject NotificationChannel::CREATOR()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString NotificationChannel::DEFAULT_CHANNEL_ID()
	{
		return getStaticObjectField(
			"android.app.NotificationChannel",
			"DEFAULT_CHANNEL_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline NotificationChannel::NotificationChannel(JString arg0, JString arg1, jint arg2)
		: JObject(
			"android.app.NotificationChannel",
			"(Ljava/lang/String;Ljava/lang/CharSequence;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline jboolean NotificationChannel::canBypassDnd() const
	{
		return callMethod<jboolean>(
			"canBypassDnd",
			"()Z"
		);
	}
	inline jboolean NotificationChannel::canShowBadge() const
	{
		return callMethod<jboolean>(
			"canShowBadge",
			"()Z"
		);
	}
	inline jint NotificationChannel::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void NotificationChannel::enableLights(jboolean arg0) const
	{
		callMethod<void>(
			"enableLights",
			"(Z)V",
			arg0
		);
	}
	inline void NotificationChannel::enableVibration(jboolean arg0) const
	{
		callMethod<void>(
			"enableVibration",
			"(Z)V",
			arg0
		);
	}
	inline jboolean NotificationChannel::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::media::AudioAttributes NotificationChannel::getAudioAttributes() const
	{
		return callObjectMethod(
			"getAudioAttributes",
			"()Landroid/media/AudioAttributes;"
		);
	}
	inline JString NotificationChannel::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		);
	}
	inline JString NotificationChannel::getGroup() const
	{
		return callObjectMethod(
			"getGroup",
			"()Ljava/lang/String;"
		);
	}
	inline JString NotificationChannel::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline jint NotificationChannel::getImportance() const
	{
		return callMethod<jint>(
			"getImportance",
			"()I"
		);
	}
	inline jint NotificationChannel::getLightColor() const
	{
		return callMethod<jint>(
			"getLightColor",
			"()I"
		);
	}
	inline jint NotificationChannel::getLockscreenVisibility() const
	{
		return callMethod<jint>(
			"getLockscreenVisibility",
			"()I"
		);
	}
	inline JString NotificationChannel::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::net::Uri NotificationChannel::getSound() const
	{
		return callObjectMethod(
			"getSound",
			"()Landroid/net/Uri;"
		);
	}
	inline JLongArray NotificationChannel::getVibrationPattern() const
	{
		return callObjectMethod(
			"getVibrationPattern",
			"()[J"
		);
	}
	inline jint NotificationChannel::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void NotificationChannel::setBypassDnd(jboolean arg0) const
	{
		callMethod<void>(
			"setBypassDnd",
			"(Z)V",
			arg0
		);
	}
	inline void NotificationChannel::setDescription(JString arg0) const
	{
		callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void NotificationChannel::setGroup(JString arg0) const
	{
		callMethod<void>(
			"setGroup",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void NotificationChannel::setImportance(jint arg0) const
	{
		callMethod<void>(
			"setImportance",
			"(I)V",
			arg0
		);
	}
	inline void NotificationChannel::setLightColor(jint arg0) const
	{
		callMethod<void>(
			"setLightColor",
			"(I)V",
			arg0
		);
	}
	inline void NotificationChannel::setLockscreenVisibility(jint arg0) const
	{
		callMethod<void>(
			"setLockscreenVisibility",
			"(I)V",
			arg0
		);
	}
	inline void NotificationChannel::setName(JString arg0) const
	{
		callMethod<void>(
			"setName",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline void NotificationChannel::setShowBadge(jboolean arg0) const
	{
		callMethod<void>(
			"setShowBadge",
			"(Z)V",
			arg0
		);
	}
	inline void NotificationChannel::setSound(android::net::Uri arg0, android::media::AudioAttributes arg1) const
	{
		callMethod<void>(
			"setSound",
			"(Landroid/net/Uri;Landroid/media/AudioAttributes;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void NotificationChannel::setVibrationPattern(JLongArray arg0) const
	{
		callMethod<void>(
			"setVibrationPattern",
			"([J)V",
			arg0.object<jlongArray>()
		);
	}
	inline jboolean NotificationChannel::shouldShowLights() const
	{
		return callMethod<jboolean>(
			"shouldShowLights",
			"()Z"
		);
	}
	inline jboolean NotificationChannel::shouldVibrate() const
	{
		return callMethod<jboolean>(
			"shouldVibrate",
			"()Z"
		);
	}
	inline JString NotificationChannel::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void NotificationChannel::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
