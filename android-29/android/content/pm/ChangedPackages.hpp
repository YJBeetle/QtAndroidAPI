#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class ChangedPackages : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ChangedPackages(QAndroidJniObject obj);
		// Constructors
		ChangedPackages(jint &arg0, __JniBaseClass &arg1);
		ChangedPackages() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getPackageNames();
		jint getSequenceNumber();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

