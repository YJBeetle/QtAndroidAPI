#pragma once

#include "./BroadcastInfoRequest.def.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::media::tv
{
	class TableRequest : public android::media::tv::BroadcastInfoRequest
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TABLE_NAME_PAT();
		static jint TABLE_NAME_PMT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TableRequest(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoRequest(className, sig, std::forward<Ts>(agv)...) {}
		TableRequest(QAndroidJniObject obj) : android::media::tv::BroadcastInfoRequest(obj) {}
		
		// Constructors
		TableRequest(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		jint describeContents() const;
		jint getTableId() const;
		jint getTableName() const;
		jint getVersion() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

