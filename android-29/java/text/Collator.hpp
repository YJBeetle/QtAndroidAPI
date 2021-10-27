#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::text
{
	class CollationKey;
}
namespace java::util
{
	class Locale;
}

namespace java::text
{
	class Collator : public __JniBaseClass
	{
	public:
		// Fields
		static jint CANONICAL_DECOMPOSITION();
		static jint FULL_DECOMPOSITION();
		static jint IDENTICAL();
		static jint NO_DECOMPOSITION();
		static jint PRIMARY();
		static jint SECONDARY();
		static jint TERTIARY();
		
		Collator(QAndroidJniObject obj);
		// Constructors
		Collator() = default;
		
		// Methods
		static jarray getAvailableLocales();
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(java::util::Locale arg0);
		jobject clone();
		jint compare(jobject arg0, jobject arg1);
		jint compare(jstring arg0, jstring arg1);
		jint compare(const QString &arg0, const QString &arg1);
		jboolean equals(jobject arg0);
		jboolean equals(jstring arg0, jstring arg1);
		jboolean equals(const QString &arg0, const QString &arg1);
		QAndroidJniObject getCollationKey(jstring arg0);
		QAndroidJniObject getCollationKey(const QString &arg0);
		jint getDecomposition();
		jint getStrength();
		jint hashCode();
		void setDecomposition(jint arg0);
		void setStrength(jint arg0);
	};
} // namespace java::text

