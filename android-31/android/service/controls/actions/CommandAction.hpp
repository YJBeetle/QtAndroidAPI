#pragma once

#include "./ControlAction.hpp"

class JString;

namespace android::service::controls::actions
{
	class CommandAction : public android::service::controls::actions::ControlAction
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CommandAction(const char *className, const char *sig, Ts...agv) : android::service::controls::actions::ControlAction(className, sig, std::forward<Ts>(agv)...) {}
		CommandAction(QAndroidJniObject obj);
		
		// Constructors
		CommandAction(JString arg0);
		CommandAction(JString arg0, JString arg1);
		
		// Methods
		jint getActionType();
	};
} // namespace android::service::controls::actions

