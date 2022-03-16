#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class Telephony_Mms_Part : public JObject
	{
	public:
		// Fields
		static JString CHARSET();
		static JString CONTENT_DISPOSITION();
		static JString CONTENT_ID();
		static JString CONTENT_LOCATION();
		static JString CONTENT_TYPE();
		static JString CT_START();
		static JString CT_TYPE();
		static JString FILENAME();
		static JString MSG_ID();
		static JString NAME();
		static JString SEQ();
		static JString TEXT();
		static JString _DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_Mms_Part(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms_Part(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

