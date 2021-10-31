#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class ComponentName;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::service::chooser
{
	class ChooserTarget : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		ChooserTarget(QAndroidJniObject obj);
		// Constructors
		ChooserTarget(jstring arg0, android::graphics::drawable::Icon arg1, jfloat arg2, android::content::ComponentName arg3, android::os::Bundle arg4);
		ChooserTarget() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getComponentName();
		QAndroidJniObject getIcon();
		QAndroidJniObject getIntentExtras();
		jfloat getScore();
		jstring getTitle();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::chooser

