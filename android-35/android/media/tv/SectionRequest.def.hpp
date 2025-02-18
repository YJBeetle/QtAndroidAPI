#pragma once

#include "./BroadcastInfoRequest.def.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class SectionRequest : public android::media::tv::BroadcastInfoRequest
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SectionRequest(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoRequest(className, sig, std::forward<Ts>(agv)...) {}
		SectionRequest(QJniObject obj) : android::media::tv::BroadcastInfoRequest(obj) {}
		
		// Constructors
		SectionRequest(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		jint describeContents() const;
		jint getTableId() const;
		jint getTsPid() const;
		jint getVersion() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

