#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../NetworkSpecifier.hpp"

namespace android::net::wifi
{
	class WifiConfiguration;
}
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PatternMatcher;
}
namespace android::util
{
	class Pair;
}

namespace android::net::wifi
{
	class WifiNetworkSpecifier : public android::net::NetworkSpecifier
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		WifiNetworkSpecifier(QAndroidJniObject obj);
		// Constructors
		WifiNetworkSpecifier() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

