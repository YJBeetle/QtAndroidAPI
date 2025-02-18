#pragma once

#include "./BroadcastInfoResponse.def.hpp"

namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv
{
	class TimelineResponse : public android::media::tv::BroadcastInfoResponse
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TimelineResponse(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoResponse(className, sig, std::forward<Ts>(agv)...) {}
		TimelineResponse(QJniObject obj) : android::media::tv::BroadcastInfoResponse(obj) {}
		
		// Constructors
		TimelineResponse(jint arg0, jint arg1, jint arg2, JString arg3, jint arg4, jint arg5, jlong arg6, jlong arg7);
		
		// Methods
		jint describeContents() const;
		android::net::Uri getSelector() const;
		jlong getTicks() const;
		jint getUnitsPerSecond() const;
		jint getUnitsPerTick() const;
		jlong getWallClock() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

