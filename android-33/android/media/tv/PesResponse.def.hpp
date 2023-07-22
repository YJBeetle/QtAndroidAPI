#pragma once

#include "./BroadcastInfoResponse.def.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::media::tv
{
	class PesResponse : public android::media::tv::BroadcastInfoResponse
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PesResponse(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoResponse(className, sig, std::forward<Ts>(agv)...) {}
		PesResponse(QAndroidJniObject obj) : android::media::tv::BroadcastInfoResponse(obj) {}
		
		// Constructors
		PesResponse(jint arg0, jint arg1, jint arg2, JString arg3);
		
		// Methods
		jint describeContents() const;
		JString getSharedFilterToken() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

