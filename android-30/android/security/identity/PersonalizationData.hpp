#pragma once

#include "../../../JObject.hpp"


namespace android::security::identity
{
	class PersonalizationData : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PersonalizationData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PersonalizationData(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::security::identity

