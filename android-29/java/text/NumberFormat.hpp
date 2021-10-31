#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Format.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class Number;
}
namespace java::lang
{
	class StringBuffer;
}
namespace java::math
{
	class RoundingMode;
}
namespace java::text
{
	class FieldPosition;
}
namespace java::text
{
	class ParsePosition;
}
namespace java::util
{
	class Currency;
}
namespace java::util
{
	class Locale;
}

namespace java::text
{
	class NumberFormat : public java::text::Format
	{
	public:
		// Fields
		static jint FRACTION_FIELD();
		static jint INTEGER_FIELD();
		
		NumberFormat(QAndroidJniObject obj);
		// Constructors
		NumberFormat() = default;
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getCompactNumberInstance();
		static QAndroidJniObject getCompactNumberInstance(java::util::Locale arg0, __JniBaseClass arg1);
		static QAndroidJniObject getCurrencyInstance();
		static QAndroidJniObject getCurrencyInstance(java::util::Locale arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		static QAndroidJniObject getIntegerInstance();
		static QAndroidJniObject getIntegerInstance(java::util::Locale arg0);
		static QAndroidJniObject getNumberInstance();
		static QAndroidJniObject getNumberInstance(java::util::Locale arg0);
		static QAndroidJniObject getPercentInstance();
		static QAndroidJniObject getPercentInstance(java::util::Locale arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		jstring format(jdouble arg0);
		jstring format(jlong arg0);
		QAndroidJniObject format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		QAndroidJniObject getCurrency();
		jint getMaximumFractionDigits();
		jint getMaximumIntegerDigits();
		jint getMinimumFractionDigits();
		jint getMinimumIntegerDigits();
		QAndroidJniObject getRoundingMode();
		jint hashCode();
		jboolean isGroupingUsed();
		jboolean isParseIntegerOnly();
		QAndroidJniObject parse(jstring arg0);
		QAndroidJniObject parse(jstring arg0, java::text::ParsePosition arg1);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
		void setCurrency(java::util::Currency arg0);
		void setGroupingUsed(jboolean arg0);
		void setMaximumFractionDigits(jint arg0);
		void setMaximumIntegerDigits(jint arg0);
		void setMinimumFractionDigits(jint arg0);
		void setMinimumIntegerDigits(jint arg0);
		void setParseIntegerOnly(jboolean arg0);
		void setRoundingMode(java::math::RoundingMode arg0);
	};
} // namespace java::text

