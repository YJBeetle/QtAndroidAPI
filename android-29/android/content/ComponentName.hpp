#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::os
{
	class Parcel;
}

namespace android::content
{
	class ComponentName : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ComponentName(QAndroidJniObject obj);
		// Constructors
		ComponentName(android::os::Parcel &arg0);
		ComponentName(android::content::Context &arg0, jclass &arg1);
		ComponentName(android::content::Context &arg0, jstring &arg1);
		ComponentName(android::content::Context &arg0, const QString &arg1);
		ComponentName(jstring &arg0, jstring &arg1);
		ComponentName(const QString &arg0, const QString &arg1);
		ComponentName() = default;
		
		// Methods
		static QAndroidJniObject createRelative(android::content::Context arg0, jstring arg1);
		static QAndroidJniObject createRelative(android::content::Context arg0, const QString &arg1);
		static QAndroidJniObject createRelative(jstring arg0, jstring arg1);
		static QAndroidJniObject createRelative(const QString &arg0, const QString &arg1);
		static QAndroidJniObject readFromParcel(android::os::Parcel arg0);
		static QAndroidJniObject unflattenFromString(jstring arg0);
		static QAndroidJniObject unflattenFromString(const QString &arg0);
		static void writeToParcel(android::content::ComponentName arg0, android::os::Parcel arg1);
		QAndroidJniObject clone();
		jint compareTo(android::content::ComponentName arg0);
		jint compareTo(jobject arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring flattenToShortString();
		jstring flattenToString();
		jstring getClassName();
		jstring getPackageName();
		jstring getShortClassName();
		jint hashCode();
		jstring toShortString();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

