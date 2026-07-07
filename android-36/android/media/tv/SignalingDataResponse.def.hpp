#pragma once

#include "./BroadcastInfoResponse.def.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class SignalingDataResponse : public android::media::tv::BroadcastInfoResponse
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SignalingDataResponse(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoResponse(className, sig, std::forward<Ts>(agv)...) {}
		SignalingDataResponse(QJniObject obj) : android::media::tv::BroadcastInfoResponse(obj) {}
		
		// Constructors
		SignalingDataResponse(jint arg0, jint arg1, jint arg2, JObject arg3, JObject arg4);
		
		// Methods
		jint describeContents() const;
		JObject getSignalingDataInfoList() const;
		JObject getSignalingDataTypes() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

