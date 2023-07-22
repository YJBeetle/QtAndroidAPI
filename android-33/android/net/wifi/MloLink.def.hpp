#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class MacAddress;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::net::wifi
{
	class MloLink : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint INVALID_MLO_LINK_ID();
		static jint MLO_LINK_STATE_ACTIVE();
		static jint MLO_LINK_STATE_IDLE();
		static jint MLO_LINK_STATE_INVALID();
		static jint MLO_LINK_STATE_UNASSOCIATED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MloLink(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MloLink(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MloLink();
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::MacAddress getApMacAddress() const;
		jint getBand() const;
		jint getChannel() const;
		jint getLinkId() const;
		android::net::MacAddress getStaMacAddress() const;
		jint getState() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::net::wifi

