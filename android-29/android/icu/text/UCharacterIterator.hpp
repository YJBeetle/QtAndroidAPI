#pragma once

#include "../../../JObject.hpp"

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
		static android::icu::text::UCharacterIterator getInstance(jcharArray arg0);
		static android::icu::text::UCharacterIterator getInstance(JObject arg0);
		static android::icu::text::UCharacterIterator getInstance(jstring arg0);
		static android::icu::text::UCharacterIterator getInstance(java::lang::StringBuffer arg0);
		static android::icu::text::UCharacterIterator getInstance(jcharArray arg0, jint arg1, jint arg2);
		jobject clone();
		jint current();
		jint currentCodePoint();
		JObject getCharacterIterator();
		jint getIndex();
		jint getLength();
		jint getText(jcharArray arg0);
		jint getText(jcharArray arg0, jint arg1);
		jstring getText();
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

