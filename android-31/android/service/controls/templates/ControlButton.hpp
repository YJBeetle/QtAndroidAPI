#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::controls::templates
{
	class ControlButton : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ControlButton(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ControlButton(QJniObject obj);
		
		// Constructors
		ControlButton(jboolean arg0, jstring arg1);
		
		// Methods
		jint describeContents();
		jstring getActionDescription();
		jboolean isChecked();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::controls::templates

