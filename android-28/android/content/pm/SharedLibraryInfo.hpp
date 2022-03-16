#pragma once

#include "../../../JObject.hpp"

namespace android::content::pm
{
	class VersionedPackage;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class SharedLibraryInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint TYPE_BUILTIN();
		static jint TYPE_DYNAMIC();
		static jint TYPE_STATIC();
		static jint VERSION_UNDEFINED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SharedLibraryInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SharedLibraryInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::content::pm::VersionedPackage getDeclaringPackage() const;
		JObject getDependentPackages() const;
		jlong getLongVersion() const;
		JString getName() const;
		jint getType() const;
		jint getVersion() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

