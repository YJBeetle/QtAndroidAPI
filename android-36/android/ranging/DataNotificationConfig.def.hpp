#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::ranging
{
	class DataNotificationConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint NOTIFICATION_CONFIG_DISABLE();
		static jint NOTIFICATION_CONFIG_ENABLE();
		static jint NOTIFICATION_CONFIG_PROXIMITY_EDGE();
		static jint NOTIFICATION_CONFIG_PROXIMITY_LEVEL();
		
		// QJniObject forward
		template<typename ...Ts> explicit DataNotificationConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DataNotificationConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getNotificationConfigType() const;
		jint getProximityFarCm() const;
		jint getProximityNearCm() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging

