#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class NotificationChannelGroup : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit NotificationChannelGroup(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		NotificationChannelGroup(QJniObject obj);
		
		// Constructors
		NotificationChannelGroup(jstring arg0, jstring arg1);
		
		// Methods
		android::app::NotificationChannelGroup clone();
		jint describeContents();
		jboolean equals(jobject arg0);
		__JniBaseClass getChannels();
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

