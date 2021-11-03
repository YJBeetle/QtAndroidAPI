#pragma once

#include "../../../JObject.hpp"

class JCharArray;
class JObject;
class JString;
namespace java::lang
{
	class StringBuffer;
}

namespace android::icu::text
{
	class UCharacterIterator : public JObject
	{
	public:
		// Fields
		static jint DONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UCharacterIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterIterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::UCharacterIterator getInstance(JCharArray arg0);
		static android::icu::text::UCharacterIterator getInstance(JObject arg0);
		static android::icu::text::UCharacterIterator getInstance(JString arg0);
		static android::icu::text::UCharacterIterator getInstance(java::lang::StringBuffer arg0);
		static android::icu::text::UCharacterIterator getInstance(JCharArray arg0, jint arg1, jint arg2);
		JObject clone() const;
		jint current() const;
		jint currentCodePoint() const;
		JObject getCharacterIterator() const;
		jint getIndex() const;
		jint getLength() const;
		jint getText(JCharArray arg0) const;
		jint getText(JCharArray arg0, jint arg1) const;
		JString getText() const;
		jint moveCodePointIndex(jint arg0) const;
		jint moveIndex(jint arg0) const;
		jint next() const;
		jint nextCodePoint() const;
		jint previous() const;
		jint previousCodePoint() const;
		void setIndex(jint arg0) const;
		void setToLimit() const;
		void setToStart() const;
	};
} // namespace android::icu::text

