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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DownloadRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DownloadRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getMaxAppIntentSize();
		static jint getMaxDestinationUriSize();
		jint describeContents();
		jboolean equals(JObject arg0);
		android::net::Uri getDestinationUri();
		JString getFileServiceId();
		android::net::Uri getSourceUri();
		jint getSubscriptionId();
		jint hashCode();
		JByteArray toByteArray();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::mbms

