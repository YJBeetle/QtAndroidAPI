#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class BlockedNumberContract_BlockedNumbers : public JObject
	{
	public:
		// Fields
		static JString COLUMN_E164_NUMBER();
		static JString COLUMN_ID();
		static JString COLUMN_ORIGINAL_NUMBER();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit BlockedNumberContract_BlockedNumbers(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BlockedNumberContract_BlockedNumbers(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

