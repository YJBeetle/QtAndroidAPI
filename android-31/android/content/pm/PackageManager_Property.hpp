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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PackageManager_Property(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager_Property(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean getBoolean() const;
		JString getClassName() const;
		jfloat getFloat() const;
		jint getInteger() const;
		JString getName() const;
		JString getPackageName() const;
		jint getResourceId() const;
		JString getString() const;
		jboolean isBoolean() const;
		jboolean isFloat() const;
		jboolean isInteger() const;
		jboolean isResourceId() const;
		jboolean isString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

