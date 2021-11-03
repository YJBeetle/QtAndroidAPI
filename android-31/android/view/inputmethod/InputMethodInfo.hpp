#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::content::pm
{
	class ResolveInfo;
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
namespace android::view::inputmethod
{
	class InputMethodSubtype;
}
class JString;
class JObject;
class JString;

namespace android::view::inputmethod
{
	class InputMethodInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMethodInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodInfo(QAndroidJniObject obj);
		
		// Constructors
		InputMethodInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1);
		InputMethodInfo(JString arg0, JString arg1, JString arg2, JString arg3);
		
		// Methods
		jint describeContents();
		void dump(JObject arg0, JString arg1);
		jboolean equals(JObject arg0);
		android::content::ComponentName getComponent();
		jint getConfigChanges();
		JString getId();
		jint getIsDefaultResourceId();
		JString getPackageName();
		android::content::pm::ServiceInfo getServiceInfo();
		JString getServiceName();
		JString getSettingsActivity();
		android::view::inputmethod::InputMethodSubtype getSubtypeAt(jint arg0);
		jint getSubtypeCount();
		jint hashCode();
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0);
		JString loadLabel(android::content::pm::PackageManager arg0);
		jboolean shouldShowInInputMethodPicker();
		jboolean suppressesSpellChecker();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

