#pragma once

#include "./BroadcastInfoResponse.def.hpp"

class JIntArray;
class JArray;
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class ParcelFileDescriptor;
}
class JString;

namespace android::media::tv
{
	class DsmccResponse : public android::media::tv::BroadcastInfoResponse
	{
	public:
		// Fields
		static JString BIOP_MESSAGE_TYPE_DIRECTORY();
		static JString BIOP_MESSAGE_TYPE_FILE();
		static JString BIOP_MESSAGE_TYPE_SERVICE_GATEWAY();
		static JString BIOP_MESSAGE_TYPE_STREAM();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit DsmccResponse(const char *className, const char *sig, Ts...agv) : android::media::tv::BroadcastInfoResponse(className, sig, std::forward<Ts>(agv)...) {}
		DsmccResponse(QJniObject obj) : android::media::tv::BroadcastInfoResponse(obj) {}
		
		// Constructors
		DsmccResponse(jint arg0, jint arg1, jint arg2, android::os::ParcelFileDescriptor arg3);
		DsmccResponse(jint arg0, jint arg1, jint arg2, JIntArray arg3, JArray arg4);
		DsmccResponse(jint arg0, jint arg1, jint arg2, jboolean arg3, JObject arg4);
		
		// Methods
		jint describeContents() const;
		JString getBiopMessageType() const;
		JObject getChildList() const;
		android::os::ParcelFileDescriptor getFile() const;
		JIntArray getStreamEventIds() const;
		JArray getStreamEventNames() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::media::tv

