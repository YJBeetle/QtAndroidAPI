#pragma once

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
class JString;
class JString;

namespace android::content::pm
{
	class LabeledIntent : public android::content::Intent
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LabeledIntent(const char *className, const char *sig, Ts...agv) : android::content::Intent(className, sig, std::forward<Ts>(agv)...) {}
		LabeledIntent(QAndroidJniObject obj);
		
		// Constructors
		LabeledIntent(JString arg0, jint arg1, jint arg2);
		LabeledIntent(JString arg0, JString arg1, jint arg2);
		LabeledIntent(android::content::Intent arg0, JString arg1, jint arg2, jint arg3);
		LabeledIntent(android::content::Intent arg0, JString arg1, JString arg2, jint arg3);
		
		// Methods
		jint getIconResource();
		jint getLabelResource();
		JString getNonLocalizedLabel();
		JString getSourcePackage();
		android::graphics::drawable::Drawable loadIcon(android::content::pm::PackageManager arg0);
		JString loadLabel(android::content::pm::PackageManager arg0);
		void readFromParcel(android::os::Parcel arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

