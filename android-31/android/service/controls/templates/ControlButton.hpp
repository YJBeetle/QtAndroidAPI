#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::service::controls::templates
{
	class ControlButton : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ControlButton(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ControlButton(QAndroidJniObject obj);
		
		// Constructors
		ControlButton(jboolean arg0, JString arg1);
		
		// Methods
		jint describeContents() const;
		JString getActionDescription() const;
		jboolean isChecked() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::controls::templates

