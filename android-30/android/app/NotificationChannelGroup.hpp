#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

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
		NotificationChannelGroup(JString arg0, JString arg1);
		
		// Methods
		android::app::NotificationChannelGroup clone();
		jint describeContents();
		jboolean equals(JObject arg0);
		JObject getChannels();
		JString getDescription();
		JString getId();
		JString getName();
		jint hashCode();
		jboolean isBlocked();
		void setDescription(JString arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

