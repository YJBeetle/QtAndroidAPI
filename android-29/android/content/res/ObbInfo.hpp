#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::res
{
	class ObbInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint OBB_OVERLAY();
		jstring filename();
		jint flags();
		jstring packageName();
		jint version();
		
		ObbInfo(QAndroidJniObject obj);
		// Constructors
		ObbInfo() = default;
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::res

