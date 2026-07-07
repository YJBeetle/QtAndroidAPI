#pragma once

#include "./BroadcastInfoRequest.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv
{
	class TimelineRequest : public android::media::tv::BroadcastInfoRequest
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TimelineRequest(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoRequest(className, sig, std::forward<Ts>(agv)...) {}
		TimelineRequest(QJniObject obj) : android::media::tv::BroadcastInfoRequest(obj) {}
		
		// Constructors
		TimelineRequest(jint arg0, jint arg1, jint arg2);
		TimelineRequest(jint arg0, jint arg1, jint arg2, JString arg3);
		
		// Methods
		jint describeContents() const;
		jint getIntervalMillis() const;
		JString getSelector() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

