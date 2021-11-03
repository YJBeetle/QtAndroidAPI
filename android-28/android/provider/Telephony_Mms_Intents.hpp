#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class Telephony_Mms_Intents : public JObject
	{
	public:
		// Fields
		static JString CONTENT_CHANGED_ACTION();
		static JString DELETED_CONTENTS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_Mms_Intents(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms_Intents(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

