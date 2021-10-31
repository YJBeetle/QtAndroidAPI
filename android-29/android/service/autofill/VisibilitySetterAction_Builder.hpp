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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisibilitySetterAction_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VisibilitySetterAction_Builder(QAndroidJniObject obj);
		
		// Constructors
		VisibilitySetterAction_Builder(jint arg0, jint arg1);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setVisibility(jint arg0, jint arg1);
	};
} // namespace android::service::autofill

