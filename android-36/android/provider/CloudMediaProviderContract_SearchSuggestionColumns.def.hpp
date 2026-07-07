#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class CloudMediaProviderContract_SearchSuggestionColumns : public JObject
	{
	public:
		// Fields
		static JString DISPLAY_TEXT();
		static JString MEDIA_COVER_ID();
		static JString MEDIA_SET_ID();
		static JString TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit CloudMediaProviderContract_SearchSuggestionColumns(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProviderContract_SearchSuggestionColumns(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

