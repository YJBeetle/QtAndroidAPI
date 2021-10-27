#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		SelectFormat(QAndroidJniObject obj);
		// Constructors
		SelectFormat(jstring &arg0);
		SelectFormat(const QString &arg0);
		SelectFormat() = default;
		
		// Methods
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		jboolean equals(jobject arg0);
		jstring format(jstring arg0);
		jstring format(const QString &arg0);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		jint hashCode();
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		jobject parseObject(const QString &arg0, java::text::ParsePosition arg1);
		jstring toPattern();
		jstring toString();
	};
} // namespace android::icu::text

