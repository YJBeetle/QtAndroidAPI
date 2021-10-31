#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class SyncStateContract : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncStateContract(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SyncStateContract(QJniObject obj);
		
		// Constructors
		SyncStateContract();
		
		// Methods
	};
} // namespace android::provider

