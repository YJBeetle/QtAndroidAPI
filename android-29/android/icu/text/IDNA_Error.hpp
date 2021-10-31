#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Enum.hpp"


namespace android::icu::text
{
	class IDNA_Error : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject BIDI();
		static QAndroidJniObject CONTEXTJ();
		static QAndroidJniObject CONTEXTO_DIGITS();
		static QAndroidJniObject CONTEXTO_PUNCTUATION();
		static QAndroidJniObject DISALLOWED();
		static QAndroidJniObject DOMAIN_NAME_TOO_LONG();
		static QAndroidJniObject EMPTY_LABEL();
		static QAndroidJniObject HYPHEN_3_4();
		static QAndroidJniObject INVALID_ACE_LABEL();
		static QAndroidJniObject LABEL_HAS_DOT();
		static QAndroidJniObject LABEL_TOO_LONG();
		static QAndroidJniObject LEADING_COMBINING_MARK();
		static QAndroidJniObject LEADING_HYPHEN();
		static QAndroidJniObject PUNYCODE();
		static QAndroidJniObject TRAILING_HYPHEN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IDNA_Error(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		IDNA_Error(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::icu::text

