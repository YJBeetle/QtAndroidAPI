#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::service::notification
{
	class NotificationListenerService_Ranking;
}

namespace __jni_impl::android::service::notification
{
	class NotificationListenerService_RankingMap : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getOrderedKeys();
		jboolean getRanking(jstring arg0, __jni_impl::android::service::notification::NotificationListenerService_Ranking arg1);
		jboolean getRanking(const QString &arg0, __jni_impl::android::service::notification::NotificationListenerService_Ranking arg1);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::notification

#include "../../os/Parcel.hpp"
#include "NotificationListenerService_Ranking.hpp"

namespace __jni_impl::android::service::notification
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
	
	// Constructors
	void NotificationListenerService_RankingMap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.notification.NotificationListenerService$RankingMap",
			"(V)V");
	}
	
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
	jboolean NotificationListenerService_RankingMap::getRanking(jstring arg0, __jni_impl::android::service::notification::NotificationListenerService_Ranking arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getRanking",
			"(Ljava/lang/String;Landroid/service/notification/NotificationListenerService$Ranking;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean NotificationListenerService_RankingMap::getRanking(const QString &arg0, __jni_impl::android::service::notification::NotificationListenerService_Ranking arg1)
	{
		return __thiz.callMethod<jboolean>(
			"getRanking",
			"(Ljava/lang/String;Landroid/service/notification/NotificationListenerService$Ranking;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void NotificationListenerService_RankingMap::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::service::notification

namespace android::service::notification
{
	class NotificationListenerService_RankingMap : public __jni_impl::android::service::notification::NotificationListenerService_RankingMap
	{
	public:
		NotificationListenerService_RankingMap(QAndroidJniObject obj) { __thiz = obj; }
		NotificationListenerService_RankingMap()
		{
			__constructor();
		}
	};
} // namespace android::service::notification

