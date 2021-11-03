#pragma once

#include "../../../../JObject.hpp"


namespace android::service::controls::actions
{
	class ControlAction : public JObject
	{
	public:
		// Fields
		static jint RESPONSE_CHALLENGE_ACK();
		static jint RESPONSE_CHALLENGE_PASSPHRASE();
		static jint RESPONSE_CHALLENGE_PIN();
		static jint RESPONSE_FAIL();
		static jint RESPONSE_OK();
		static jint RESPONSE_UNKNOWN();
		static jint TYPE_BOOLEAN();
		static jint TYPE_COMMAND();
		static jint TYPE_ERROR();
		static jint TYPE_FLOAT();
		static jint TYPE_MODE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ControlAction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ControlAction(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::service::controls::actions::ControlAction getErrorAction();
		static jboolean isValidResponse(jint arg0);
		jint getActionType();
		jstring getChallengeValue();
		jstring getTemplateId();
	};
} // namespace android::service::controls::actions

