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
		
		WifiDeviceFilter_Builder(QAndroidJniObject obj);
		// Constructors
		WifiDeviceFilter_Builder();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setNamePattern(java::util::regex::Pattern arg0);
	};
} // namespace android::companion

