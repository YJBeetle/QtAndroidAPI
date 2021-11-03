#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Parcel.hpp"
#include "./NotificationListenerService_Ranking.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NotificationListenerService_RankingMap.hpp"

namespace android::service::notification
{
	// Fields
	JObject NotificationListenerService_RankingMap::CREATOR()
	{
		return getStaticObjectField(
			"android.service.notification.NotificationListenerService$RankingMap",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	NotificationListenerService_RankingMap::NotificationListenerService_RankingMap(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint NotificationListenerService_RankingMap::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NotificationListenerService_RankingMap::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JArray NotificationListenerService_RankingMap::getOrderedKeys() const
	{
		return callObjectMethod(
			"getOrderedKeys",
			"()[Ljava/lang/String;"
		);
	}
	jboolean NotificationListenerService_RankingMap::getRanking(JString arg0, android::service::notification::NotificationListenerService_Ranking arg1) const
	{
		return callMethod<jboolean>(
			"getRanking",
			"(Ljava/lang/String;Landroid/service/notification/NotificationListenerService$Ranking;)Z",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	void NotificationListenerService_RankingMap::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::notification

