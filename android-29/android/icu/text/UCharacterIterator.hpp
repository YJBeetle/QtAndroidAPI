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
		
		// QJniObject forward
		template<typename ...Ts> explicit UCharacterIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterIterator(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::text::UCharacterIterator getInstance(JCharArray arg0);
		static android::icu::text::UCharacterIterator getInstance(JObject arg0);
		static android::icu::text::UCharacterIterator getInstance(JString arg0);
		static android::icu::text::UCharacterIterator getInstance(java::lang::StringBuffer arg0);
		static android::icu::text::UCharacterIterator getInstance(JCharArray arg0, jint arg1, jint arg2);
		JObject clone();
		jint current();
		jint currentCodePoint();
		JObject getCharacterIterator();
		jint getIndex();
		jint getLength();
		jint getText(JCharArray arg0);
		jint getText(JCharArray arg0, jint arg1);
		JString getText();
		jint moveCodePointIndex(jint arg0);
		jint moveIndex(jint arg0);
		jint next();
		jint nextCodePoint();
		jint previous();
		jint previousCodePoint();
		void setIndex(jint arg0);
		void setToLimit();
		void setToStart();
	};
} // namespace android::icu::text

