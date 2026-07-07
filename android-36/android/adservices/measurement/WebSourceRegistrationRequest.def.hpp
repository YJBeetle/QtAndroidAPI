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
namespace android::view
{
	class InputEvent;
}
class JObject;

namespace android::adservices::measurement
{
	class WebSourceRegistrationRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WebSourceRegistrationRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebSourceRegistrationRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::Uri getAppDestination() const;
		android::view::InputEvent getInputEvent() const;
		JObject getSourceParams() const;
		android::net::Uri getTopOriginUri() const;
		android::net::Uri getVerifiedDestination() const;
		android::net::Uri getWebDestination() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::adservices::measurement

