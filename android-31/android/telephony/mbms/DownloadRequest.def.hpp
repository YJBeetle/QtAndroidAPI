#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony::mbms
{
	class DownloadRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DownloadRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getMaxAppIntentSize();
		static jint getMaxDestinationUriSize();
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::net::Uri getDestinationUri() const;
		JString getFileServiceId() const;
		android::net::Uri getSourceUri() const;
		jint getSubscriptionId() const;
		jint hashCode() const;
		JByteArray toByteArray() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony::mbms

