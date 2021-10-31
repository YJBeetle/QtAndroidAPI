#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::text
{
	class StringCharacterIterator : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringCharacterIterator(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StringCharacterIterator(QAndroidJniObject obj);
		
		// Constructors
		StringCharacterIterator(jstring arg0);
		StringCharacterIterator(jstring arg0, jint arg1);
		StringCharacterIterator(jstring arg0, jint arg1, jint arg2, jint arg3);
		
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
	};
} // namespace java::text

