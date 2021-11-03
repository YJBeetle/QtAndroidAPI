#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class FontsContract_Columns : public JObject
	{
	public:
		// Fields
		static jstring FILE_ID();
		static jstring ITALIC();
		static jstring RESULT_CODE();
		static jint RESULT_CODE_FONT_NOT_FOUND();
		static jint RESULT_CODE_FONT_UNAVAILABLE();
		static jint RESULT_CODE_MALFORMED_QUERY();
		static jint RESULT_CODE_OK();
		static jstring TTC_INDEX();
		static jstring VARIATION_SETTINGS();
		static jstring WEIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit FontsContract_Columns(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontsContract_Columns(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

