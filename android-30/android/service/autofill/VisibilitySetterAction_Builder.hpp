#pragma once

#include "../../../JObject.hpp"

namespace android::service::autofill
{
	class VisibilitySetterAction;
}

namespace android::service::autofill
{
	class VisibilitySetterAction_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VisibilitySetterAction_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VisibilitySetterAction_Builder(QAndroidJniObject obj);
		
		// Constructors
		VisibilitySetterAction_Builder(jint arg0, jint arg1);
		
		// Methods
		android::service::autofill::VisibilitySetterAction build();
		android::service::autofill::VisibilitySetterAction_Builder setVisibility(jint arg0, jint arg1);
	};
} // namespace android::service::autofill

