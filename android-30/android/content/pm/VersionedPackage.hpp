#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::content::pm
{
	class VersionedPackage : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit VersionedPackage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VersionedPackage(QJniObject obj);
		
		// Constructors
		VersionedPackage(JString arg0, jint arg1);
		VersionedPackage(JString arg0, jlong arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jlong getLongVersionCode();
		JString getPackageName();
		jint getVersionCode();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

