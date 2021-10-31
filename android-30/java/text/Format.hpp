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
	class FieldPosition;
}
namespace java::text
{
	class ParsePosition;
}

namespace java::text
{
	class Format : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Format(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Format(QJniObject obj);
		
		// Constructors
		
		// Methods
		jobject clone();
		jstring format(jobject arg0);
		java::lang::StringBuffer format(jobject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2);
		__JniBaseClass formatToCharacterIterator(jobject arg0);
		jobject parseObject(jstring arg0);
		jobject parseObject(jstring arg0, java::text::ParsePosition arg1);
	};
} // namespace java::text

