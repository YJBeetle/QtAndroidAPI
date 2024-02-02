#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class CloudMediaProviderContract_MediaColumns : public JObject
	{
	public:
		// Fields
		static JString DATE_TAKEN_MILLIS();
		static JString DURATION_MILLIS();
		static JString HEIGHT();
		static JString ID();
		static JString IS_FAVORITE();
		static JString MEDIA_STORE_URI();
		static JString MIME_TYPE();
		static JString ORIENTATION();
		static JString SIZE_BYTES();
		static JString STANDARD_MIME_TYPE_EXTENSION();
		static jint STANDARD_MIME_TYPE_EXTENSION_ANIMATED_WEBP();
		static jint STANDARD_MIME_TYPE_EXTENSION_GIF();
		static jint STANDARD_MIME_TYPE_EXTENSION_MOTION_PHOTO();
		static jint STANDARD_MIME_TYPE_EXTENSION_NONE();
		static JString SYNC_GENERATION();
		static JString WIDTH();
		
		// QJniObject forward
		template<typename ...Ts> explicit CloudMediaProviderContract_MediaColumns(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CloudMediaProviderContract_MediaColumns(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

