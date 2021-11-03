#pragma once

#include "../../JObject.hpp"

class JArray;
class JObject;
class JString;
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
	class Collator : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Collator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Collator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JArray getAvailableLocales();
		static java::text::Collator getInstance();
		static java::text::Collator getInstance(java::util::Locale arg0);
		JObject clone();
		jint compare(JObject arg0, JObject arg1);
		jint compare(JString arg0, JString arg1);
		jboolean equals(JObject arg0);
		jboolean equals(JString arg0, JString arg1);
		java::text::CollationKey getCollationKey(JString arg0);
		jint getDecomposition();
		jint getStrength();
		jint hashCode();
		void setDecomposition(jint arg0);
		void setStrength(jint arg0);
	};
} // namespace java::text

