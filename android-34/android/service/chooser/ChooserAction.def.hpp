#pragma once

#include "../../../JObject.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::graphics::drawable
{
	class Icon;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::service::chooser
{
	class ChooserAction : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ChooserAction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ChooserAction(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::app::PendingIntent getAction() const;
		android::graphics::drawable::Icon getIcon() const;
		JString getLabel() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::chooser

