#pragma once

#include "./BroadcastInfoResponse.def.hpp"

class JByteArray;
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class SharedMemory;
}

namespace android::media::tv
{
	class TableResponse : public android::media::tv::BroadcastInfoResponse
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TableResponse(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoResponse(className, sig, std::forward<Ts>(agv)...) {}
		TableResponse(QJniObject obj) : android::media::tv::BroadcastInfoResponse(obj) {}
		
		// Constructors
		TableResponse(jint arg0, jint arg1, jint arg2, android::net::Uri arg3, jint arg4, jint arg5);
		
		// Methods
		jint describeContents() const;
		jint getSize() const;
		JByteArray getTableByteArray() const;
		android::os::SharedMemory getTableSharedMemory() const;
		android::net::Uri getTableUri() const;
		jint getVersion() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

