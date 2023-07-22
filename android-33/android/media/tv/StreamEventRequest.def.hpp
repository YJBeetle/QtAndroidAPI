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
class JString;

namespace android::media::tv
{
	class StreamEventRequest : public android::media::tv::BroadcastInfoRequest
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamEventRequest(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoRequest(className, sig, std::forward<Ts>(agv)...) {}
		StreamEventRequest(QJniObject obj) : android::media::tv::BroadcastInfoRequest(obj) {}
		
		// Constructors
		StreamEventRequest(jint arg0, jint arg1, android::net::Uri arg2, JString arg3);
		
		// Methods
		jint describeContents() const;
		JString getEventName() const;
		android::net::Uri getTargetUri() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

