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
namespace android::content
{
	class Intent;
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
		static JString ACTION_STYLUS_HANDWRITING_SETTINGS();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InputMethodInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InputMethodInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1);
		InputMethodInfo(JString arg0, JString arg1, JString arg2, JString arg3);
		
		// Methods
		android::content::Intent createStylusHandwritingSettingsActivityIntent() const;
		jint describeContents() const;
		void dump(JObject arg0, JString arg1) const;
		jboolean equals(JObject arg0) const;
		android::content::ComponentName getComponent() const;
		jint getConfigChanges() const;
		JString getId() const;
		jint getIsDefaultResourceId() const;
		JString getPackageName() const;
		android::content::pm::ServiceInfo getServiceInfo() const;
		JString getServiceName() const;
		JString getSettingsActivity() const;
		android::view::inputmethod::InputMethodSubtype getSubtypeAt(jint arg0) const;
		jint getSubtypeCount() const;
		jint hashCode() const;
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0) const;
		JString loadLabel(android::content::pm::PackageManager arg0) const;
		jboolean shouldShowInInputMethodPicker() const;
		jboolean supportsStylusHandwriting() const;
		jboolean suppressesSpellChecker() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

