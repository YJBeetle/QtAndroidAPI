#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
class JString;

namespace android::media::tv
{
	class AdRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint REQUEST_TYPE_START();
		static jint REQUEST_TYPE_STOP();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdRequest(jint arg0, jint arg1, android::os::ParcelFileDescriptor arg2, jlong arg3, jlong arg4, jlong arg5, JString arg6, android::os::Bundle arg7);
		
		// Methods
		jint describeContents() const;
		jlong getEchoIntervalMillis() const;
		android::os::ParcelFileDescriptor getFileDescriptor() const;
		jint getId() const;
		JString getMediaFileType() const;
		android::os::Bundle getMetadata() const;
		jint getRequestType() const;
		jlong getStartTimeMillis() const;
		jlong getStopTimeMillis() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

