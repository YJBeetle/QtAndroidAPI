#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::companion
{
	class WifiDeviceFilter;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::companion
{
	class WifiDeviceFilter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiDeviceFilter_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WifiDeviceFilter_Builder(QAndroidJniObject obj);
		
		// Constructors
		WifiDeviceFilter_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setNamePattern(java::util::regex::Pattern arg0);
	};
} // namespace android::companion

