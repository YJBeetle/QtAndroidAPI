#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::controls::templates
{
	class ControlButton : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ControlButton(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ControlButton(QAndroidJniObject obj);
		
		// Constructors
		ControlButton(jboolean arg0, jstring arg1);
		
		// Methods
		jint describeContents();
		jstring getActionDescription();
		jboolean isChecked();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::controls::templates

