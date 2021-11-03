#pragma once

#include "../../JObject.hpp"

namespace android::provider
{
	class Telephony : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

