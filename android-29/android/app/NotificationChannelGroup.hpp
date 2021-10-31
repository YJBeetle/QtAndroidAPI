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
		static QAndroidJniObject CREATOR();
		
		NotificationChannelGroup(QAndroidJniObject obj);
		// Constructors
		NotificationChannelGroup(jstring arg0, jstring arg1);
		NotificationChannelGroup() = default;
		
		// Methods
		QAndroidJniObject clone();
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getChannels();
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

