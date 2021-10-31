#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class Telephony_Mms_Intents : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_CHANGED_ACTION();
		static jstring DELETED_CONTENTS();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_Mms_Intents(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_Mms_Intents(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

