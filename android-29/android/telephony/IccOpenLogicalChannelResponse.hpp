#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class IccOpenLogicalChannelResponse : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint INVALID_CHANNEL();
		static jint STATUS_MISSING_RESOURCE();
		static jint STATUS_NO_ERROR();
		static jint STATUS_NO_SUCH_ELEMENT();
		static jint STATUS_UNKNOWN_ERROR();
		
		// QJniObject forward
		template<typename ...Ts> explicit IccOpenLogicalChannelResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IccOpenLogicalChannelResponse(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getChannel();
		jbyteArray getSelectResponse();
		jint getStatus();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

