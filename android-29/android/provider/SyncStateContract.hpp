#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class SyncStateContract : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SyncStateContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncStateContract(QAndroidJniObject obj);
		
		// Constructors
		SyncStateContract();
		
		// Methods
	};
} // namespace android::provider

