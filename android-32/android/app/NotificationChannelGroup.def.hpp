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
		NotificationChannelGroup(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		NotificationChannelGroup(JString arg0, JString arg1);
		
		// Methods
		android::app::NotificationChannelGroup clone() const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getChannels() const;
		JString getDescription() const;
		JString getId() const;
		JString getName() const;
		jint hashCode() const;
		jboolean isBlocked() const;
		void setDescription(JString arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

