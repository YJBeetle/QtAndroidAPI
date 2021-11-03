#pragma once

#include "../../../../JObject.hpp"

class JString;

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
		
		// QJniObject forward
		template<typename ...Ts> explicit ControlAction(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ControlAction(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::service::controls::actions::ControlAction getErrorAction();
		static jboolean isValidResponse(jint arg0);
		jint getActionType() const;
		JString getChallengeValue() const;
		JString getTemplateId() const;
	};
} // namespace android::service::controls::actions

