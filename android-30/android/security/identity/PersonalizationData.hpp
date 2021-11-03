#pragma once

#include "../../../JObject.hpp"


namespace android::security::identity
{
	class PersonalizationData : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PersonalizationData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PersonalizationData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::security::identity

