#pragma once

#include "../../../JObject.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::adservices::measurement
{
	class WebTriggerRegistrationRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WebTriggerRegistrationRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebTriggerRegistrationRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::Uri getDestination() const;
		JObject getTriggerParams() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::measurement

