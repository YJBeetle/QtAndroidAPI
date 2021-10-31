#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class StringBuffer;
}

namespace android::icu::text
{
	class UCharacterIterator : public __JniBaseClass
	{
	public:
		// Fields
		static jint DONE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UCharacterIterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UCharacterIterator(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getInstance(jcharArray arg0);
		static QAndroidJniObject getInstance(__JniBaseClass arg0);
		static QAndroidJniObject getInstance(jstring arg0);
		static QAndroidJniObject getInstance(java::lang::StringBuffer arg0);
		static QAndroidJniObject getInstance(jcharArray arg0, jint arg1, jint arg2);
		jobject clone();
		jint current();
		jint currentCodePoint();
		QAndroidJniObject getCharacterIterator();
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

