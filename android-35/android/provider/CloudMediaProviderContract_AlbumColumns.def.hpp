#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class CloudMediaProviderContract_AlbumColumns : public JObject
	{
	public:
		// Fields
		static JString DATE_TAKEN_MILLIS();
		static JString DISPLAY_NAME();
		static JString ID();
		static JString MEDIA_COUNT();
		static JString MEDIA_COVER_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit CloudMediaProviderContract_AlbumColumns(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProviderContract_AlbumColumns(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

