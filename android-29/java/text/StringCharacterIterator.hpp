#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::text
{
	class StringCharacterIterator : public __JniBaseClass
	{
	public:
		// Fields
		
		StringCharacterIterator(QAndroidJniObject obj);
		// Constructors
		StringCharacterIterator(jstring &arg0);
		StringCharacterIterator(const QString &arg0);
		StringCharacterIterator(jstring &arg0, jint &arg1);
		StringCharacterIterator(const QString &arg0, jint &arg1);
		StringCharacterIterator(jstring &arg0, jint &arg1, jint &arg2, jint &arg3);
		StringCharacterIterator(const QString &arg0, jint &arg1, jint &arg2, jint &arg3);
		StringCharacterIterator() = default;
		
		// Methods
		jobject clone();
		jchar current();
		jboolean equals(jobject arg0);
		jchar first();
		jint getBeginIndex();
		jint getEndIndex();
		jint getIndex();
		jint hashCode();
		jchar last();
		jchar next();
		jchar previous();
		jchar setIndex(jint arg0);
		void setText(jstring arg0);
		void setText(const QString &arg0);
	};
} // namespace java::text

