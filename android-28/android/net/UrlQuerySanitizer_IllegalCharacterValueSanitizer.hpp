#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::net
{
	class UrlQuerySanitizer_IllegalCharacterValueSanitizer : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALL_BUT_NUL_AND_ANGLE_BRACKETS_LEGAL();
		static jint ALL_BUT_NUL_LEGAL();
		static jint ALL_BUT_WHITESPACE_LEGAL();
		static jint ALL_ILLEGAL();
		static jint ALL_OK();
		static jint ALL_WHITESPACE_OK();
		static jint AMP_AND_SPACE_LEGAL();
		static jint AMP_LEGAL();
		static jint AMP_OK();
		static jint DQUOTE_OK();
		static jint GT_OK();
		static jint LT_OK();
		static jint NON_7_BIT_ASCII_OK();
		static jint NUL_OK();
		static jint OTHER_WHITESPACE_OK();
		static jint PCT_OK();
		static jint SCRIPT_URL_OK();
		static jint SPACE_LEGAL();
		static jint SPACE_OK();
		static jint SQUOTE_OK();
		static jint URL_AND_SPACE_LEGAL();
		static jint URL_LEGAL();
		
		// QJniObject forward
		template<typename ...Ts> explicit UrlQuerySanitizer_IllegalCharacterValueSanitizer(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UrlQuerySanitizer_IllegalCharacterValueSanitizer(QJniObject obj);
		
		// Constructors
		UrlQuerySanitizer_IllegalCharacterValueSanitizer(jint arg0);
		
		// Methods
		jstring sanitize(jstring arg0);
	};
} // namespace android::net

