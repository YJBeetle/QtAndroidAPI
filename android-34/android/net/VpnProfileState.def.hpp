#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net
{
	class VpnProfileState : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STATE_CONNECTED();
		static jint STATE_CONNECTING();
		static jint STATE_DISCONNECTED();
		static jint STATE_FAILED();
		
		// QJniObject forward
		template<typename ...Ts> explicit VpnProfileState(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VpnProfileState(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VpnProfileState(jint arg0, JString arg1, jboolean arg2, jboolean arg3);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getSessionId() const;
		jint getState() const;
		jint hashCode() const;
		jboolean isAlwaysOn() const;
		jboolean isLockdownEnabled() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net

