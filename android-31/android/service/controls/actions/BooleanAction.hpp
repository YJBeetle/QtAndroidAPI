#pragma once

#include "../../../../JObject.hpp"
#include "./ControlAction.hpp"


namespace android::service::controls::actions
{
	class BooleanAction : public android::service::controls::actions::ControlAction
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BooleanAction(const char *className, const char *sig, Ts...agv) : android::service::controls::actions::ControlAction(className, sig, std::forward<Ts>(agv)...) {}
		BooleanAction(QJniObject obj);
		
		// Constructors
		BooleanAction(jstring arg0, jboolean arg1);
		BooleanAction(jstring arg0, jboolean arg1, jstring arg2);
		
		// Methods
		jint getActionType();
		jboolean getNewState();
	};
} // namespace android::service::controls::actions

