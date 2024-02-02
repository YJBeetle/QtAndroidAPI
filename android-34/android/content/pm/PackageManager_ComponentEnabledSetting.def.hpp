#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class PackageManager_ComponentEnabledSetting : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit PackageManager_ComponentEnabledSetting(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PackageManager_ComponentEnabledSetting(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PackageManager_ComponentEnabledSetting(android::content::ComponentName arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents() const;
		android::content::ComponentName getComponentName() const;
		jint getEnabledFlags() const;
		jint getEnabledState() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::pm

