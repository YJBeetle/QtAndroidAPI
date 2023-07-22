#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class BroadcastInfoRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint REQUEST_OPTION_AUTO_UPDATE();
		static jint REQUEST_OPTION_REPEAT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BroadcastInfoRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BroadcastInfoRequest(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getOption() const;
		jint getRequestId() const;
		jint getType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

