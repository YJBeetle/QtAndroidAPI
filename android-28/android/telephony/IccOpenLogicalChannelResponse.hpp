#pragma once

#include "../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::telephony
{
	class IccOpenLogicalChannelResponse : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint INVALID_CHANNEL();
		static jint STATUS_MISSING_RESOURCE();
		static jint STATUS_NO_ERROR();
		static jint STATUS_NO_SUCH_ELEMENT();
		static jint STATUS_UNKNOWN_ERROR();
		
		// QJniObject forward
		template<typename ...Ts> explicit IccOpenLogicalChannelResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IccOpenLogicalChannelResponse(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getChannel();
		JByteArray getSelectResponse();
		jint getStatus();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

