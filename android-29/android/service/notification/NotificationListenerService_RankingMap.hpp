#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::notification
{
	class NotificationListenerService_Ranking;
}

namespace android::service::notification
{
	class NotificationListenerService_RankingMap : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		NotificationListenerService_RankingMap(QAndroidJniObject obj);
		// Constructors
		NotificationListenerService_RankingMap() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getOrderedKeys();
		jboolean getRanking(jstring arg0, android::service::notification::NotificationListenerService_Ranking arg1);
		jboolean getRanking(const QString &arg0, android::service::notification::NotificationListenerService_Ranking arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::notification

