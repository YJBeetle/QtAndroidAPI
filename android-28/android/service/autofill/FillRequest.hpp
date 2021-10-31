#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::service::autofill
{
	class FillRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint FLAG_MANUAL_REQUEST();
		
		// QJniObject forward
		template<typename ...Ts> explicit FillRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FillRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::os::Bundle getClientState();
		__JniBaseClass getFillContexts();
		jint getFlags();
		jint getId();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

