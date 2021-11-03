#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class SyncStateContract : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncStateContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SyncStateContract(QJniObject obj);
		
		// Constructors
		SyncStateContract();
		
		// Methods
	};
} // namespace android::provider

