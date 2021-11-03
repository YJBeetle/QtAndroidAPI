#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
namespace android::service::notification
{
	class NotificationListenerService_Ranking;
}
class JString;

namespace android::service::notification
{
	class NotificationListenerService_RankingMap : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotificationListenerService_RankingMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NotificationListenerService_RankingMap(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JArray getOrderedKeys();
		jboolean getRanking(JString arg0, android::service::notification::NotificationListenerService_Ranking arg1);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::notification

