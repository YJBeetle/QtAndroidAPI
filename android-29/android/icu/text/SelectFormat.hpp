#pragma once

#include "../../../JObject.hpp"
#include "../../../java/text/Format.hpp"

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
	class ParsePosition;
}

namespace android::icu::text
{
	class SelectFormat : public java::text::Format
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SelectFormat(const char *className, const char *sig, Ts...agv) : java::text::Format(className, sig, std::forward<Ts>(agv)...) {}
		SelectFormat(QJniObject obj);
		
		// Constructors
		SelectFormat(jstring arg0);
		
		// Methods
		void applyPattern(jstring arg0);
		jboolean equals(jobject arg0);
		jstring format(jstring arg0);
		java::lang::StringBuffer format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		jint hashCode();
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		jstring toPattern();
		jstring toString();
	};
} // namespace android::icu::text

