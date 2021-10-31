#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::view::inputmethod
{
	class InputMethodInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit InputMethodInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodInfo(QJniObject obj);
		
		// Constructors
		InputMethodInfo(android::content::Context arg0, android::content::pm::ResolveInfo arg1);
		InputMethodInfo(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		
		// Methods
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		jboolean equals(jobject arg0);
		android::content::ComponentName getComponent();
		jint getConfigChanges();
		jstring getId();
		jint getIsDefaultResourceId();
		jstring getPackageName();
		android::content::pm::ServiceInfo getServiceInfo();
		jstring getServiceName();
		jstring getSettingsActivity();
		android::view::inputmethod::InputMethodSubtype getSubtypeAt(jint arg0);
		jint getSubtypeCount();
		jint hashCode();
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		jboolean shouldShowInInputMethodPicker();
		jboolean suppressesSpellChecker();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

