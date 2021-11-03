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
		JObject clone() const;
		jchar current() const;
		jboolean equals(JObject arg0) const;
		jchar first() const;
		jint getBeginIndex() const;
		jint getEndIndex() const;
		jint getIndex() const;
		jint hashCode() const;
		jchar last() const;
		jchar next() const;
		jchar previous() const;
		jchar setIndex(jint arg0) const;
		void setText(JString arg0) const;
	};
} // namespace java::text

