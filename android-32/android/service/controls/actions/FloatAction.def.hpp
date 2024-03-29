#pragma once

#include "./ControlAction.def.hpp"

class JString;

namespace android::service::controls::actions
{
	class FloatAction : public android::service::controls::actions::ControlAction
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FloatAction(const char *className, const char *sig, Ts...agv) : android::service::controls::actions::ControlAction(className, sig, std::forward<Ts>(agv)...) {}
		FloatAction(QJniObject obj) : android::service::controls::actions::ControlAction(obj) {}
		
		// Constructors
		FloatAction(JString arg0, jfloat arg1);
		FloatAction(JString arg0, jfloat arg1, JString arg2);
		
		// Methods
		jint getActionType() const;
		jfloat getNewValue() const;
	};
} // namespace android::service::controls::actions

