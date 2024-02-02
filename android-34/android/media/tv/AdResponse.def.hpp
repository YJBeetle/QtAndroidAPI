#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class AdResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint RESPONSE_TYPE_BUFFERING();
		static jint RESPONSE_TYPE_ERROR();
		static jint RESPONSE_TYPE_FINISHED();
		static jint RESPONSE_TYPE_PLAYING();
		static jint RESPONSE_TYPE_STOPPED();
		
		// QJniObject forward
		template<typename ...Ts> explicit AdResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AdResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AdResponse(jint arg0, jint arg1, jlong arg2);
		
		// Methods
		jint describeContents() const;
		jlong getElapsedTimeMillis() const;
		jint getId() const;
		jint getResponseType() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

