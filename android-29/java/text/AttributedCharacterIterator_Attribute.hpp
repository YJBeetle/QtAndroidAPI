#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::text
{
	class AttributedCharacterIterator_Attribute : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject INPUT_METHOD_SEGMENT();
		static QAndroidJniObject LANGUAGE();
		static QAndroidJniObject READING();
		
		AttributedCharacterIterator_Attribute(QAndroidJniObject obj);
		// Constructors
		AttributedCharacterIterator_Attribute() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace java::text

