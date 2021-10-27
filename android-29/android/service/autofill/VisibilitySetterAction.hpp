#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::autofill
{
	class VisibilitySetterAction_Builder;
}

namespace android::service::autofill
{
	class VisibilitySetterAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		VisibilitySetterAction(QAndroidJniObject obj);
		// Constructors
		VisibilitySetterAction() = default;
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

