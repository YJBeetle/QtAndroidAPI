#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class FontsContract_Columns : public JObject
	{
	public:
		// Fields
		static JString FILE_ID();
		static JString ITALIC();
		static JString RESULT_CODE();
		static jint RESULT_CODE_FONT_NOT_FOUND();
		static jint RESULT_CODE_FONT_UNAVAILABLE();
		static jint RESULT_CODE_MALFORMED_QUERY();
		static jint RESULT_CODE_OK();
		static JString TTC_INDEX();
		static JString VARIATION_SETTINGS();
		static JString WEIGHT();
		
		// QJniObject forward
		template<typename ...Ts> explicit FontsContract_Columns(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontsContract_Columns(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

