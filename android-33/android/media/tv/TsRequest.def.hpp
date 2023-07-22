#pragma once

#include "./BroadcastInfoRequest.def.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class TsRequest : public android::media::tv::BroadcastInfoRequest
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TsRequest(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoRequest(className, sig, std::forward<Ts>(agv)...) {}
		TsRequest(QAndroidJniObject obj) : android::media::tv::BroadcastInfoRequest(obj) {}
		
		// Constructors
		TsRequest(jint arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents() const;
		jint getTsPid() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

