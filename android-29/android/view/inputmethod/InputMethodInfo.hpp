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
		static QAndroidJniObject CREATOR();
		
		InputMethodInfo(QAndroidJniObject obj);
		// Constructors
		InputMethodInfo(android::content::Context &arg0, android::content::pm::ResolveInfo &arg1);
		InputMethodInfo(jstring &arg0, jstring &arg1, jstring &arg2, jstring &arg3);
		InputMethodInfo(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		InputMethodInfo() = default;
		
		// Methods
		jint describeContents();
		void dump(__JniBaseClass arg0, jstring arg1);
		void dump(__JniBaseClass arg0, const QString &arg1);
		jboolean equals(jobject arg0);
		QAndroidJniObject getComponent();
		jstring getId();
		jint getIsDefaultResourceId();
		jstring getPackageName();
		QAndroidJniObject getServiceInfo();
		jstring getServiceName();
		jstring getSettingsActivity();
		QAndroidJniObject getSubtypeAt(jint arg0);
		jint getSubtypeCount();
		jint hashCode();
		QAndroidJniObject loadIcon(android::content::pm::PackageManager arg0);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

