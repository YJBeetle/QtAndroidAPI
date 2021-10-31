#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class Html : public __JniBaseClass
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
		template<typename ...Ts> explicit Html(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Html(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring escapeHtml(jstring arg0);
		static __JniBaseClass fromHtml(jstring arg0);
		static __JniBaseClass fromHtml(jstring arg0, jint arg1);
		static __JniBaseClass fromHtml(jstring arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		static __JniBaseClass fromHtml(jstring arg0, jint arg1, __JniBaseClass arg2, __JniBaseClass arg3);
		static jstring toHtml(__JniBaseClass arg0);
		static jstring toHtml(__JniBaseClass arg0, jint arg1);
	};
} // namespace android::text

