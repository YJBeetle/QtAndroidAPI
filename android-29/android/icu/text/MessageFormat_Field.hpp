#pragma once

#ifndef ANDROID_ICU_TEXT_MESSAGEFORMAT_FIELD
#define ANDROID_ICU_TEXT_MESSAGEFORMAT_FIELD

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/AttributedCharacterIterator_Attribute.hpp"
#include "../../../java/text/Format_Field.hpp"


namespace __jni_impl::android::icu::text
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
} // namespace __jni_impl::android::icu::text


namespace __jni_impl::android::icu::text
{
	// Fields
	QAndroidJniObject MessageFormat_Field::ARGUMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.MessageFormat$Field",
			"ARGUMENT",
			"Landroid/icu/text/MessageFormat$Field;"
		);
	}
	
	// Constructors
	void MessageFormat_Field::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessageFormat$Field",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class MessageFormat_Field : public __jni_impl::android::icu::text::MessageFormat_Field
	{
	public:
		MessageFormat_Field(QAndroidJniObject obj) { __thiz = obj; }
		MessageFormat_Field()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_MESSAGEFORMAT_FIELD

