#pragma once

#include "../../JObject.hpp"


namespace android::telecom
{
	class Conferenceable : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Conferenceable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Conferenceable(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telecom

