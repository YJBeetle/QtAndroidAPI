#pragma once

#include "./ControlAction.hpp"

class JString;

namespace android::service::controls::actions
{
	class ModeAction : public android::service::controls::actions::ControlAction
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ModeAction(const char *className, const char *sig, Ts...agv) : android::service::controls::actions::ControlAction(className, sig, std::forward<Ts>(agv)...) {}
		ModeAction(QAndroidJniObject obj) : android::service::controls::actions::ControlAction(obj) {}
		
		// Constructors
		ModeAction(JString arg0, jint arg1);
		ModeAction(JString arg0, jint arg1, JString arg2);
		
		// Methods
		jint getActionType() const;
		jint getNewMode() const;
	};
} // namespace android::service::controls::actions

