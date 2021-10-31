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
		static __JniBaseClass CREATOR();
		static jint TYPE_BUILTIN();
		static jint TYPE_DYNAMIC();
		static jint TYPE_STATIC();
		static jint VERSION_UNDEFINED();
		
		// QJniObject forward
		template<typename ...Ts> explicit SharedLibraryInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SharedLibraryInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::content::pm::VersionedPackage getDeclaringPackage();
		__JniBaseClass getDependentPackages();
		jlong getLongVersion();
		jstring getName();
		jint getType();
		jint getVersion();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

