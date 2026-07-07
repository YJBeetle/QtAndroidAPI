#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class CloudMediaProviderContract : public JObject
	{
	public:
		// Fields
		static JString EXTRA_ALBUM_ID();
		static JString EXTRA_LOOPING_PLAYBACK_ENABLED();
		static JString EXTRA_MEDIA_COLLECTION_ID();
		static JString EXTRA_PAGE_SIZE();
		static JString EXTRA_PAGE_TOKEN();
		static JString EXTRA_PREVIEW_THUMBNAIL();
		static JString EXTRA_SORT_ORDER();
		static JString EXTRA_SURFACE_CONTROLLER_AUDIO_MUTE_ENABLED();
		static JString EXTRA_SYNC_GENERATION();
		static JString MANAGE_CLOUD_MEDIA_PROVIDERS_PERMISSION();
		static JString MEDIA_CATEGORY_TYPE_PEOPLE_AND_PETS();
		static JString PROVIDER_INTERFACE();
		static JString SEARCH_SUGGESTION_ALBUM();
		static JString SEARCH_SUGGESTION_DATE();
		static JString SEARCH_SUGGESTION_FACE();
		static JString SEARCH_SUGGESTION_LOCATION();
		static JString SEARCH_SUGGESTION_TEXT();
		static jint SORT_ORDER_DESC_DATE_TAKEN();
		
		// QJniObject forward
		template<typename ...Ts> explicit CloudMediaProviderContract(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProviderContract(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

