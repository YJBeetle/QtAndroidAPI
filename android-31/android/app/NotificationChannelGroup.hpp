#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class NotificationChannelGroup : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NotificationChannelGroup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		NotificationChannelGroup(QAndroidJniObject obj);
		
		// Constructors
		NotificationChannelGroup(jstring arg0, jstring arg1);
		
		// Methods
		android::app::NotificationChannelGroup clone();
		jint describeContents();
		jboolean equals(jobject arg0);
		JObject getChannels();
		jstring getDescription();
		jstring getId();
		jstring getName();
		jint hashCode();
		jboolean isBlocked();
		void setDescription(jstring arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

