#pragma once

#include "../../__JniBaseClass.hpp"
#include "./AttributedCharacterIterator_Attribute.hpp"
#include "./Format_Field.hpp"


namespace __jni_impl::java::text
{
	class MessageFormat_Field : public __jni_impl::java::text::Format_Field
	{
	public:
		// Fields
		static QAndroidJniObject ARGUMENT();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::text


namespace __jni_impl::java::text
{
	// Fields
	QAndroidJniObject MessageFormat_Field::ARGUMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.text.MessageFormat$Field",
			"ARGUMENT",
			"Ljava/text/MessageFormat$Field;"
		);
	}
	
	// Constructors
	void MessageFormat_Field::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.text.MessageFormat$Field",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::text

namespace java::text
{
	class MessageFormat_Field : public __jni_impl::java::text::MessageFormat_Field
	{
	public:
		MessageFormat_Field(QAndroidJniObject obj) { __thiz = obj; }
		MessageFormat_Field()
		{
			__constructor();
		}
	};
} // namespace java::text

