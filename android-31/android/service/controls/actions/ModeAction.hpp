#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "./ControlAction.hpp"


namespace android::service::controls::actions
{
	class ModeAction : public android::service::controls::actions::ControlAction
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ModeAction(const char *className, const char *sig, Ts...agv) : android::service::controls::actions::ControlAction(className, sig, std::forward<Ts>(agv)...) {}
		ModeAction(QJniObject obj);
		
		// Constructors
		ModeAction(jstring arg0, jint arg1);
		ModeAction(jstring arg0, jint arg1, jstring arg2);
		
		// Methods
		jint getActionType();
		jint getNewMode();
	};
} // namespace android::service::controls::actions

