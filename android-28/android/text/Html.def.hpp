#pragma once

#include "../../JObject.hpp"

class JString;
class JString;

namespace android::text
{
	class Html : public JObject
	{
	public:
		// Fields
		static jint FROM_HTML_MODE_COMPACT();
		static jint FROM_HTML_MODE_LEGACY();
		static jint FROM_HTML_OPTION_USE_CSS_COLORS();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_BLOCKQUOTE();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_DIV();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_HEADING();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_LIST();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_LIST_ITEM();
		static jint FROM_HTML_SEPARATOR_LINE_BREAK_PARAGRAPH();
		static jint TO_HTML_PARAGRAPH_LINES_CONSECUTIVE();
		static jint TO_HTML_PARAGRAPH_LINES_INDIVIDUAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit Html(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Html(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString escapeHtml(JString arg0);
		static JObject fromHtml(JString arg0);
		static JObject fromHtml(JString arg0, jint arg1);
		static JObject fromHtml(JString arg0, JObject arg1, JObject arg2);
		static JObject fromHtml(JString arg0, jint arg1, JObject arg2, JObject arg3);
		static JString toHtml(JObject arg0);
		static JString toHtml(JObject arg0, jint arg1);
	};
} // namespace android::text

