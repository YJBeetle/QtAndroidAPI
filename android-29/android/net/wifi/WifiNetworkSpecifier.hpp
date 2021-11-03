#pragma once

#include "../../../JObject.hpp"
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
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit WifiNetworkSpecifier(const char *className, const char *sig, Ts...agv) : android::net::NetworkSpecifier(className, sig, std::forward<Ts>(agv)...) {}
		WifiNetworkSpecifier(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi

