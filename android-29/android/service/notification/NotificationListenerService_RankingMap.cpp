#include "../../os/Parcel.hpp"
#include "./NotificationListenerService_Ranking.hpp"
#include "./NotificationListenerService_RankingMap.hpp"

namespace android::service::notification
{
	// Fields
	QAndroidJniObject NotificationListenerService_RankingMap::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.notification.NotificationListenerService$RankingMap",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	NotificationListenerService_RankingMap::NotificationListenerService_RankingMap(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint NotificationListenerService_RankingMap::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean NotificationListenerService_RankingMap::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jarray NotificationListenerService_RankingMap::getOrderedKeys()
	{
		return __thiz.callObjectMethod(
			"getOrderedKeys",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jboolean NotificationListenerService_RankingMap::getRanking(jstring arg0, android::service::notification::NotificationListenerService_Ranking arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getRanking",
			"(Ljava/lang/String;Landroid/service/notification/NotificationListenerService$Ranking;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void NotificationListenerService_RankingMap::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::notification

