#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::net
{
	class CaptivePortal : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CaptivePortal(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CaptivePortal(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		void ignoreNetwork();
		void reportCaptivePortalDismissed();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net

