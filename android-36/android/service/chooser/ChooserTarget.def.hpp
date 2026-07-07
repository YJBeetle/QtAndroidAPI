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
class JString;
class JString;

namespace android::service::chooser
{
	class ChooserTarget : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ChooserTarget(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChooserTarget(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ChooserTarget(JString arg0, android::graphics::drawable::Icon arg1, jfloat arg2, android::content::ComponentName arg3, android::os::Bundle arg4);
		
		// Methods
		jint describeContents() const;
		android::content::ComponentName getComponentName() const;
		android::graphics::drawable::Icon getIcon() const;
		android::os::Bundle getIntentExtras() const;
		jfloat getScore() const;
		JString getTitle() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::chooser

