#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class CloudMediaProviderContract_MediaCollectionInfo : public JObject
	{
	public:
		// Fields
		static JString ACCOUNT_CONFIGURATION_INTENT();
		static JString ACCOUNT_NAME();
		static JString LAST_MEDIA_SYNC_GENERATION();
		static JString MEDIA_COLLECTION_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit CloudMediaProviderContract_MediaCollectionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProviderContract_MediaCollectionInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

