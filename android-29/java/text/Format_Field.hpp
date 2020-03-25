#pragma once

#ifndef JAVA_TEXT_FORMAT_FIELD
#define JAVA_TEXT_FORMAT_FIELD

#include "../../__JniBaseClass.hpp"
#include "AttributedCharacterIterator_Attribute.hpp"


namespace __jni_impl::java::text
{
	class Format_Field : public __jni_impl::java::text::AttributedCharacterIterator_Attribute
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::text


namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void Format_Field::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.Format$Field",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::text

namespace java::text
{
	class Format_Field : public __jni_impl::java::text::Format_Field
	{
	public:
		Format_Field(QAndroidJniObject obj) { __thiz = obj; }
		Format_Field()
		{
			__constructor();
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_FORMAT_FIELD

