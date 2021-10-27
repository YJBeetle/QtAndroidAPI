#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class ModuleInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ModuleInfo(QAndroidJniObject obj);
		// Constructors
		ModuleInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getName();
		jstring getPackageName();
		jint hashCode();
		jboolean isHidden();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

