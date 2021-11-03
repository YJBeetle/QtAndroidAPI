#pragma once

#include "../../../JObject.hpp"

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
	class ChooserTarget : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ChooserTarget(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChooserTarget(QAndroidJniObject obj);
		
		// Constructors
		ChooserTarget(jstring arg0, android::graphics::drawable::Icon arg1, jfloat arg2, android::content::ComponentName arg3, android::os::Bundle arg4);
		
		// Methods
		jint describeContents();
		android::content::ComponentName getComponentName();
		android::graphics::drawable::Icon getIcon();
		android::os::Bundle getIntentExtras();
		jfloat getScore();
		jstring getTitle();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::chooser

