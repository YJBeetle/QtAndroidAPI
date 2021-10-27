#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Intent.hpp"

namespace android::content
{
	class Intent;
}
namespace android::content::pm
{
	class PackageManager;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class LabeledIntent : public android::content::Intent
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		LabeledIntent(QAndroidJniObject obj);
		// Constructors
		LabeledIntent(jstring &arg0, jint &arg1, jint &arg2);
		LabeledIntent(const QString &arg0, jint &arg1, jint &arg2);
		LabeledIntent(jstring &arg0, jstring &arg1, jint &arg2);
		LabeledIntent(const QString &arg0, const QString &arg1, jint &arg2);
		LabeledIntent(android::content::Intent &arg0, jstring &arg1, jint &arg2, jint &arg3);
		LabeledIntent(android::content::Intent &arg0, const QString &arg1, jint &arg2, jint &arg3);
		LabeledIntent(android::content::Intent &arg0, jstring &arg1, jstring &arg2, jint &arg3);
		LabeledIntent(android::content::Intent &arg0, const QString &arg1, const QString &arg2, jint &arg3);
		LabeledIntent() = default;
		
		// Methods
		jint getIconResource();
		jint getLabelResource();
		jstring getNonLocalizedLabel();
		jstring getSourcePackage();
		QAndroidJniObject loadIcon(android::content::pm::PackageManager arg0);
		jstring loadLabel(android::content::pm::PackageManager arg0);
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

