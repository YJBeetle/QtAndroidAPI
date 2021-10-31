#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class StringBuffer;
}
namespace java::text
{
	class AttributedCharacterIterator_Attribute;
}

namespace java::text
{
	class AttributedString : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AttributedString(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AttributedString(QAndroidJniObject obj);
		
		// Constructors
		AttributedString(jstring arg0);
		AttributedString(__JniBaseClass arg0);
		AttributedString(jstring arg0, __JniBaseClass arg1);
		AttributedString(__JniBaseClass arg0, jint arg1, jint arg2);
		AttributedString(__JniBaseClass arg0, jint arg1, jint arg2, jarray arg3);
		
		// Methods
		void addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, jobject arg1);
		void addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, jobject arg1, jint arg2, jint arg3);
		void addAttributes(__JniBaseClass arg0, jint arg1, jint arg2);
		QAndroidJniObject getIterator();
		QAndroidJniObject getIterator(jarray arg0);
		QAndroidJniObject getIterator(jarray arg0, jint arg1, jint arg2);
	};
} // namespace java::text

