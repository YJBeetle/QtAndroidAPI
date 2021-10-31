#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "./UFormat.hpp"

namespace android::icu::text
{
	class MessagePattern_ApostropheMode;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class Format;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class MessageFormat : public android::icu::text::UFormat
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MessageFormat(const char *className, const char *sig, Ts...agv) : android::icu::text::UFormat(className, sig, std::forward<Ts>(agv)...) {}
		MessageFormat(QAndroidJniObject obj);
		
		// Constructors
		MessageFormat(jstring arg0);
		MessageFormat(jstring arg0, android::icu::util::ULocale arg1);
		MessageFormat(jstring arg0, java::util::Locale arg1);
		
		// Methods
		static jstring autoQuoteApostrophe(jstring arg0);
		static jstring format(jstring arg0, jobjectArray arg1);
		static jstring format(jstring arg0, __JniBaseClass arg1);
		void applyPattern(jstring arg0);
		void applyPattern(jstring arg0, android::icu::text::MessagePattern_ApostropheMode arg1);
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject format(jobjectArray arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(__JniBaseClass arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		QAndroidJniObject getApostropheMode();
		QAndroidJniObject getArgumentNames();
		QAndroidJniObject getFormatByArgumentName(jstring arg0);
		jarray getFormats();
		jarray getFormatsByArgumentIndex();
		QAndroidJniObject getLocale();
		QAndroidJniObject getULocale();
		jint hashCode();
		jobjectArray parse(jstring arg0);
		jobjectArray parse(jstring arg0, java::text::ParsePosition arg1);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		QAndroidJniObject parseToMap(jstring arg0);
		QAndroidJniObject parseToMap(jstring arg0, java::text::ParsePosition arg1);
		void setFormat(jint arg0, java::text::Format arg1);
		void setFormatByArgumentIndex(jint arg0, java::text::Format arg1);
		void setFormatByArgumentName(jstring arg0, java::text::Format arg1);
		void setFormats(jarray arg0);
		void setFormatsByArgumentIndex(jarray arg0);
		void setFormatsByArgumentName(__JniBaseClass arg0);
		void setLocale(android::icu::util::ULocale arg0);
		void setLocale(java::util::Locale arg0);
		jstring toPattern();
		jboolean usesNamedArguments();
	};
} // namespace android::icu::text

