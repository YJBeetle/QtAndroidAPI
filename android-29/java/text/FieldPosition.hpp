#pragma once

#ifndef JAVA_TEXT_FIELDPOSITION
#define JAVA_TEXT_FIELDPOSITION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::text
{
	class Format_Field;
}

namespace __jni_impl::java::text
{
	class FieldPosition : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::java::text::Format_Field arg0, jint arg1);
		void __constructor(__jni_impl::java::text::Format_Field arg0);
		void __constructor(jint arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint getField();
		void setBeginIndex(jint arg0);
		void setEndIndex(jint arg0);
		QAndroidJniObject getFieldAttribute();
		jint getBeginIndex();
		jint getEndIndex();
	};
} // namespace __jni_impl::java::text

#include "Format_Field.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void FieldPosition::__constructor(__jni_impl::java::text::Format_Field arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.FieldPosition",
			"(Ljava/text/Format$Field;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void FieldPosition::__constructor(__jni_impl::java::text::Format_Field arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.FieldPosition",
			"(Ljava/text/Format$Field;)V",
			arg0.__jniObject().object()
		);
	}
	void FieldPosition::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.FieldPosition",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	jboolean FieldPosition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring FieldPosition::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint FieldPosition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint FieldPosition::getField()
	{
		return __thiz.callMethod<jint>(
			"getField",
			"()I"
		);
	}
	void FieldPosition::setBeginIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setBeginIndex",
			"(I)V",
			arg0
		);
	}
	void FieldPosition::setEndIndex(jint arg0)
	{
		__thiz.callMethod<void>(
			"setEndIndex",
			"(I)V",
			arg0
		);
	}
	QAndroidJniObject FieldPosition::getFieldAttribute()
	{
		return __thiz.callObjectMethod(
			"getFieldAttribute",
			"()Ljava/text/Format$Field;"
		);
	}
	jint FieldPosition::getBeginIndex()
	{
		return __thiz.callMethod<jint>(
			"getBeginIndex",
			"()I"
		);
	}
	jint FieldPosition::getEndIndex()
	{
		return __thiz.callMethod<jint>(
			"getEndIndex",
			"()I"
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class FieldPosition : public __jni_impl::java::text::FieldPosition
	{
	public:
		FieldPosition(QAndroidJniObject obj) { __thiz = obj; }
		FieldPosition(__jni_impl::java::text::Format_Field arg0, jint arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		FieldPosition(__jni_impl::java::text::Format_Field arg0)
		{
			__constructor(
				arg0);
		}
		FieldPosition(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_FIELDPOSITION

