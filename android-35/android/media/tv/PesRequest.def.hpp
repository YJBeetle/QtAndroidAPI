#pragma once

#include "./BroadcastInfoRequest.def.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class PesRequest : public android::media::tv::BroadcastInfoRequest
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PesRequest(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoRequest(className, sig, std::forward<Ts>(agv)...) {}
		PesRequest(QJniObject obj) : android::media::tv::BroadcastInfoRequest(obj) {}
		
		// Constructors
		PesRequest(jint arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		jint describeContents() const;
		jint getStreamId() const;
		jint getTsPid() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

