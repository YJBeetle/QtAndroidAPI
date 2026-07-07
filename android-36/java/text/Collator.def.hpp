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
		
		// QJniObject forward
		template<typename ...Ts> explicit Collator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Collator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JArray getAvailableLocales();
		static java::text::Collator getInstance();
		static java::text::Collator getInstance(java::util::Locale arg0);
		JObject clone() const;
		jint compare(JObject arg0, JObject arg1) const;
		jint compare(JString arg0, JString arg1) const;
		jboolean equals(JObject arg0) const;
		jboolean equals(JString arg0, JString arg1) const;
		java::text::CollationKey getCollationKey(JString arg0) const;
		jint getDecomposition() const;
		jint getStrength() const;
		jint hashCode() const;
		void setDecomposition(jint arg0) const;
		void setStrength(jint arg0) const;
	};
} // namespace java::text

