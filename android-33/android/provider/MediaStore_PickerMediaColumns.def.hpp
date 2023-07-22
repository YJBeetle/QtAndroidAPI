#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class MediaStore_PickerMediaColumns : public JObject
	{
	public:
		// Fields
		static JString DATA();
		static JString DATE_TAKEN();
		static JString DISPLAY_NAME();
		static JString DURATION_MILLIS();
		static JString MIME_TYPE();
		static JString SIZE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_PickerMediaColumns(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_PickerMediaColumns(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

