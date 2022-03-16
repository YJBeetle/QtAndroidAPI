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
		
		// QJniObject forward
		template<typename ...Ts> explicit VisibilitySetterAction_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VisibilitySetterAction_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VisibilitySetterAction_Builder(jint arg0, jint arg1);
		
		// Methods
		android::service::autofill::VisibilitySetterAction build() const;
		android::service::autofill::VisibilitySetterAction_Builder setVisibility(jint arg0, jint arg1) const;
	};
} // namespace android::service::autofill

