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
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Characteristics(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Characteristics(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getMaxMatchFilterLength();
		jint getMaxServiceNameLength();
		jint getMaxServiceSpecificInfoLength();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::net::wifi::aware

