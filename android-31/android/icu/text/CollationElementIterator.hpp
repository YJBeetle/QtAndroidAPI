#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class UCharacterIterator;
}

namespace android::icu::text
{
	class CollationElementIterator : public JObject
	{
	public:
		// Fields
		static jint IGNORABLE();
		static jint NULLORDER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CollationElementIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CollationElementIterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint primaryOrder(jint arg0);
		static jint secondaryOrder(jint arg0);
		static jint tertiaryOrder(jint arg0);
		jboolean equals(jobject arg0);
		jint getMaxExpansion(jint arg0);
		jint getOffset();
		jint hashCode();
		jint next();
		jint previous();
		void reset();
		void setOffset(jint arg0);
		void setText(android::icu::text::UCharacterIterator arg0);
		void setText(jstring arg0);
		void setText(JObject arg0);
	};
} // namespace android::icu::text

