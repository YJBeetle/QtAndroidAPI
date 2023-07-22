#pragma once

#include "./ControlAction.def.hpp"

class JString;

namespace android::service::controls::actions
{
	class BooleanAction : public android::service::controls::actions::ControlAction
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BooleanAction(const char *className, const char *sig, Ts...agv) : android::service::controls::actions::ControlAction(className, sig, std::forward<Ts>(agv)...) {}
		BooleanAction(QAndroidJniObject obj) : android::service::controls::actions::ControlAction(obj) {}
		
		// Constructors
		BooleanAction(JString arg0, jboolean arg1);
		BooleanAction(JString arg0, jboolean arg1, JString arg2);
		
		// Methods
		jint getActionType() const;
		jboolean getNewState() const;
	};
} // namespace android::service::controls::actions

