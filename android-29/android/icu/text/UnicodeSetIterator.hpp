#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class UnicodeSet;
}
class JString;

namespace android::icu::text
{
	class UnicodeSetIterator : public JObject
	{
	public:
		// Fields
		static jint IS_STRING();
		jint codepoint();
		jint codepointEnd();
		JString string();
		
		// QJniObject forward
		template<typename ...Ts> explicit UnicodeSetIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UnicodeSetIterator(QJniObject obj);
		
		// Constructors
		UnicodeSetIterator();
		UnicodeSetIterator(android::icu::text::UnicodeSet arg0);
		
		// Methods
		JString getString() const;
		jboolean next() const;
		jboolean nextRange() const;
		void reset() const;
		void reset(android::icu::text::UnicodeSet arg0) const;
	};
} // namespace android::icu::text

