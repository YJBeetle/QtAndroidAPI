#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./ControlAction.hpp"


namespace android::service::controls::actions
{
	class FloatAction : public android::service::controls::actions::ControlAction
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FloatAction(const char *className, const char *sig, Ts...agv) : android::service::controls::actions::ControlAction(className, sig, std::forward<Ts>(agv)...) {}
		FloatAction(QJniObject obj);
		
		// Constructors
		FloatAction(jstring arg0, jfloat arg1);
		FloatAction(jstring arg0, jfloat arg1, jstring arg2);
		
		// Methods
		jint getActionType();
		jfloat getNewValue();
	};
} // namespace android::service::controls::actions

