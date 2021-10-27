#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::net::wifi::aware
{
	class Characteristics : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Characteristics(QAndroidJniObject obj);
		// Constructors
		Characteristics() = default;
		
		// Methods
		jint describeContents();
		jint getMaxMatchFilterLength();
		jint getMaxServiceNameLength();
		jint getMaxServiceSpecificInfoLength();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::aware

