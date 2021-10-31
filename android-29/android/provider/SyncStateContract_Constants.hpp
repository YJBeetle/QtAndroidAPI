#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class SyncStateContract_Constants : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncStateContract_Constants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SyncStateContract_Constants(QJniObject obj);
		
		// Constructors
		SyncStateContract_Constants();
		
		// Methods
	};
} // namespace android::provider

