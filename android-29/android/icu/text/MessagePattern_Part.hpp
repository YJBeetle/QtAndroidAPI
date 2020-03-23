#pragma once

#ifndef ANDROID_ICU_TEXT_MESSAGEPATTERN_PART
#define ANDROID_ICU_TEXT_MESSAGEPATTERN_PART

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::text
{
	class MessagePattern_Part_Type;
}
namespace __jni_impl::android::icu::text
{
	class MessagePattern_ArgType;
}

namespace __jni_impl::android::icu::text
{
	class MessagePattern_Part : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jint getLength();
		jint getValue();
		QAndroidJniObject getType();
		jint getIndex();
		jint getLimit();
		QAndroidJniObject getArgType();
	};
} // namespace __jni_impl::android::icu::text

#include "MessagePattern_Part_Type.hpp"
#include "MessagePattern_ArgType.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void MessagePattern_Part::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessagePattern$Part",
			"(V)V");
	}
	
	// Methods
	jboolean MessagePattern_Part::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject MessagePattern_Part::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint MessagePattern_Part::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jint MessagePattern_Part::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I");
	}
	jint MessagePattern_Part::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I");
	}
	QAndroidJniObject MessagePattern_Part::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Landroid/icu/text/MessagePattern$Part$Type;");
	}
	jint MessagePattern_Part::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
	jint MessagePattern_Part::getLimit()
	{
		return __thiz.callMethod<jint>(
			"getLimit",
			"()I");
	}
	QAndroidJniObject MessagePattern_Part::getArgType()
	{
		return __thiz.callObjectMethod(
			"getArgType",
			"()Landroid/icu/text/MessagePattern$ArgType;");
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class MessagePattern_Part : public __jni_impl::android::icu::text::MessagePattern_Part
	{
	public:
		MessagePattern_Part(QAndroidJniObject obj) { __thiz = obj; }
		MessagePattern_Part()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_MESSAGEPATTERN_PART

