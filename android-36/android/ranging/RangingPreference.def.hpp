#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::ranging
{
	class RangingConfig;
}
namespace android::ranging
{
	class SessionConfig;
}
class JString;

namespace android::ranging
{
	class RangingPreference : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint DEVICE_ROLE_INITIATOR();
		static jint DEVICE_ROLE_RESPONDER();
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingPreference(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingPreference(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getDeviceRole() const;
		android::ranging::RangingConfig getRangingParams() const;
		android::ranging::SessionConfig getSessionConfig() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging

