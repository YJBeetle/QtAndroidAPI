#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class Telephony_Mms_Addr : public JObject
	{
	public:
		// Fields
		static JString ADDRESS();
		static JString CHARSET();
		static JString CONTACT_ID();
		static JString MSG_ID();
		static JString TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Mms_Addr(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms_Addr(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

