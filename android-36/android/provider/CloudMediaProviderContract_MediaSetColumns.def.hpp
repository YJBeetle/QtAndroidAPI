#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class CloudMediaProviderContract_MediaSetColumns : public JObject
	{
	public:
		// Fields
		static JString DISPLAY_NAME();
		static JString ID();
		static JString MEDIA_COUNT();
		static JString MEDIA_COVER_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit CloudMediaProviderContract_MediaSetColumns(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProviderContract_MediaSetColumns(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

