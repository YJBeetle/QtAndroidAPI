#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Parcel.def.hpp"
#include "./NotificationListenerService_Ranking.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NotificationListenerService_RankingMap.def.hpp"

namespace android::service::notification
{
	// Fields
	inline JObject NotificationListenerService_RankingMap::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.NotificationListenerService$RankingMap",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint NotificationListenerService_RankingMap::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean NotificationListenerService_RankingMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JArray NotificationListenerService_RankingMap::getOrderedKeys() const
	{
		return callObjectMethod(
			"getOrderedKeys",
			"()[Ljava/lang/String;"
		);
	}
	inline jboolean NotificationListenerService_RankingMap::getRanking(JString arg0, android::service::notification::NotificationListenerService_Ranking arg1) const
	{
		return callMethod<jboolean>(
			"getRanking",
			"(Ljava/lang/String;Landroid/service/notification/NotificationListenerService$Ranking;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void NotificationListenerService_RankingMap::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

// Base class headers

