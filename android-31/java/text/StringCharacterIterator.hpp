#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::text
{
	class StringCharacterIterator : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringCharacterIterator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StringCharacterIterator(QAndroidJniObject obj);
		
		// Constructors
		StringCharacterIterator(JString arg0);
		StringCharacterIterator(JString arg0, jint arg1);
		StringCharacterIterator(JString arg0, jint arg1, jint arg2, jint arg3);
		
		// Methods
		JObject clone();
		jchar current();
		jboolean equals(JObject arg0);
		jchar first();
		jint getBeginIndex();
		jint getEndIndex();
		jint getIndex();
		jint hashCode();
		jchar last();
		jchar next();
		jchar previous();
		jchar setIndex(jint arg0);
		void setText(JString arg0);
	};
} // namespace java::text

