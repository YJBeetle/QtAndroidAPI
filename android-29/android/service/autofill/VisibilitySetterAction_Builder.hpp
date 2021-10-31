#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::service::autofill
{
	class VisibilitySetterAction;
}

namespace android::service::autofill
{
	class VisibilitySetterAction_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		VisibilitySetterAction_Builder(QAndroidJniObject obj);
		// Constructors
		VisibilitySetterAction_Builder(jint arg0, jint arg1);
		VisibilitySetterAction_Builder() = default;
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setVisibility(jint arg0, jint arg1);
	};
} // namespace android::service::autofill

