#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./PeerHandle.hpp"

namespace android::net::wifi::aware
{
	class PeerHandle;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::aware
{
	class ParcelablePeerHandle : public android::net::wifi::aware::PeerHandle
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ParcelablePeerHandle(QAndroidJniObject obj);
		// Constructors
		ParcelablePeerHandle(android::net::wifi::aware::PeerHandle &arg0);
		ParcelablePeerHandle() = default;
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::aware

