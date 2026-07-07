#pragma once

#include "./ControlAction.def.hpp"

class JString;

namespace android::service::controls::actions
{
	class CommandAction : public android::service::controls::actions::ControlAction
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CommandAction(const char *className, const char *sig, Ts...agv) : android::service::controls::actions::ControlAction(className, sig, std::forward<Ts>(agv)...) {}
		CommandAction(QJniObject obj) : android::service::controls::actions::ControlAction(obj) {}
		
		// Constructors
		CommandAction(JString arg0);
		CommandAction(JString arg0, JString arg1);
		
		// Methods
		jint getActionType() const;
	};
} // namespace android::service::controls::actions

