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
		
		// QJniObject forward
		template<typename ...Ts> explicit Collator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Collator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jarray getAvailableLocales();
		static java::text::Collator getInstance();
		static java::text::Collator getInstance(java::util::Locale arg0);
		jobject clone();
		jint compare(jobject arg0, jobject arg1);
		jint compare(jstring arg0, jstring arg1);
		jboolean equals(jobject arg0);
		jboolean equals(jstring arg0, jstring arg1);
		java::text::CollationKey getCollationKey(jstring arg0);
		jint getDecomposition();
		jint getStrength();
		jint hashCode();
		void setDecomposition(jint arg0);
		void setStrength(jint arg0);
	};
} // namespace java::text

