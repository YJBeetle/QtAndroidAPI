#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class BlockedNumberContract_BlockedNumbers : public JObject
	{
	public:
		// Fields
		static jstring COLUMN_E164_NUMBER();
		static jstring COLUMN_ID();
		static jstring COLUMN_ORIGINAL_NUMBER();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit BlockedNumberContract_BlockedNumbers(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlockedNumberContract_BlockedNumbers(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

