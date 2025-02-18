#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class BroadcastInfoResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint RESPONSE_RESULT_CANCEL();
		static jint RESPONSE_RESULT_ERROR();
		static jint RESPONSE_RESULT_OK();
		
		// QJniObject forward
		template<typename ...Ts> explicit BroadcastInfoResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BroadcastInfoResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getRequestId() const;
		jint getResponseResult() const;
		jint getSequence() const;
		jint getType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

