#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content::pm
{
	class VersionedPackage;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class SharedLibraryInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint TYPE_BUILTIN();
		static jint TYPE_DYNAMIC();
		static jint TYPE_STATIC();
		static jint VERSION_UNDEFINED();
		
		SharedLibraryInfo(QAndroidJniObject obj);
		// Constructors
		SharedLibraryInfo() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getDeclaringPackage();
		QAndroidJniObject getDependentPackages();
		jlong getLongVersion();
		jstring getName();
		jint getType();
		jint getVersion();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

