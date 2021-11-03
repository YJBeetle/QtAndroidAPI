#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::content::pm
{
	class ServiceInfo;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::textservice
{
	class SpellCheckerSubtype;
}
class JString;
class JString;

namespace android::view::textservice
{
	class SpellCheckerInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SpellCheckerInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpellCheckerInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::content::ComponentName getComponent() const;
		JString getId() const;
		JString getPackageName() const;
		android::content::pm::ServiceInfo getServiceInfo() const;
		JString getSettingsActivity() const;
		android::view::textservice::SpellCheckerSubtype getSubtypeAt(jint arg0) const;
		jint getSubtypeCount() const;
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0) const;
		JString loadLabel(android::content::pm::PackageManager arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::textservice

