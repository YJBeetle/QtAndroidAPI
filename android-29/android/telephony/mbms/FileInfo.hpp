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

namespace android::telephony::mbms
{
	class FileInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit FileInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getMimeType();
		android::net::Uri getUri();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony::mbms

