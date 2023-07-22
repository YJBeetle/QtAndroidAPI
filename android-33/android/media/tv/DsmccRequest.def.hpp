#pragma once

#include "./BroadcastInfoRequest.def.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class DsmccRequest : public android::media::tv::BroadcastInfoRequest
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DsmccRequest(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoRequest(className, sig, std::forward<Ts>(agv)...) {}
		DsmccRequest(QAndroidJniObject obj) : android::media::tv::BroadcastInfoRequest(obj) {}
		
		// Constructors
		DsmccRequest(jint arg0, jint arg1, android::net::Uri arg2);
		
		// Methods
		jint describeContents() const;
		android::net::Uri getUri() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

