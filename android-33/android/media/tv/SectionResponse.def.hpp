#pragma once

#include "./BroadcastInfoResponse.def.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class SectionResponse : public android::media::tv::BroadcastInfoResponse
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SectionResponse(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoResponse(className, sig, std::forward<Ts>(agv)...) {}
		SectionResponse(QJniObject obj) : android::media::tv::BroadcastInfoResponse(obj) {}
		
		// Constructors
		SectionResponse(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5);
		
		// Methods
		jint describeContents() const;
		android::os::Bundle getSessionData() const;
		jint getSessionId() const;
		jint getVersion() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

