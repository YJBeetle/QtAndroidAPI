#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::media
{
	class RoutingSessionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RoutingSessionInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RoutingSessionInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getClientPackageName();
		android::os::Bundle getControlHints();
		__JniBaseClass getDeselectableRoutes();
		jstring getId();
		jstring getName();
		__JniBaseClass getSelectableRoutes();
		__JniBaseClass getSelectedRoutes();
		__JniBaseClass getTransferableRoutes();
		jint getVolume();
		jint getVolumeHandling();
		jint getVolumeMax();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media

