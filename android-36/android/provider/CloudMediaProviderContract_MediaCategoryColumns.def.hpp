#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class CloudMediaProviderContract_MediaCategoryColumns : public JObject
	{
	public:
		// Fields
		static JString DISPLAY_NAME();
		static JString ID();
		static JString MEDIA_CATEGORY_TYPE();
		static JString MEDIA_COVER_ID1();
		static JString MEDIA_COVER_ID2();
		static JString MEDIA_COVER_ID3();
		static JString MEDIA_COVER_ID4();
		
		// QJniObject forward
		template<typename ...Ts> explicit CloudMediaProviderContract_MediaCategoryColumns(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProviderContract_MediaCategoryColumns(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

