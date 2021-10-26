#pragma once

#ifndef ANDROID_SAX_ELEMENT
#define ANDROID_SAX_ELEMENT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::sax
{
	class Element : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		QAndroidJniObject requireChild(jstring arg0, jstring arg1);
		QAndroidJniObject requireChild(const QString &arg0, const QString &arg1);
		QAndroidJniObject requireChild(jstring arg0);
		QAndroidJniObject requireChild(const QString &arg0);
		void setElementListener(__jni_impl::__JniBaseClass arg0);
		void setTextElementListener(__jni_impl::__JniBaseClass arg0);
		void setStartElementListener(__jni_impl::__JniBaseClass arg0);
		void setEndElementListener(__jni_impl::__JniBaseClass arg0);
		void setEndTextElementListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getChild(jstring arg0, jstring arg1);
		QAndroidJniObject getChild(const QString &arg0, const QString &arg1);
		QAndroidJniObject getChild(jstring arg0);
		QAndroidJniObject getChild(const QString &arg0);
	};
} // namespace __jni_impl::android::sax


namespace __jni_impl::android::sax
{
	// Fields
	
	// Constructors
	void Element::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.sax.Element",
			"(V)V");
	}
	
	// Methods
	jstring Element::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Element::requireChild(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Element::requireChild(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Element::requireChild(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			arg0
		);
	}
	QAndroidJniObject Element::requireChild(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"requireChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Element::setElementListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setElementListener",
			"(Landroid/sax/ElementListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Element::setTextElementListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setTextElementListener",
			"(Landroid/sax/TextElementListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Element::setStartElementListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setStartElementListener",
			"(Landroid/sax/StartElementListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Element::setEndElementListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEndElementListener",
			"(Landroid/sax/EndElementListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Element::setEndTextElementListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setEndTextElementListener",
			"(Landroid/sax/EndTextElementListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Element::getChild(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Element::getChild(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/sax/Element;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Element::getChild(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			arg0
		);
	}
	QAndroidJniObject Element::getChild(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getChild",
			"(Ljava/lang/String;)Landroid/sax/Element;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::sax

namespace android::sax
{
	class Element : public __jni_impl::android::sax::Element
	{
	public:
		Element(QAndroidJniObject obj) { __thiz = obj; }
		Element()
		{
			__constructor();
		}
	};
} // namespace android::sax

#endif // ANDROID_SAX_ELEMENT

