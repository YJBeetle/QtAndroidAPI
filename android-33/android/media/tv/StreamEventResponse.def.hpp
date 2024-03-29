#pragma once

#include "./BroadcastInfoResponse.def.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class StreamEventResponse : public android::media::tv::BroadcastInfoResponse
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit StreamEventResponse(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoResponse(className, sig, std::forward<Ts>(agv)...) {}
		StreamEventResponse(QJniObject obj) : android::media::tv::BroadcastInfoResponse(obj) {}
		
		// Constructors
		StreamEventResponse(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4, JByteArray arg5);
		
		// Methods
		jint describeContents() const;
		JByteArray getData() const;
		jint getEventId() const;
		jlong getNptMillis() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

