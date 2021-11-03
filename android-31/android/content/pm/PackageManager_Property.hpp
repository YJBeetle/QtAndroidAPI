#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::pm
{
	class PackageManager_Property : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageManager_Property(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager_Property(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean getBoolean();
		JString getClassName();
		jfloat getFloat();
		jint getInteger();
		JString getName();
		JString getPackageName();
		jint getResourceId();
		JString getString();
		jboolean isBoolean();
		jboolean isFloat();
		jboolean isInteger();
		jboolean isResourceId();
		jboolean isString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

